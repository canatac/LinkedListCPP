//
//  main.cpp
//  LinkedListCPP
//
//  Created by Jan ATAC on 29/08/2017.
//  Copyright © 2017 NaturalInterface. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

template <class T>
class LinkedListNode {
public:
 T value;
 LinkedListNode* next;
 LinkedListNode* previous;

 string hello(){
  string hello ("Hello, World!\n");
  string question ("Comment vous appelez-vous ?\n");
  string name;

  cout << hello << endl << question;

  cin >> name;

  cout << "Bonjour " << name << "!\n";

  return hello;
 }
};

template <class T>
class LinkedList {
public:
 bool cycle;
 LinkedListNode<T>* head = nullptr;
 LinkedList() {
  cout << "Object is being created" << endl;
 }

 bool isEmpty(){
  return head == 0;
 };
};

// Member functions definitions including constructor


int main(int argc, const char * argv[]) {

 LinkedListNode<string> node;
 node.value = "YO";
 node.hello();

 LinkedList<string> list;

 if (list.isEmpty()) {
  cout << "Empty list" << "\n";
 }else{
   cout << "List is not empty" << "\n";
 }



 return 0;

}



