#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  node *left;
  int data;
  node *right;
};

node *search(node *t, int key)
{
  if (t != NULL)
  {
    if (t->data == key)
      return t;
    else if (t->data > key)
      return search(t->left, key);
    else
      return search(t->right, key);
  }
  else
    return NULL;
}

node *insert(node *t, int key)
{
  if (t)
  {
    if (t->data > key)
      t->left = insert(t->left, key);
    else if (t->data < key)
      t->right = insert(t->right, key);
    return t;
  }
  else
  {
    node *temp = new node();
    temp->data = key;
    return temp;
  }
}
void level(node *root)
{

  cout << root->data << " ";
  queue<node *> q;
  q.push(root);
  while (!q.empty())
  {
    node *p = q.front();
    q.pop();
    if (p->left)
    {
      cout << p->left->data << " ";
      q.push(p->left);
    }
    if (p->right)
    {
      cout << p->right->data << " ";
      q.push(p->right);
    }
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  node *root = new node;
  root->data = arr[0];
  for (int i = 1; i < 5; i++)
  {
    insert(root, arr[i]);
  }
  level(root);
}