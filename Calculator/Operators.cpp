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


	this->m_operatorArray.push_back(new Operator_Add);
	this->m_operatorArray.push_back(new Operator_Subtruct);
	this->m_operatorArray.push_back(new Operator_Multiply);
	this->m_operatorArray.push_back(new Operator_Divide);
	this->m_operatorArray.push_back(new Operator_OpenBracket);
	this->m_operatorArray.push_back(new Operator_CloseBracket);


}

void Operators::calculate(const std::string & token, std::stack<BigData>& stackNumbers, std::stack<Operator*>& stackOperators)
{
	for(Operator * iterator : this->m_operatorArray)
	{
		if(iterator->m_operatorName == token)
		{
			if( (iterator->m_priority != -1 && !stackOperators.empty()) && ( iterator->m_priority <= stackOperators.top()->m_priority  || iterator->m_bigPriority ))
			{
				iterator->addToStack(stackNumbers, stackOperators);
			}
			else
			{
				stackOperators.push(iterator);
			}
			break;
		}
	}
}
void Operators::calculate(std::stack<BigData>& stackNumbers, std::stack<Operator*>& stackOperators)
{
	stackOperators.top()->addToStack(stackNumbers, stackOperators);
}

