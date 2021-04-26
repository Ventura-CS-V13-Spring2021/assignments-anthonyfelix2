#include <iostream>
#include <fstream>
using namespace std;

double sum(int a, int b)

double avg(int a, int b)

int main()
{
  ifstream ifs;
  int score1, score2, students;
  string name;
  double sum, avg;
  
  ifs.open("students.txt");
    if (ifs.fail())
    {
        cerr << "File Open Error \n";
        exit(0);
    }

}

double sum(int a, int b)
{
  int result = a + b;
  return result;
}

double avg(int a, int b)
{
  int result = (a + b)/2;
  return result;
}
