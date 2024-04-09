#pragma once
#include "Operator.h"


class Operator_Multiply : public Operator
{
public:
	void calculate(LinkedStack<BigData>& stackNumbers)override;
	Operator_Multiply();
};

