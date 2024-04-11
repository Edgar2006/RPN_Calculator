#pragma once


#include "Operator.h"
#include <vector>


class Operators
{
private:
	std::vector<Operator*> m_operatorArray;

public:
	Operators();
	void calculate(const std::string & token, std::stack<BigData>& stackNumbers, std::stack<Operator*>& stackOperators);
	void calculate(Operator* m_operator, std::stack<BigData>& stackNumbers, std::stack<Operator*>& stackOperators);

};

