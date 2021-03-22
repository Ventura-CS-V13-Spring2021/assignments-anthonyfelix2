#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
// best i can 
int main()
{
  int E_ID;
  double salary;
  string E_N, D_N;
  string " ";

  ofstream file;
  file.open("employee.txt");
  
  cout << "Please enter the employee ID, employee name, department name and salary. Please type in quit when done" << endl;
  while(cin >> E_ID >> E_N >> D_N >> salary)
  file << E_ID <<" " << E_N << " "<< D_N <<" " << salary;

  file.close();

  ifstream file1;
  file1.open ("employee.txt");

  cout << "employee ID" << "employee name" << "department name" << "salary";
  while(file1 >> E_ID >> " " >> E_N >> " " >> D_N >> " ">> salary)
  cout << E_ID << E_N << D_N << salary;
  



}