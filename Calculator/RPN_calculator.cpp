#include "RPN_calculator.h"

#include <iostream>
#include <string>

#include <sstream>

using std::istringstream;


template<class T>
void RPN_calculator<T>::useOperator(const std::string& token)
{
   
}

template<class T>
std::string RPN_calculator<T>::getToken(const std::string& infixProblem)
{
   istringstream iss(infixProblem);
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

template<class T>
bool RPN_calculator<T>::checkIfTokenNumber(const std::string& token)
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

template<class T>
void RPN_calculator<T>::convertTokenToNumber(const std::string& token)
{
   int num = std::stoi(token);
   m_stackNumbers.push_back();
}

template<class T>
inline T* RPN_calculator<T>::calculate(const std::string & infixProblem)
{
   getToken(infixProblem);
}
