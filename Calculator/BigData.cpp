#include "BigData.h"



void BigData::allocateBigData(const unsigned int capacity)
{
	this->m_noDigits = 0;
	this->m_sign = true;
	this->m_capacity = capacity;
	this->p_digits = new char[this->m_capacity];
}



void BigData::stringToBigData(std::string str)
{
	unsigned int noDigits = str.length();
	bool sign = true;
	if(str[0] == '-')
	{
		sign = false;
		noDigits--;
	}

	allocateBigData(noDigits);

	if (noDigits != 0)
	{
		this->m_sign = sign;
		this->m_noDigits = noDigits;
		for(unsigned int i = 0; i < this->m_noDigits; i++)
		{
			char c = str[str.length() - 1 - i];
			if(c>='0' && c <= '9')
			{
				this->p_digits[i] = c;
			}
			else
			{
				*this = *BigData::BIGDATA_ZERO;
			}
		}
	}

}

void BigData::unsigned_intToBigData(const unsigned int value)
{
}


BigData::BigData(const unsigned int capacity)
{
	allocateBigData(capacity);
}

BigData::BigData(const std::string& value)
{
	stringToBigData(value);
}

BigData::BigData()
{
	allocateBigData(0);
}

BigData::BigData(const BigData& value2)
{
	this->m_noDigits = value2.m_noDigits;
	this->m_sign = value2.m_sign;
	this->m_capacity = value2.m_capacity;
	this->p_digits = new char[this->m_capacity];
	for(int i = 0; i < this->m_capacity;i++)
	{
		this->p_digits[i] = value2.p_digits[i];
	}
}

BigData BigData::operator+(BigData& value2)
{
	return BigData();
}

BigData BigData::operator-(BigData& value2)
{
	return BigData();
}

BigData BigData::operator*(BigData& value2)
{
	return BigData();
}

BigData BigData::operator/(BigData& value2)
{
	return BigData();
}






