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
    /*this section checks for every single number before the number we are checking if they are divisble it will break out of here if it is prime in the block or if the statement is false so it will break once it reaches the number itself and if so that means its prime if not then its not prime*/
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