#pragma once
#include "Operator.h"



class Operator_OpenBracket : public Operator
{
public:
	void calculate(std::stack<BigData>& stack)override;
	Operator_OpenBracket();
	void addToStack(std::stack<BigData>& stackNumbers,std::stack<Operator*>& stackOperator)override;
};

