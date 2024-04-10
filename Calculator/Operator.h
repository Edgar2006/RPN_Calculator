#pragma once

#include <iostream>
#include <stack>


#include <string>
#include "BigData.h"




class Operator
{
public:
	Operator(const std::string & m_operatorName, const int & m_priority);
public:
	virtual void calculate(std::stack<BigData>& stackNumbers);
	virtual void addToStack(std::stack<BigData>& stackNumbers, std::stack<Operator> & stackOperator);
public:
	std::string m_operatorName;
	int m_priority;


};

