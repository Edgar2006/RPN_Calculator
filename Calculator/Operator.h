#pragma once
#include <iostream>
#include <string>
#include "Stack.h"
#include "StackValues.h"

template<class T>

class Operator
{
public:
	Operator(const std::string & m_operatorName, const int & m_priority);


protected:
	StackValues<T> get2Values(Stack<T>& stackNumbers);
	virtual void calculate(Stack<T>& stackNumbers) = 0;

public:
	std::string m_operatorName;
	int m_priority;


};

