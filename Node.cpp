#include <iostream>
#include <cstring>
#include "Node.h:

using namespace std;

Node::Node(){
  value = 0;
  next = NULL;
}

Node::~Node(){
  delete &value;
  next = NULL;
}

void Node::setValue(int newvalue){
  value = newvalue;
}

int Node::getValue(){
  return value;
}

void NODE::setNext(Node* newnext){
  new newnext;
}

Node* Node::getNext(){
  return next;
}
