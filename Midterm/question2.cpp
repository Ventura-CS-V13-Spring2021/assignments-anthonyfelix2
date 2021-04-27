#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);

int isGreater(int n);
const int N = 10;

int main ()
{
   
    ofstream ofs;

    ofs.open("numbers.txt");
    if (ofs.fail())
    {
        cerr << "File Op[en Error\n";
        exit(0);
    }
  for (int z = 0; z < N; z++)
  {
    int k;
    k = getRdnum();
    if (isGreater(k)){
        ofs << k << " " ;
    }
  }  
}

int isGreater(int n)
{
  static int i, prec;
  i = 0;
  if (i == 0)
  {
    prec = n;
    i++;
  }
  if (prec < n)
  {
    return 1;
  }
  else if (prec > n)
  {
    return 0;
  }
  prec = n;
  

}

int getRdnum(void)
{
  int rdum;

    rdum = rand()%50;
    cout << "Random number: " << rdum << endl;
    return rdum;
  
}