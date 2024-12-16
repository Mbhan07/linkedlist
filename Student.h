//student.h file

#ifndef STUDENT_H // begining of header guard
#define STUDENT_H
#include <iostream>
#include <cstring>

using namespace std;
/*
  defines the student class used to represent a student object
  stores first name, last name, ID, GPS
  provides methodds to acccess these attricbutes

  Mahika Bhan, 12/13/2024
 */

//define student class

class Student{
public:
  //default constructor
  Student();

  //to initialize a student
  Student(char* firstNameInput, char * lastNameInput, int inputid, float inputgpa);

  //to return first name
  char * getFirstName();

  //to return last name
  char * getLastName();

  //to return ID
  int getID();

  //to return GPA
  float getGPA();

  //variables to store student information
  char * firstname;
  char * lastname;
  int id;
  int gpa;
};

//end of header guard
#endif
