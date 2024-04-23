//#include "RPN_calculator.h"
#include "BigData.h"
#include "RPN_calculator.h"
using namespace std;

const BigData* BigData::BIGDATA_ZERO = new BigData();

int main()
{
   RPN_calculator a;
  
   string infix = "1 + 2 * ( 3 + 4 / 2 - ( 1 + 2 ) ) * 2 + 1";//our infix expression
   ////std::cout << a.calculate(infix).m_value << endl;


   infix = "( 5 + 2 ) * 2 * 10000000000000000000000000000000000000000000000";//our infix expression    38.1428571429
   a.calculate(infix).print();






   return 0;
}
