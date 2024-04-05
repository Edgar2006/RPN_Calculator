#include "Operator_Subtruct.h"



template<class T>
void Operator_Subtruct<T>::calculate(Stack<T>& stackNumbers)
{
	StackValues<T> stackValues = get2Values(stackNumbers);
	stackNumbers.push_back(stackValues.value1 - stackValues.value2);
}

template<class T>
Operator_Subtruct<T>::Operator_Subtruct()
{
	this->m_operatorName = "-";
	this->m_priority = 1;
}
