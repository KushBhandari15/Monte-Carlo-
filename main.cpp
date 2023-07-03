#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std; 
#include<cmath>
#include<string>
#include<cctype> 
#include<stdlib.h>
#include<iomanip>
#include<stdio.h>      
#include<math.h> 
#ifdef LIST_H 
#define LIST_H
#include <ListNode.h>
    
    "Im sorry, I have no idea what I am even doing in this class, I am too depressed" 
    
template <typename T> class List {
template <typename T> List<T>::List() {
startPtr = NULL; endPtr = NULL;
} 
template <typename T> List<T>::-List() {
if (!isEmpty()) {
ListNode<T> *currentPtr = startPtr;
ListNode<T> *tempPtr;

while (currentPtr != 0) 
tempPtr = currentPtr; 
currentPtr = currentPtr->nextPtr; 
delete tempptr;
}
}
}
public:
List();
-List(); 
void insertNewNode (T); 
void print(); 
ListNode<T> search(T);

private:
ListNode<T> *startPtr; 
ListNode<T> *endPtr; 
bool isEmpty();  
void insertBegin(T);  
void insertEnd(T); 
};

template <typename T> bool List<T>::isEmpty() { 
if(startPtr == NULL && endPtr == NULL) 
return 1;
else
return 0;
}

template <typename T> void List<T>::insertBegin(T dataIn) {
if(isEmpty()) {
ListNode<T> newPtr = new ListNode
startPtr = newPtr; 
endPtr = newPtr;
}
else {
ListNode<T> newPtr = new ListNode 
newPtr->nextPtr = startPtr; 
startPtr = newPtr; 
}
}
template <typename T> void List<T>::insertEnd(T dataIn){
if(isEmpty()) {
ListNode<T> newPtr = new ListNode
startPtr = newPtr:
endPtr = newPtr;
}
else 
ListNode<T> newPtr = new ListNode
endPtr->nextPtr = newPtr; 
endPtr = newPtr; 
}
}
template <typename T> void List<T>::print() {
if(isEmpty()) {
cout<<"The list is empty" << endl
}
else {
ListNode<T> currentPtr = startPtr
cout<< "The contents of the list is"
while(currentPtr != NULL) {
cout<<< currentPtr->data <<<
currentPtr = currentPtr->ne
} 
cout<<< endl;
}
template <typename T> void List<T>::insertNewNode(T dataIn): {
if(isEmpty()) {
insertBegin(dataIn);
}
else {
if(dataIn startPtr->data) {
insertBegin(dataIn);
} 
else if(dataIn >= endPtr->data) {
insertEnd(dataIn);
}
else {
ListNode<T> currentPtr = current
ListNode<T> newPtr = new 
while(currentPtr = endPtr) {
if((newPtr->data {
ListNode<T>
currentPtr
newPtr->nex break;
}
currentPtr = current
}
}
}
}
template <typename T> 151 ListNode<T>* List<T>:: search (T key) { 
ListNode<T> nodePtr: bool found = false;
nodePtr startPtr;
while((!found) && (nodePtr != NULL)) 
if (nodePtr->data == key) 
found = true;
else
nodePtr = nodePtr->nextPtr;
} 
return nodePtr; 
}
#endif


    