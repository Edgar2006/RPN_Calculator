#pragma once
#include "Operator.h"


class Operator_Subtruct : public Operator
{
public:
	void calculate(LinkedStack<BigData>& stackNumbers)override;
	Operator_Subtruct();
};

