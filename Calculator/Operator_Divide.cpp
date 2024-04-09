#include "Operator_Divide.h"


void Operator_Divide::calculate(LinkedStack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop_back();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop_back();



	BigData sum = value1 / value2;

	stackNumbers.push_back(sum);
}

Operator_Divide::Operator_Divide() : Operator::Operator("/",2)
{

}
