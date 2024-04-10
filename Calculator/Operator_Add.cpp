#include "Operator_Add.h"




void Operator_Add::calculate(std::stack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop();



	BigData sum = value1 + value2;

	stackNumbers.push(sum);
}

Operator_Add::Operator_Add():Operator::Operator("+",1)
{

}





