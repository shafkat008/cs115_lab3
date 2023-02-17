// Name: Shafkat Alam
// Student Number:200443237
// Date:12/09/2021

#include <iostream>
#include <string>
using namespace std;

const unsigned int NUM_OF_EMPLOYEES = 5;

struct Employee
{
  string name;
  int id;
  double salary;
};

void printEmployee(const Employee& c);
Employee readEmployee();
//----Add findEmployee prototype for Step 2----
int findEmployee(const Employee array[],int tId,int num);
