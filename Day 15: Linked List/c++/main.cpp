#include <iostream>
#include <cstddef>


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
  Node *root;

  Node* insert(Node *head, int data)
  {
    Node *new_node = new Node(data);
    Node *tmp = head;

    if (tmp == NULL)
    {
      /// Empty list
      head = new_node;
      return head;
    }
    else
    {
      while(tmp->next != NULL)
      {
        tmp = tmp->next;
      }
      /// Reached last node of linkeList
      tmp->next = new_node;
      return head;
    }
  }

  void display(Node *head)
  {
    Node *start = head;
    while(start)
    {
      std::cout << start->data << " ";
      start = start->next;
    }
  }
};

int main()
{
  Node *head = NULL;
  Solution mylist;
  int T, data;
  std::cin >> T;
  while(T-- > 0)
  {
    std::cin >> data;
    head = mylist.insert(head, data);
  }
  mylist.display(head);
  return 0;
}