#include <iostream>
using namespace std;
int main()
{
  int i, z;
  i = 65;
  z = 0;
// If i declare z inside the while loop it does not work, why?
  while(i <= 90)
  { 

    if(z == 5)
    {
    z = z - 5;  
    cout<<endl;
    }

    else
    {
    cout<<static_cast<char>(i)<<" ";
    i++;
    z++;
    }
  }
}