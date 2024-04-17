#pragma once
#include <iostream>
#include <string>


class BigData
{



private:
	void allocateBigData(const unsigned int capacity);
	void stringToBigData(std::string str);
	void unsigned_intToBigData(const unsigned int value);


public:
	BigData(const unsigned int capacity);
	BigData(const std::string & value);
	BigData();
	BigData(const BigData& value2);


public:
	BigData operator +(BigData& value2);
	BigData operator -(BigData& value2);
	BigData operator *(BigData& value2);
	BigData operator /(BigData& value2);



private:
	bool m_sign;
	unsigned int m_capacity;
	unsigned int m_noDigits;
	char* p_digits;

public:
	static const BigData* BIGDATA_ZERO;

};

