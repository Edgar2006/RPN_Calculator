#pragma once
#include "Operator.h"



class Operator_OpenBracket : public Operator
{
public:
	void calculate(LinkedStack<BigData>& stack)override;
	Operator_OpenBracket();
	void addToStack(LinkedStack<BigData>& stackNumbers,LinkedStack<Operator>& stackOperator);
};

