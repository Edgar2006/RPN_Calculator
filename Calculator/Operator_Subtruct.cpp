#include "Operator_Subtruct.h"



void Operator_Subtruct::calculate(std::stack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop();



	BigData sum = value2 - value1;

	stackNumbers.push(sum);
}


Operator_Subtruct::Operator_Subtruct() : Operator::Operator("-",1)
{

}
