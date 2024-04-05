#include "Operator_Multiply.h"

template<class T>
void Operator_Multiply<T>::calculate(Stack<T>& stackNumbers)
{
	StackValues<T> stackValues = get2Values(stackNumbers);
	stackNumbers.push_back(stackValues.value1 * stackValues.value2);
}

template<class T>
Operator_Multiply<T>::Operator_Multiply()
{
	this->m_operatorName = "*";
	this->m_priority = 2;
}
