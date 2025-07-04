#include <iostream>
#include "ai.hpp"
#include "binarytree.hpp"

int main()
{
    Bot a(1, 2, true);
    Bot b(4, 5, false);
    Bot c(6, 7, true);
    Bot d(8, 9, true);
    Bot e(10, 11, false);
    BinaryTree *Right = new BinaryTree(b);
    BinaryTree *Left1 = new BinaryTree(e);
    BinaryTree *Right1 = new BinaryTree(d);

    BinaryTree *DecisionTree = BinaryTree::Insert(BinaryTree::Insert(Left1, Right1, a), Right, c);
    BinaryTree::Delete(DecisionTree);
    delete Left1;
    delete Right1;
    delete Right;
}