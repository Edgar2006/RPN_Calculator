#pragma once

#include "Operator.h"


class Operator_Add : public Operator
{
public:
	void calculate(std::stack<BigData>& stackNumbers)override;
	Operator_Add();
};

