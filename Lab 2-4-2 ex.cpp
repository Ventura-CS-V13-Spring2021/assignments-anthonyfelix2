#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	int rdnum;
	int N;
	int sum=0;
	string name;
	ifstream 	rdfile;

	rdfile.open("rdnum.txt");
	// rdfile >> N;

	// for(int i; i<N; i++)
	while( rdfile >> rdnum >> name )
	{
		// rdfile >> rdnum; 
		sum += rdnum;
		cout << rdnum << " " << name << endl;
	}
	cout << "Sum " << sum << endl;

	rdfile.close();

}