#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
  int data;
  Node* next;

  Node(int data) : data(data), next(nullptr) {}
};

class LinkedList
{
  private:
    Node* head;
  
  public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();
    void push_back(Node* new_node);
    
};

#endif