#include "Operator_Add.h"
#include <iostream>
#include <string>


template<class T>
void Operator_Add<T>::calculate(Stack<T>& stackNumbers)
{
	StackValues<T> stackValues = get2Values(stackNumbers);
	stackNumbers.push_back(stackValues.value1 + stackValues.value2);
}

template<class T>
Operator_Add<T>::Operator_Add()
{
	this->m_operatorName = "+";
	this->m_priority = 1;
}
