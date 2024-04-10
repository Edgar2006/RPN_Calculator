#include "Operator.h"
#include "Operator_Add.h"
#include "Operator_Subtruct.h"
#include "Operator_Divide.h"
#include "Operator_Multiply.h"
#include "Operator_OpenBracket.h"
#include "Operator_CloseBracket.h"



#include "Operators.h"



Operators::Operators()
{


	Operator_Add add;
	Operator_Subtruct subtruct;
	Operator_Multiply multiply;	
	Operator_Divide divide;	
	Operator_OpenBracket openBracket;
	Operator_CloseBracket closeBracket;
	this->m_operatorArray.push_back(add);
	this->m_operatorArray.push_back(subtruct);
	this->m_operatorArray.push_back(multiply);
	this->m_operatorArray.push_back(divide);
	this->m_operatorArray.push_back(openBracket);
	this->m_operatorArray.push_back(closeBracket);


}

void Operators::calculate(const std::string & token, std::stack<BigData>& stackNumbers, std::stack<Operator>& stackOperators)
{
	for(Operator & iterator : this->m_operatorArray)
	{
		if(iterator.m_operatorName == token)
		{
			if(!stackOperators.empty() && iterator.m_priority < stackOperators.top().m_priority)
			{
				iterator.addToStack(stackNumbers, stackOperators);
			}
			else
			{
				stackOperators.push(iterator);
			}
			break;
		}
	}
}
void Operators::calculate(Operator m_operator, std::stack<BigData>& stackNumbers, std::stack<Operator>& stackOperators)
{
	if(m_operator.m_priority < stackOperators.top().m_priority)
	{
		m_operator.addToStack(stackNumbers, stackOperators);
	}
	else
	{
		stackOperators.push(m_operator);
	}
}

