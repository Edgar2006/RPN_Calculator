#pragma once
#include <iostream>

class BigData
{


public:
	BigData(double value);
	BigData();
	BigData(const BigData& value2);
	BigData operator +(BigData& value2);
	BigData operator -(BigData& value2);
	BigData operator *(BigData& value2);
	BigData operator /(BigData& value2);

public:
	double m_value;

};

