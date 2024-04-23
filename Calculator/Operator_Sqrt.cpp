#include "Operator_Sqrt.h"

void Operator_Sqrt::calculate(std::stack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop();
	BigData sum = BigData::sqrt(value1);

	stackNumbers.push(sum);
}

Operator_Sqrt::Operator_Sqrt():Operator("sqrt",2)
{
}
