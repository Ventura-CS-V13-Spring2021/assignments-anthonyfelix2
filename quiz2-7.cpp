#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int total_num;
    string deptname;
    string empname;
    double salary;
    int empid, number;
    ofstream ofs;
    double sum, avg;
    ifstream ifs;

    ofs.open("employee.txt");
    if (ofs.fail())
    {
        cerr << "File Op[en Error\n";
        exit(0);
    }
    cout << "Enter the number of employees : ";
    cin >> total_num;
    ofs << total_num << endl;
    for (int i = 0; i < total_num; i++)
    {
        cout << "Enter the emp id : ";
        cin >> empid;
        cout << "Enter the emp name : ";
        cin >> empname;
        cout << "Enter the dept name : ";
        cin >> deptname;
        cout << "Enter the salary : ";
        cin >> salary;
        ofs << empid << " " << empname << " " << deptname << " " << salary << endl;
    }
    ofs.close();
  
  ifs.open("employee.txt");
    if (ifs.fail())
    {
        cerr << "File Open Error \n";
        exit(0);
    }
    ifs >> total_num;
    sum = 0;
    for (int i = 0; i < total_num; i++)
    {
        ifs >> empid >> empname >> deptname >> number;
        cout << " emp id : " << empid << "\t";
        cout << " emp name : " << empname << "\t";
        cout << " dept name : " << deptname << "\t";
        cout << " salary : " << number << "\n";
        sum += number;
    }
    avg = sum / total_num;
    cout << " Sum : " << sum << "\t"
         << "Avg : " << avg << endl;
}