#include "BigData.h"

BigData::BigData(double m_value)
{
	this->m_value = m_value;
}

BigData::BigData()
{
	this->m_value = 0;
}

BigData::BigData(const BigData& value2)
{
	this->m_value = value2.m_value;
}


BigData BigData::operator+(BigData& value2)
{
	BigData sum(this->m_value + value2.m_value);
	return sum;
}

BigData BigData::operator-(BigData& value2)
{
	BigData sum(this->m_value - value2.m_value);
	return sum;
}

BigData BigData::operator*(BigData& value2)
{
	BigData sum(this->m_value * value2.m_value);
	return sum;
}

BigData BigData::operator/(BigData& value2)
{
	BigData sum(this->m_value / (double) value2.m_value);
	return sum;
}


