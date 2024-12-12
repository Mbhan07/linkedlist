#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

/*

  Mahika Bhan, 12/10/2024

  This is the student.cpp file
 */


Student::Student(char* firstNameInput, char* lastNameInput, int inputid, float inputgpa){
  firstname = new char[200];
  lastname = new char[200];
  strcpy(firstname, firstNameInput);
  strcpy(lastname, lastNameInput);
  id = inputid;
  gpa = inputgpa;
}


char * Student::getFirstName(){
  return firstname;
}

char* Student::getLastName(){
  return lastname;
}

int Student::getID(){

  return id;
}

float Student::getGPA(){
  return gpa;
}
