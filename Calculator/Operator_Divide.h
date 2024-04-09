#pragma once
#include "Operator.h"


class Operator_Divide : public Operator
{
public:
	void calculate(LinkedStack<BigData>& stackNumbers)override;
	Operator_Divide();
};

