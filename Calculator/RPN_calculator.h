#pragma once

#include "Operators.h"
#include <sstream>


class RPN_calculator
{

private:
	void useOperator(std::string token);
	void getToken(std::string infixProblem);
	bool checkIfTokenNumber(std::string token);
	void convertTokenToNumber(std::string token);
public:


	BigData calculate(const std::string & infixProblem);
private:
	Operators m_operators;
	std::stack<BigData> m_stackNumbers;
	std::stack<Operator> m_stackOperators;
};

