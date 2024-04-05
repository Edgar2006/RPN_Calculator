#pragma once
#include "Operator.h"

template<class T>

class Operator_Divide : public Operator<T>
{
public:
	void calculate(Stack<T>& stack)override;
	Operator_Divide();
};

