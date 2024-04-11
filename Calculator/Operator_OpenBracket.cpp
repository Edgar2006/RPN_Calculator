#include "Operator_OpenBracket.h"


void Operator_OpenBracket::calculate(std::stack<BigData>& stackNumbers)
{
	// need logic
}

Operator_OpenBracket::Operator_OpenBracket() : Operator::Operator("(",-1)
{
	this->m_bigPriority = true;
}

void Operator_OpenBracket::addToStack(std::stack<BigData>& stackNumbers, std::stack<Operator*>& stackOperator)
{

}
