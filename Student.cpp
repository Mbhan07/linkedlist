#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

/*

  Mahika Bhan, 12/10/2024

  This is the student.cpp file, which defines the implementation of the student class. Represents a student with first name, last name, student ID and GPA. provides methods to access this information for use in the linked list. 
 */

//constructor, intializies a student object with given first name, last name, ID, and gpa

Student::Student(char* firstNameInput, char* lastNameInput, int inputid, float inputgpa){
  firstname = new char[200];
  lastname = new char[200];
  strcpy(firstname, firstNameInput);
  strcpy(lastname, lastNameInput);
  id = inputid;
  gpa = inputgpa;
}

//returns the first name of the student
char * Student::getFirstName(){
  return firstname;
}

//return the last name of the student
char* Student::getLastName(){
  return lastname;
}

//return the ID of the student
int Student::getID(){

  return id;
}

//return the GPA of the student
float Student::getGPA(){
  return gpa;
}
