#pragma once

#include "Operator.h"




class Operator_CloseBracket : public Operator
{
public:
	void calculate(LinkedStack<BigData>& stack)override;
	Operator_CloseBracket();
	void addToStack(LinkedStack<BigData>& stackNumbers, LinkedStack<Operator>& stackOperator);

};

