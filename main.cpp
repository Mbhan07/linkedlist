#include "Node.h"
#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;
/*

  This is the main file for Linked Lists, aproject that explores how objects can be stored, and retrieved using successive pointers. This is another project also dealing with inheritance.

  By: Mahika Bhan
  12/03/2024


 */

//void add(int newvalue);
//void print(Node* next);

int main(){
  Student * testStudent = new Student((char*)"Mahi", (char*)"Bhan", 419503, 4);
  char firstName[100];
  char lastName[100];

  strcpy(firstName, testStudent ->getFirstName());
  cout << firstName << endl;

  strcpy(lastName, testStudent ->getLastName());
  cout << lastName << endl;

  cout<<testStudent->getID()<<endl;
  cout<<testStudent->getGPA()<<endl;

  Node * newNode = new Node(testStudent);
  newNode-> setStudent(testStudent);
  cout << "Who is in the list: ";
  cout << newNode->getStudent() << endl;

  Student* secondStudent =  new Student ((char*)"Anika", (char*)"Gupta", 419503, 3.2);
  Node * secondNode = new Node(secondStudent);
  newNode ->setNext(secondNode);
  cout << "This is who is added into the list, and conents of the list: ";
  cout<<newNode->getStudent()<<","<<newNode->getNext()->getStudent()<<endl;

    
  /*Node* head = NULL;
  add(5);
  print(head);
  add(7);
  print(head);
  add(2);
  print(head);*/

  return 0;
}

/*void add(int newvalue) {
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
  }*/
