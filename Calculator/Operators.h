#pragma once

#include "Operator.h"
#include <vector>
template<class T>


class Operators
{
private:
	std::vector<Operator<T>> m_operatorArray;

public:
	Operators();
	void calculate(const std::string & token, Stack<T>& m_stackNumbers, Stack<T>& m_stackOperators);
};

