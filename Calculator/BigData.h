#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#define BASE 10

class BigData
{

private:
	enum Compare
	{
		GREATHER,
		LESS,
		EQUAL
	};


private:
	void setValueSize(const int size);
	void stringToBigData(std::string str);
	void unsigned_intToBigData(size_t value);
	void intToBigData(int value);
	static void removeForwardZero(BigData& sum);

public:
	BigData(const int capacity);
	BigData(const std::string & value);
	BigData();
	BigData(const BigData& value2);
	void print();
	static BigData::Compare compareBigData(const BigData& value1, const BigData& value2);
public:
	BigData operator +(BigData& value2);
	BigData operator -(BigData& value2);
	BigData operator *(BigData& value2);
	BigData operator /(BigData& value2);
	static BigData sqrt(BigData& value1);
public:
	bool operator ==(BigData& value2);
	bool operator <(BigData& value2);
	bool operator <=(BigData& value2);

private:
	bool m_sign;
	std::vector<int> m_value;

public:
	static const BigData* BIGDATA_ZERO;


};

