#include "Operator.h"
#include "Operator_Add.h"
#include "Operator_Subtruct.h"
#include "Operator_Divide.h"
#include "Operator_Multiply.h"
#include "Operator_OpenBracket.h"
#include "Operator_CloseBracket.h"



#include "Operators.h"



template<class T>
Operators<T>::Operators()
{


	Operator_Add<T> add;
	Operator_Subtruct<T> subtruct;
	Operator_Multiply<T> multiply;	
	Operator_Divide<T> divide;	
	Operator_OpenBracket<T> openBracket;
	Operator_CloseBracket<T> closeBracket;
	this->m_operatorArray.push_back(add);
	this->m_operatorArray.push_back(subtruct);
	this->m_operatorArray.push_back(multiply);
	this->m_operatorArray.push_back(divide);
	this->m_operatorArray.push_back(openBracket);
	this->m_operatorArray.push_back(closeBracket);


}

template<class T>
void Operators<T>::calculate(const std::string& token, Stack<T>& m_stackNumbers, Stack<T>& m_stackOperators)
{
	for(Operator<T>& iterator : this->m_operatorArray)
	{
		if(iterator.m_operatorName == token)
		{
		}
	}
}

