#include "Operator.h"
#include <string>


template<class T>

Operator<T>::Operator(const std::string& m_operatorName, const int& m_priority)
{
	this->m_operatorName = m_operatorName;
	this->m_priority = m_priority;
}

template<class T>
StackValues<T> Operator<T>::get2Values(Stack<T>& stackNumbers)
{
	StackValues<T> stackValues;
	stackValues.value1 = stackNumbers.top();
	stackNumbers.pop_back();
	stackValues.value2 = stackNumbers.top();
	stackNumbers.pop_back();
	return stackValues;
}


