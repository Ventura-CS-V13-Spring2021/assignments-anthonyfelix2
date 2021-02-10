#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int rateA = 15.00;
  const int rateB = 12.00;
  const int rateC = 9.00;

  int seatA,seatB,seatC;
  
  cout<<"Please enter the amount of tickets to purchase from A through B"<< endl;

  cin>> seatA >> seatB >> seatC;

  double totalA, totalB, totalC, total_amount;

  totalA = seatA * rateA;
  totalB = seatB * rateB;
  totalC = seatC * rateC;

  total_amount = totalA + totalB + totalC;

  cout<< "The total amount of all tickets is: "<< showpoint << fixed << setprecision(2) << "$" << total_amount <<endl;


}