#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

class Node
{
public:
  int data;
  Node *left, *right;
  Node(int d)
  {
    data = d;
    left = right = NULL;
  }
};

class Solution
{
public:
  Node* insert(Node* root, int data)
  {
    if (root == NULL)
    {
      return new Node(data);
    }
    else
    {
      Node* cur;
      if (data <= root->data)
      {
        cur = insert(root->left, data);
        root->left = cur;
      }
      else
      {
        cur = insert(root->right, data);
        root->right = cur;
      }
      return root;
    }
  }

  void levelOrder(Node *root)
  {
    std::queue<Node *> tree;
    tree.push(root);
    while(!tree.empty())
    {
      std::cout << tree.front()->data << " ";
      if (tree.front()->left != NULL)
      {
        tree.push(tree.front()->left);
      }
      if (tree.front()->right != NULL)
      {
        tree.push(tree.front()->right);
      }
      tree.pop();
    }
    std::cout << std::endl;
    return;
  }

};//End of Solution


int main()
{
  Solution myTree;
  Node* root = NULL;
  int T, data;
  std::cin >> T;
  while (T-- > 0)
  {
    std::cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);
  return 0;
}