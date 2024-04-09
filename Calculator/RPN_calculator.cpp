#include "RPN_calculator.h"




void RPN_calculator::useOperator(const std::string& token)
{
   m_operators.calculate(token,m_stackNumbers,m_stackOperators);
}

void RPN_calculator::getToken(const std::string& infixProblem)
{
   std::istringstream iss(infixProblem);

   while(iss)
   {
      std::string token;
      iss >> token;
      if(checkIfTokenNumber(token))
      {
         // number stack
         convertTokenToNumber(token);

      }
      else
      {
         // operator stack
         useOperator(token);
      }
   }

}


bool RPN_calculator::checkIfTokenNumber(const std::string token)
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


void RPN_calculator::convertTokenToNumber(const std::string& token)
{
   BigData num(std::stoi(token));
   m_stackNumbers.push_back(num);
}


BigData RPN_calculator::calculate(const std::string & infixProblem)
{
   getToken(infixProblem);

   while (!m_stackOperators.isEmpty())
   {
      m_operators.calculate(m_stackOperators.top(), m_stackNumbers,m_stackOperators);
   }
   return m_stackNumbers.top().m_value;
}
