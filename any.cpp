/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class strings {
private:
	int a;
    int b;
public:
  strings(int x, int y)
  {
        a=x;
        b=y;
  }
  ~strings()
  {
      cout<<"you are in a destructer \n";
      cout << (a+b);
      a=0;
      b=0;
  }
};
int main()
{
    strings s(5,6);
    {
        strings r(8,6);
    }
}