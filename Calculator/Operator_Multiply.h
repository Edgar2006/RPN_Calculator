#pragma once
#include "Operator.h"


class Operator_Multiply : public Operator
{
public:
	void calculate(std::stack<BigData>& stackNumbers)override;
	Operator_Multiply();
};

