#pragma once
#include "Operator.h"


class Operator_Sqrt : public Operator
{
public:
	void calculate(std::stack<BigData>& stackNumbers)override;
	Operator_Sqrt();
};

