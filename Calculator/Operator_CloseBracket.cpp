#include "Operator_OpenBracket.h"

#include "Operator_CloseBracket.h"



void Operator_CloseBracket::calculate(std::stack<BigData>& stackNumbers)
{
	// need logic
}


Operator_CloseBracket::Operator_CloseBracket():Operator::Operator(")",3)
{
	this->m_bigPriority = true;
}


void Operator_CloseBracket::addToStack(std::stack<BigData>& stackNumbers, std::stack<Operator>& stackOperator)
{
	Operator& iterator = stackOperator.top();
	Operator_OpenBracket operator_OpenBracket;
	while(iterator.m_priority != operator_OpenBracket.m_priority)
	{
		iterator.calculate(stackNumbers);
		stackNumbers.pop();
		iterator = stackOperator.top();
	}
}
