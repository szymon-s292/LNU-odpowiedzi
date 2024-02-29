#include <Node.hpp>

bool find(const Node* node, int n)
{
    if(node == nullptr)
        return false;

    if(node->value == n)
        return true;

    if(n < node->value)
        return find(node->left, n);
    else
        return find(node->right, n);
}

void emplace(Node* node, int value)
{
    if(node == nullptr)
        return;

    if(value < node->value)
    {
        if(node->left == nullptr)
            node->left = new Node{ value };
        else
            emplace(node->left, value);
    }
    else if(value > node->value)
    {
        if(node->right == nullptr)
            node->right = new Node{ value };
        else
            emplace(node->right, value);
    }
}
