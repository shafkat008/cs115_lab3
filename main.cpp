// Name: Shafkat Alam
// Student Number:200443237
// Date:12/09/2021

// Filename: main.cpp
// Purpose: Implement functions to read in and print an Employee struct
//          and write an additional function that passes in an array of Employees and
//          returns the index of the found id
//          (the functions will be stored in Employee.cpp)

#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"

int main()
{
  // declare an array of Employees
	Employee employeeArray[NUM_OF_EMPLOYEES];
  // declare a variable to store the Employee id to search for in array
  int employeeId;
  // declare a variable to store index of Employees array where the id was found
  int employeeIndex; 
  
  cout << fixed << showpoint << setprecision(2);

  // read in data for each employee
  for (int i = 0; i < NUM_OF_EMPLOYEES; i++)
  {
    employeeArray[i] = readEmployee();
    cin.ignore(256,'\n');
  }
  cout << endl;
  // print out data for each employee
  for (int i = 0; i < NUM_OF_EMPLOYEES; i++)
  {
    printEmployee(employeeArray[i]);
  }

  //----Add code below for Step2----
  // prompt the user for an id
  cout<< "Enter an id to look for: ";
  cin >> employeeId;
 
  // call the findEmployee function

  employeeIndex = findEmployee(employeeArray, employeeId, NUM_OF_EMPLOYEES);
  
  // if found, display the name of the employee that goes with the id

  if(employeeIndex == -1){
    cout << "Did not find an employee with that Id!";
  }

  else{
    cout << "Found employee: " << employeeArray[employeeIndex].name ;
  }
  
  
  

}
