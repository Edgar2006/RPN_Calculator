#pragma once

#include "Operator.h"




class Operator_CloseBracket : public Operator
{
public:
	void calculate(std::stack<BigData>& stack)override;
	Operator_CloseBracket();
	void addToStack(std::stack<BigData>& stackNumbers, std::stack<Operator>& stackOperator);

};

