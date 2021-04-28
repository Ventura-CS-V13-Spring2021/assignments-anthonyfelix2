#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int sum(int , int );

int avg(int , int );
int g = 0;

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
        cout << "score1: " << score1 << "\t";
        cout << "score2: " <<score2 << "\t";
        int result1 = sum(score1, score2);
        int result2 = avg(score1, score2);
        cout << " Sum : " << result1 << "\t";
        cout << " Average: " << result2 << endl;
      if (result2 > 80)
      {
        g++;
      }
  }
cout << "The amount of people who had Average scores above 80 were: " << g << " students";
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
