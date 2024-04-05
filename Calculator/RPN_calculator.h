#pragma once
#include <iostream>
#include <string>
#include "Stack.h"
#include "StackValues.h"
#include "Operators.h"

template<class T>

class RPN_calculator
{

private:
	void useOperator(const std::string & token);
	std::string getToken(const std::string & infixProblem);
	bool checkIfTokenNumber(const std::string & token);
	void convertTokenToNumber(const std::string & token);
public:
	T* calculate(const std::string & infixProblem);
private:
	Operators<T> m_operators;
	Stack<T> m_stackNumbers;
	Stack<T> m_stackOperators;
};

