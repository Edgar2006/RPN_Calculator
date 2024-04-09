#pragma once
#include <iostream>

class BigData
{


public:
	BigData(int value);
	BigData();
	BigData(const BigData& value2);
	BigData operator +(BigData& value2);
	BigData operator -(BigData& value2);
	BigData operator *(BigData& value2);
	BigData operator /(BigData& value2);

public:
	int m_value;

};

