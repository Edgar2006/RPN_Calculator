#pragma once

#include "Operator.h"

template<class T>

class Operator_Add : public Operator<T>
{
public:
	void calculate(Stack<T>& stack)override;
	Operator_Add();
};

