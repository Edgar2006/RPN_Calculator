#include "Operator_OpenBracket.h"

#include "Operator_CloseBracket.h"



void Operator_CloseBracket::calculate(LinkedStack<BigData>& stackNumbers)
{
	// need logic
}


Operator_CloseBracket::Operator_CloseBracket():Operator::Operator(")",3)
{
}


void Operator_CloseBracket::addToStack(LinkedStack<BigData>& stackNumbers, LinkedStack<Operator>& stackOperator)
{
	Operator iterator = stackOperator.top();
	Operator_OpenBracket operator_OpenBracket;
	while(iterator.m_priority != operator_OpenBracket.m_priority)
	{
		iterator.calculate(stackNumbers);
		stackNumbers.pop_back();
		iterator = stackOperator.top();
	}
}
