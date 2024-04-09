#pragma once


#include "Operator.h"
#include <vector>


class Operators
{
private:
	std::vector<Operator> m_operatorArray;

public:
	Operators();
	void calculate(const std::string & token, LinkedStack<BigData>& stackNumbers, LinkedStack<Operator>& stackOperators);
	void calculate(Operator m_operator, LinkedStack<BigData>& stackNumbers, LinkedStack<Operator>& stackOperators);

};

