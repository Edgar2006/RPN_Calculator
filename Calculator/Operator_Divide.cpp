#include "Operator_Divide.h"


template<class T>
void Operator_Divide<T>::calculate(Stack<T>& stackNumbers)
{
	StackValues<T> stackValues = get2Values(stackNumbers);
	stackNumbers.push_back(stackValues.value1 / stackValues.value2);
}

template<class T>
Operator_Divide<T>::Operator_Divide()
{
	this->m_operatorName = "/";
	this->m_priority = 2;
}
