#include <iostream>
#include <fstream>
using namespace std;
const int N = 3;
int rdnum, A, B, C, Max, Min, diff;
int get_Rdnum(int &, int &, int &);
int findMin(int, int, int);
int findMax(int, int, int);
int getdifference(int, int);
int main()
{
  get_Rdnum(A,B,C);
  cout << A << B << C;
  Max = findMax(A, B, C);
  Min = findMin(A, B, C);
  diff = getdifference(Max, Min);
  cout << Max << Min;
}
int get_Rdnum(int &a, int &b, int &c)
{
    srand(time(0));
    for (int i = 0; i < N; i++){
    rdnum = rand() % 9;
    if (i == 0)
    a = rdnum;
    if (i == 1)
    b = rdnum;
    if (i == 2)
    c =  rdnum;
    }
}

int findMax(int e, int f, int g)
{
  int largest = e;

  if (f > largest)
  largest = f;
  if (g > largest)
  largest = g;

  return largest;
  
}

int findMin(int h, int i, int j)
{
  int smallest = h;
  if (i < smallest)
  smallest = i;
  if (j < smallest)
  smallest = j;

  return smallest;
}

int getdifference(int k, int l)
{
  int difference;
  difference = k - l ;
  return difference;
}