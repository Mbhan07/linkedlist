#ifndef NODE_H //beginning of header guard
#define NODE_H
#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;
/*
Contains all the variables/functions for the Node.cpp file and defines the NOde class

Mahika Bhan, 12/13/2024

 */
class Node{
 public:
  //constructor
  Node(Student * newStudent);

  //destructor: cleanrs up memory allocated for NOde
  ~Node();

  //sets student associatedf with node to nerw student object
  void setStudent(Student* newStudent);

  //returns first name of student stored in node
  char* getStudent();
  void setNext(Node* newnext);
  Node* getNext();
 private:

  //pointer to next student object
  Student* value;

  //pointer to next node in linked list
  Node* next;
  
};

//end of header guard
#endif
