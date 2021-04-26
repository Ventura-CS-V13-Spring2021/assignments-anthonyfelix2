#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int sum(int , int );

int avg(int , int );
//best i can do I do not know how to make this run. Wasted one hour here got to move on.
int main()
{
  ifstream ifs;
  int score1, score2, students;
  string name;
  double sum_, avg_;
  
  ifs.open("students.txt");
    if (ifs.fail())
    {
        cerr << "File Open Error \n";
        exit(0);
    }

  while(ifs >> name >> score1 >> score2)
  {
    cout << name << "\t"; 
    cout << score1 << "\t";
    cout << score2;
   int result1 = sum(score1, score2);
   int result2 = avg(score1, score2);
    cout << "Sum : " << result1 << "Average: " << result2 << endl;
  }

}

int sum(int a, int b)
{
  int result = a + b;
  return result;
}

int avg(int a, int b)
{
  int result = (a + b)/2;
  return result;
}
