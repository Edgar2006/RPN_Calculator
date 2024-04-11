#include "RPN_calculator.h"




void RPN_calculator::useOperator(std::string token)
{
   m_operators.calculate(token,m_stackNumbers,m_stackOperators);
}

void RPN_calculator::getToken(std::string infixProblem)
{
   std::istringstream iss(infixProblem);
   std::string token;
   while(iss)
   {

      iss >> token;
      if(checkIfTokenNumber(token))
      {
         // number stack
         convertTokenToNumber(token);

      }
      else
      {

         if(token == ")")
         {
            useOperator(token);

         }
         else
         {
            useOperator(token);
         }




         // operator stack
         //useOperator(token);
      }
   }

}


bool RPN_calculator::checkIfTokenNumber(std::string token)
{
   bool flag = true;
   for (int i=0; i<token.length(); i++)
   {
      if (isdigit(token[i]) == false)
      {
         flag = false;
         break;
      }
   }
   return flag;
}


void RPN_calculator::convertTokenToNumber(std::string token)
{
   int value = std::stoi(token);
   BigData num(value);
   m_stackNumbers.push(num);
}


BigData RPN_calculator::calculate(const std::string & infixProblem)
{
   getToken(infixProblem);

   while (!m_stackOperators.empty())
   {
      m_operators.calculate(m_stackOperators.top(), m_stackNumbers,m_stackOperators);
   }
   return m_stackNumbers.top().m_value;
}
