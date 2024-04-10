#include "Operator_Multiply.h"

void Operator_Multiply::calculate(std::stack<BigData>& stackNumbers)
{

	BigData value1 = stackNumbers.top();
	stackNumbers.pop();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop();



	BigData sum = value1 * value2;
	stackNumbers.push(sum);
}

Operator_Multiply::Operator_Multiply():Operator::Operator("*",2)
{

}
