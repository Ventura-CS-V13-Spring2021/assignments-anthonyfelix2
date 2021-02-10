#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double C, F;
  cout<< "Enter temperature in celcius" <<endl;
  cin >> C;
  F = 9/5.0 * C + 32;
  cout<< C << "degrees celcius and " << F <<" degrees fahrenheit" << endl;
  
}