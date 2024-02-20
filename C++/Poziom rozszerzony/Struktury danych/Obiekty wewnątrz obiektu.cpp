// You can do this!

// Code here...
#include "Node.hpp"
bool find(const Node* root, int n)
{
    if(!root) return false;
    if(root->value == n) return true;
    return find(root->left, n) || find(root->right, n);
}

void emplace(Node* root, int n)
{

}
