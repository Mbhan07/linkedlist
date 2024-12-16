#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;
/*

  This is the Node.cpp file for Linked Lists, which has the implmentation for the Node class. It contains methods to set and get student information and link nodes together

  Mahika Bhan, 12/13/2024

*/

//constructor
//initialized node with pointer to a Student object, sets necxt pointer to null
Node::Node(Student* newStudent){
  value = newStudent;
  next = NULL;
}


//destructor for the node class
Node::~Node(){
  delete &value; //delete memory for student object
  next = NULL; //set pointer to null
}

//set student associate to node with a new student object
void Node::setStudent(Student *newStudent){
  value = newStudent; 
}

//return first name of student within the node
char * Node::getStudent(){
  return value->getFirstName();
}

//sets the next pointer to point to the next node in the linked list
void Node::setNext(Node* newnext){
  next = newnext;
}

//returns pointer to next node in linked list
Node* Node::getNext(){
  return next;
}
