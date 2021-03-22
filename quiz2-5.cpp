#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int num,i,range1,range2;

cout <<"Enter the upper and lower numbers of your range, note only positive numbers :";
cin >> range1 >> range2;

  for(num=range1; num <= range2; num++)
  {
    for(i=2; i<num; i++)
    {
      if(num % i ==0)
          break;
    }
    if (i == num)
        cout << num << " Is a prime number\n";
    else
        cout << num << " Is NOT a prime number\n";
  }
}