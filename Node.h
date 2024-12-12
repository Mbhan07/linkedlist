#ifndef NODE_H //beginning of header guard
#define NODE_H
#include <iostream>
#include <cstring>

using namespace std;

class Node{
 public:
  Node(Student * newStudent);
  ~Node();
  void setStudent(Student* newStudent);
  char* getStudent();
  void setNext(Node* newnext);
  Node* getNext();
 private:
  Student* value;
  Node* next;
};
#endif
