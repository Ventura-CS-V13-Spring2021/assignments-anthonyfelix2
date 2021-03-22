#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
// tried doing without creating a file but i cannot figure it out
// this is the best i can do taking too long on this problem =
int main()
{
  int rdnum, max, P, S;
  max = 0;
	int N = 5;
	ofstream 	rdmfile;

	rdmfile.open("rdnum.txt Q");
  srand(time(0));
	for(int i; i<N; i++)
	{
		rdnum = random() % 100;
		rdmfile << rdnum << endl;
	}

	rdmfile.close();

  ifstream 	rdomfile ;

	rdomfile.open("rdnum.txt Q");

  while( rdomfile  >> rdnum )
  {
if(max == 0)
    {
    max = rdnum;
    }
if (P>=1)
    {
  if (rdnum>max)
  {
  S = rdnum;
  break;
  }
    }
  P++;
cout << rdnum << endl;
  }
cout << S;
if (S==0)
cout<< "there was never a number larger than the previous";

rdomfile.close();
}