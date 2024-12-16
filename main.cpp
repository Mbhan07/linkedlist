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

  //create a new student object with details in the following format (first name, last name, student ID, GPA)
  Student * testStudent = new Student((char*)"Mahi", (char*)"Bhan", 419503, 4);

  //character arrays to store first and last name
  char firstName[100];
  char lastName[100];

  //copy the first name from the Student object to the firstName array and print it to the console
  strcpy(firstName, testStudent ->getFirstName());
  cout << firstName << endl;

  //copy the last name from the Student object to the lastName array and print it to the console
  strcpy(lastName, testStudent ->getLastName());
  cout << lastName << endl;

  //print student ID and GPA to the console
  cout<<testStudent->getID()<<endl;
  cout<<testStudent->getGPA()<<endl;

  //create a new Node object to store student object
  Node * newNode = new Node(testStudent);
  newNode-> setStudent(testStudent);
  cout << "Who is in the list: ";
  cout << newNode->getStudent() << endl;

  //create a second student
  Student* secondStudent =  new Student ((char*)"Hasini", (char*)"Gadey", 420234, 7.0);
  Node * secondNode = new Node(secondStudent);

  //link the first node to the second node
  newNode ->setNext(secondNode);

  //print the contents of the linked list
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
