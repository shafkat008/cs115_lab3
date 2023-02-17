// Name: Shafkat Alam
// Employee Number:200443237
// Date:12/09/2021

#include "Employee.h"

void printEmployee(const Employee& c)
{
    
  cout << "The Employee info is: " << c.name << ", " << c.id << ", $" << c.salary << endl;
}
Employee readEmployee()
{

  Employee tempEmp;
  cout << "Employee Name?: ";
  getline(cin, tempEmp.name);   // command to input a string
  cout << "Employee ID?: ";
  cin >> tempEmp.id;
  cout << "Employee Yearly Salary?: ";
  cin >> tempEmp.salary;
  
  return tempEmp;
}

// int findEmployee()
int findEmployee(const Employee array[],int tId,int num){

  //loop through each element in the array
  for(int i = 0;i < num;i++){
    if(array[i].id == tId){
      //return id index that is looked for
      return i;
    }
    
  }

  //if not found, return -1
    return -1;
}