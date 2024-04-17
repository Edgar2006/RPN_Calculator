//#include "RPN_calculator.h"
#include "BigData.h"
using namespace std;

const BigData* BigData::BIGDATA_ZERO = new BigData();

int main()
{
   //RPN_calculator a;
  
   //string infix = "1 + 2 * ( 3 + 4 / 2 - ( 1 + 2 ) ) * 2 + 1";//our infix expression
   ////std::cout << a.calculate(infix).m_value << endl;


   //infix = "( ( ( 9 * 4 ) - ( 6 / 2 ) ) + ( ( 18 / 7 ) * 2 ) ) - 10";//our infix expression    38.1428571429
   //std::cout << a.calculate(infix).m_value << endl;


   BigData a("5673");




   return 0;
}
