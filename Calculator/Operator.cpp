#include "Operator.h"



Operator::Operator(const std::string& m_operatorName, const int& m_priority)
{
	this->m_operatorName = m_operatorName;
	this->m_priority = m_priority;
	this->m_bigPriority = false;
}


void Operator::addToStack(std::stack<BigData>& stackNumbers, std::stack<Operator*> & stackOperator)
{
	Operator* iterator = stackOperator.top();
	if(this->m_priority != -1)
	{

		while(iterator->m_priority >= this->m_priority)
		{
			iterator->calculate(stackNumbers);
			stackOperator.pop();
			if(!stackOperator.empty())
			{
				iterator = stackOperator.top();
			}
			else
			{
				break;
			}
		}

	}
	stackOperator.push(this);
}


