#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  
  ifs.open("students.txt");
    if (ifs.fail())
    {
        cerr << "File Open Error \n";
        exit(0);
    }

}