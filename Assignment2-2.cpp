#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     int duplicate_numbers = 0;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     
     if (number1 == number2 && number1 == number3)
     cout << "All the numbers you entered are duplicate_numbers";

     else if (number2 == number1 && number2 == number3)
     cout << "All the numbers you entered are duplicate_numbers";

     else if(number1 == number2)
     cout << "Two numbers you entered are the duplicate_numbers";

     else if(number1 == number3)
     cout << "Two numbers you entered are the duplicate_numbers";

     else if(number2 == number3)
     cout << "Two numbers you entered are the duplicate_numbers";

     else
     cout<< "None of the numbers you entered are duplicate_numbers";

     return 0;
}