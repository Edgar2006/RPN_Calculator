#include "Operator_Divide.h"


void Operator_Divide::calculate(std::stack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop();



	BigData sum = value1 / value2;

	stackNumbers.push(sum);
}

Operator_Divide::Operator_Divide() : Operator::Operator("/",2)
{

}
