#pragma once
#include "Operator.h"


class Operator_Subtruct : public Operator
{
public:
	void calculate(std::stack<BigData>& stackNumbers)override;
	Operator_Subtruct();
};

