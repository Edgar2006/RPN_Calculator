#include "Operator_OpenBracket.h"


template<class T>
void Operator_OpenBracket<T>::calculate(Stack<T>& stackNumbers)
{
	// need logic
}

template<class T>
Operator_OpenBracket<T>::Operator_OpenBracket()
{
	this->m_operatorName = "(";
	this->m_priority = 3;
}
