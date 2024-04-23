#include "BigData.h"


void BigData::setValueSize(const int size)
{
	std::vector<int>v(size,0);
	this->m_value = v;
}

void BigData::stringToBigData(std::string str)
{
	size_t size = str.length();
	bool sign = true;
	if(str[0] == '-')
	{
		sign = false;
		size--;
	}
	this->m_sign = 1;

	if (size != 0)
	{
		this->m_sign = sign;
		for(unsigned int i = 0; i < size; i++)
		{
			char c = str[str.length() - 1 - i];
			if(c>='0' && c <= '9')
			{
				this->m_value.push_back(c - '0');
			}
			else
			{
				*this = *BigData::BIGDATA_ZERO;
			}
		}
	}

}

void BigData::unsigned_intToBigData(size_t value)
{
	this->m_sign = 1;
	if(value<0)
	{
		value *= -1;
		this->m_sign = 0;
	}
	while (value)
	{
		this->m_value.push_back(value%BASE);
		value /= BASE;
	}
}

void BigData::intToBigData(int value)
{
	bool sign = true;
	if(value < 0)
	{
		sign = false;
	}
	unsigned_intToBigData(value);
	this->m_sign = sign;
}

void BigData::removeForwardZero(BigData& sum)
{
	while(sum.m_value.size() > 1 && !(sum.m_value[sum.m_value.size() - 1]))
	{
		sum.m_value.pop_back();
	}
}

BigData::BigData(const int value)
{
	intToBigData(value);
}

BigData::BigData(const std::string& value)
{
	stringToBigData(value);
}

BigData::BigData()
{
	this->m_sign = 1;
}

BigData::BigData(const BigData& value2)
{
	this->m_sign = value2.m_sign;
	this->m_value = value2.m_value;
}

void BigData::print()
{
	if(!this->m_sign)
	{
		std::cout << "-";
	}
	for(int i = this->m_value.size() - 1;i>=0;i--)
	{
		std::cout << this->m_value[i];
	}
	std::cout<<std::endl;
}

BigData::Compare BigData::compareBigData(const BigData& value1, const BigData& value2)
{
	if(value1.m_sign && !value2.m_sign)
	{
		return Compare::GREATHER;
	}
	else if (!value1.m_sign && value2.m_sign)
	{
		return Compare::LESS;
	}

	else if (value1.m_sign == value2.m_sign)
	{
		Compare compare = Compare::EQUAL;
		if(value1.m_value.size() > value2.m_value.size())
		{
			compare = Compare::GREATHER;
		}
		else if(value1.m_value.size() < value2.m_value.size())
		{
			compare = Compare::LESS;
		}

		else{
			size_t iterator = value1.m_value.size();
			while (iterator--)
			{
				int a = value1.m_value[iterator];
				int b = value2.m_value[iterator];
				if(a > b)
				{
					compare = Compare::GREATHER;
					break;
				}
				else if(a < b)
				{
					compare = Compare::LESS;
					break;
				}
			}

		}

		if(!value1.m_sign)
		{
			if(compare == Compare::GREATHER)
			{
				compare = Compare::LESS;
			}
			else if(compare == Compare::LESS)
			{
				compare = Compare::GREATHER;
			}
		}
		return compare;
	}

}

BigData BigData::operator+(BigData& value2)
{
	BigData& value1 = *this;

	if(value1.m_sign && !value2.m_sign) // v1 + -v2 = v1 - v2
	{
		value2.m_sign = true;
		return value1 - value2;
	}

	else if(!value1.m_sign && value2.m_sign) // -v1 + v2 = v2 - v1
	{
		value1.m_sign = true;
		return value2 - value1;
	}

	size_t size = std::max(value1.m_value.size(), value2.m_value.size()) + 1;
	BigData sum;

	bool carry = false;
	for(size_t i = 0;i < size;i++)
	{
		int result = carry ? 1 : 0;
		if(i < value1.m_value.size())
		{
			result += value1.m_value[i];
		}
		if(i < value2.m_value.size())
		{
			result += value2.m_value[i];
		}

		if((result) >= 10)
		{
			carry = true;
			result -= 10;
		}
		else
		{
			carry = false;
		}
		sum.m_value.push_back(result);
	}
	removeForwardZero(sum);

	if(!value1.m_sign && !value2.m_sign)// -v1 + -v2 = -(v1 + v2)
	{
		sum.m_sign = false;
	}

	return sum;
}

BigData BigData::operator-(BigData& value2)
{
	BigData& value1 = *this;
	Compare compare = compareBigData(value1, value2);
	if(compare == Compare::EQUAL)
	{
		return *BIGDATA_ZERO;
	}
	if(value1.m_sign && !value2.m_sign)// v1 - -v2 = v1 + v2
	{
		value2.m_sign = true;
		return value1 + value2;
	}
	else if(!value1.m_sign && !value2.m_sign)// - v1 - -v2 = v2 - v1
	{
		value1.m_sign = true;
		value2.m_sign = true;
		return value2 - value1;
	}
	else
	{
		if(compare == Compare::LESS)// v2 > v1; v1 - v2 = -(v2 - v1)
		{
			BigData sum = value2 - value1;
			sum.m_sign = !sum.m_sign;
			return sum;
		}
	}

	size_t size = value1.m_value.size();
	BigData sum;
	bool carry = false;
	for(size_t i = 0;i < size;i++)
	{
		int result = carry ? -1 : 0;
		if(i < value1.m_value.size())
		{
			result += value1.m_value[i];
		}
		if(i < value2.m_value.size())
		{
			result -= value2.m_value[i];
		}


		if(result < 0)
		{
			carry = true;
			result += 10;
		}
		else
		{
			carry = false;
		}

		sum.m_value.push_back(result);
	}
	removeForwardZero(sum);
	return sum;

}

BigData BigData::operator*(BigData& value2)
{
	BigData& value1 = *this;
	if(value1.m_value.size() == 0 || value2.m_value.size() == 0)
	{
		return *BIGDATA_ZERO;
	} 
	bool sign = !(value1.m_sign ^ value2.m_sign); // 1 ^ 1 || 0 ^ 0 ;
	BigData sum;
	sum.m_sign = sign;
	sum.setValueSize(value1.m_value.size() + value2.m_value.size());
	for(int i=0;i<value1.m_value.size();i++)
	{
		int carry = 0;
		for(int j=0;j<value2.m_value.size();j++)
		{
			int cur = sum.m_value[i + j] + value1.m_value[i] * value2.m_value[j] + carry;
			carry = cur / BASE;
			sum.m_value[i + j] = cur % BASE;
		}
		int cur = value2.m_value.size();
		while (carry)
		{
			sum.m_value[i + cur] = carry % BASE;
			cur++;
			carry = cur / BASE;
		}
	}

	removeForwardZero(sum);
	return sum;
}

BigData BigData::operator/(BigData& value2)
{
	BigData& value1 = *this;
	if(value1.m_value.size() == 0 || value2.m_value.size() == 0)
	{
		return *BIGDATA_ZERO;
	} 
	bool sign = !(value1.m_sign ^ value2.m_sign); // 1 ^ 1 || 0 ^ 0 ;
	BigData sum;
	sum.m_sign = sign;
	sum.setValueSize(value1.m_value.size() - value2.m_value.size() + 1);
	for(int i = sum.m_value.size()-1; i >= 0;i--)
	{
		while ( (value2 * sum) <= value1)
		{
			sum.m_value[i]++;
		}
		sum.m_value[i]--;
	}
	removeForwardZero(sum);
	return sum;
}

BigData BigData::sqrt(BigData& value1)
{
	if(value1.m_value.size() == 0 || !value1.m_sign)
	{
		return *BIGDATA_ZERO;
	} 
	BigData sum;
	sum.m_sign = true;
	sum.setValueSize(value1.m_value.size()/2 + 1);
	for(int i = sum.m_value.size()-1; i >= 0;i--)
	{
		while ((sum * sum) <= value1)
		{
			sum.m_value[i]++;
		}
		sum.m_value[i]--;
	}
	removeForwardZero(sum);
	return sum;
}

bool BigData::operator==(BigData& value2)
{
	Compare compare = compareBigData(*this, value2);
	if(compare == Compare::EQUAL)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

bool BigData::operator<(BigData& value2)
{
	Compare compare = compareBigData(*this, value2);
	if(compare == Compare::LESS)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool BigData::operator<=(BigData& value2)
{
	Compare compare = compareBigData(*this, value2);
	if(compare == Compare::LESS || compare == Compare::EQUAL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}





