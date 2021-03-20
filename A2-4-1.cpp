#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

	int rdnum;
	int N;
	ofstream 	rdfile;

	rdfile.open("rdnum.txt");

	cout << "Enter the number of random nummbers to be generated \n";
	cin >> N;
	// rdfile << N << endl;
	srand(time(0));
	for(int i; i<N; i++)
	{
		rdnum = random() % 100;
		rdfile << rdnum << endl;
	}

	rdfile.close();

}