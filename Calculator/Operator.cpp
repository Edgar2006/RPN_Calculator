#include "Operator.h"
#include <string>



Operator::Operator(const std::string& m_operatorName, const int& m_priority)
{
	this->m_operatorName = m_operatorName;
	this->m_priority = m_priority;
}


void Operator::calculate(LinkedStack<BigData>& stackNumbers)
{
}

void Operator::addToStack(LinkedStack<BigData>& stackNumbers, LinkedStack<Operator> & stackOperator)
{
	Operator iterator = stackOperator.top();
	while(iterator.m_priority >= this->m_priority)
	{
		iterator.calculate(stackNumbers);
		stackNumbers.pop_back();
		iterator = stackOperator.top();
	}
	stackOperator.push_back(*this);
}


