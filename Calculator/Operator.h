#pragma once

#include <iostream>

#include <string>
#include "BigData.h"
#include "LinkedStack.h"
#include "LinkedStack.cpp"




class Operator
{
public:
	Operator(const std::string & m_operatorName, const int & m_priority);
public:
	virtual void calculate(LinkedStack<BigData>& stackNumbers);
	virtual void addToStack(LinkedStack<BigData>& stackNumbers, LinkedStack<Operator> & stackOperator);
public:
	std::string m_operatorName;
	int m_priority;


};

