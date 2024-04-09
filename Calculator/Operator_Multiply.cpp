#include "Operator_Multiply.h"

void Operator_Multiply::calculate(LinkedStack<BigData>& stackNumbers)
{

	BigData value1 = stackNumbers.top();
	stackNumbers.pop_back();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop_back();



	BigData sum = value1 * value2;
	stackNumbers.push_back(sum);
}

Operator_Multiply::Operator_Multiply():Operator::Operator("*",2)
{

}
