#pragma once
#include "Operator.h"


class Operator_Divide : public Operator
{
public:
	void calculate(std::stack<BigData>& stackNumbers)override;
	Operator_Divide();
};

