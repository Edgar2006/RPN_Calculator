#include "RPN_calculator.h"

using namespace std;

int main()
{
   RPN_calculator a;
  
   string infix = "1 + 2 * ( 3 + 4 / 2 - ( 1 + 2 ) ) * 2 + 1";//our infix expression
   //std::cout << a.calculate(infix).m_value << endl;


   infix = "( ( 9 * 4 ) - ( 6 / 2 ) ) + ( ( 18 / 7 ) * 2 )";//our infix expression    38.1428571429
   std::cout << a.calculate(infix).m_value << endl;
   return 0;
}
