#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

int main()
{
   string infix = "3 ^ 4 + ( 11 - ( 3 * 2 ) ) / 2";//our infix expression
   istringstream iss(infix);
   vector<string> tokens;//store the tokens here
   while(iss)
   {
      string temp;
      iss >>temp;
      tokens.push_back(temp);
      cout << temp << endl;
   }


}
