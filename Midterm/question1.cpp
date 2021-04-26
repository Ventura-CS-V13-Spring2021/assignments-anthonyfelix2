#include <iostream>
#include <fstream>
using namespace std;

double sum(int , int )

double avg(int , int )

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

  while(ifs >> name >> score1 >> score2)
  {
    cout << name "\t" << score1 "\t" << score2;
    result1 = sum(score1, score2);
    result2 = avg(score1, score2);
    cout << "Sum : " << result1 << "Average: " << result2 << endl;
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
