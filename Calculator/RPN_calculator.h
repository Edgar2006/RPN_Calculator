#pragma once

#include "Operators.h"
#include <sstream>


class RPN_calculator
{

private:
	void useOperator(const std::string & token);
	void getToken(const std::string & infixProblem);
	bool checkIfTokenNumber(const std::string token);
	void convertTokenToNumber(const std::string & token);
public:


	BigData calculate(const std::string & infixProblem);
private:
	Operators m_operators;
	LinkedStack<BigData> m_stackNumbers;
	LinkedStack<Operator> m_stackOperators;
};

