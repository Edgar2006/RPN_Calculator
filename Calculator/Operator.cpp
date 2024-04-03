#include "Operator.h"

Operator::Operator(const char & m_operator, const int & m_priority)
{
	this->m_operator = m_operator;
	this->m_priority = m_priority;
}
