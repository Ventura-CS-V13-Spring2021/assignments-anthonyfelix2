#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
// is there is anything i can do for efficiency in my design for this lab??

int main()
{
  int rdnum, max, min, average;
	int N =0;
	int sum=0;
  max,min = 0;

	ifstream 	rdfile ;

	rdfile.open("rdnum.txt");
	//   >> N;
	// for(int i; i<N; i++)
	while( rdfile  >> rdnum )
	{
   N++;
   if(max == 0 && min == 0)
   {
    max = rdnum;
    min = rdnum;
   }
   if(rdnum > max)
    {
    max = rdnum;
    }
    else if(rdnum < min)
    {
    min = rdnum;
    }      
                          
		sum += rdnum;
		cout << rdnum << endl;
    average = sum/N;
	}
	cout << "Sum " << sum << endl;
  cout<< "The total numbers of integers is: " << N << endl;
  cout<< "The smallest number of the integers is: " << min <<endl;
  cout<< "The largest number of the integers is: "<<max<<endl;
  cout<< "The average of the numbers is: "<< average<<endl;

 rdfile.close();

}