#include "Operator_Add.h"




void Operator_Add::calculate(LinkedStack<BigData>& stackNumbers)
{
	BigData value1 = stackNumbers.top();
	stackNumbers.pop_back();
	BigData value2 = stackNumbers.top();
	stackNumbers.pop_back();



	BigData sum = value1 + value2;

	stackNumbers.push_back(sum);
}

Operator_Add::Operator_Add():Operator::Operator("+",1)
{

}





