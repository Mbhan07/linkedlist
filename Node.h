#ifndef NODE_H //beginning of header guard
#define NODE_H
#include <iostream>
#include <cstring>

using namespace std;

class Node{
 public:
  Node();
  ~Node();
  void setValue(int newvalue);
  int getValue();
  void setNext(Node* newnext);
  Node* getNext();
 private:
  int value;
  Node* next;
};
#endif
