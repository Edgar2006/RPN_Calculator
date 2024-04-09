#include "Operator_Subtruct.h"



void Operator_Subtruct::calculate(LinkedStack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop_back();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop_back();



	BigData sum = value1 - value2;

	stackNumbers.push_back(sum);
}


Operator_Subtruct::Operator_Subtruct() : Operator::Operator("-",1)
{

}
