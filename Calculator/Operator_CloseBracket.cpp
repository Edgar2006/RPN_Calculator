#include "Operator_CloseBracket.h"



template<class T>
void Operator_CloseBracket<T>::calculate(Stack<T>& stackNumbers)
{
	// need logic
}

template<class T>
Operator_CloseBracket<T>::Operator_CloseBracket()
{
	this->m_operatorName = ")";
	this->m_priority = 3;
}
