#include "RPN_calculator.h"

using namespace std;

int main()
{
   RPN_calculator a;
  
   string infix = "1 + 2 * ( 3 + 4 / 2 - ( 1 + 2 ) ) * 2 + 1";//our infix expression
   std::cout << a.calculate(infix).m_value << endl;

   return 0;
}
