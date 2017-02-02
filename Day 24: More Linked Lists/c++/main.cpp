#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


class Node
{
public:
  int data;
  Node *next;
  Node(int d)
  {
    data = d;
    next = NULL;
  }
};


class Solution
{
public:

  Node* removeDuplicates(Node *head)
  {
    if (head == NULL)
    {
      return head;
    }
    Node *current_node = head;
    while(current_node->next != NULL)
    {
      if (current_node->data == current_node->next->data)
      {
        /// Duplicate data.
        current_node->next = current_node->next->next;
      }
      else
      {
        current_node = current_node->next;
      }
    }
    return head;
  }

  Node* insert(Node *head, int data)
  {
    Node* p = new Node(data);
    if(head == NULL)
    {
      head = p;
    }
    else if(head->next == NULL)
    {
      head->next = p;
    }
    else
    {
      Node *start = head;
      while(start->next != NULL)
      {
        start = start->next;
      }
      start->next = p;
    }
    return head;
  }

  void display(Node *head)
  {
    Node *start = head;
    while(start)
    {
      std::cout << start->data << " ";
      start = start->next;
    }
    std::cout << std::endl;
  }
};

int main()
{
  Node* head = NULL;
  Solution mylist;
  int T, data;
  std::cin >> T;
  while(T-- > 0)
  {
    std::cin >> data;
    head = mylist.insert(head, data);
  }
  head = mylist.removeDuplicates(head);

  mylist.display(head);

}