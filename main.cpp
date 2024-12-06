#include "Node.h"
#include <iostream>
#include <cstring>

using namespace std;
/*

  This is the main file for Linked Lists, aproject that explores how objects can be stored, and retrieved using successive pointers. This is another project also dealing with inheritance.

  By: Mahika Bhan
  12/03/2024


 */

void add(int newvalue);
void print(Node* next);

int main(){
  Node* head = NULL;
  add(5);
  print(head);
  add(7);
  print(head);
  add(2);
  print(head);

  return 0;
}

void add(int newvalue) {
  Node* current = head;

  if (current == NULL) {
    head = new Node();
    head->setValue(newvalue);
  }else {
    while (current->getNext() != NULL){
      current = current ->getNext();
    }
    current ->setNext(new Node());
    current ->getNext()->setValue(newvalue);

  }
}

void print(Node* next){
  if(next == head){
    cout << "lists:";
  }
  if(next != NULL){
    cout << next->getValue() << " ";
    print(next->getNext());
  }
}
