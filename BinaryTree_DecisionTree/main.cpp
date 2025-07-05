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
    Bot k(12, 11, true);
    BinaryTree *Right = new BinaryTree(b);
    BinaryTree *Left1 = new BinaryTree(e);
    BinaryTree *Right1 = new BinaryTree(d);

    BinaryTree *DecisionTree = BinaryTree::Insert(BinaryTree::Insert(Left1, Right1, a), Right, c);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;


    BinaryTree::PrefixPrint(DecisionTree);
    std::cout << std::endl;

    BinaryTree::SearchModifyResetValuePrincipe(DecisionTree, a);
    BinaryTree::SearchModifyResetValuePrincipe(DecisionTree, d);

    BinaryTree::PrefixPrint(DecisionTree);
    std::cout << std::endl;

    DecisionTree->DeleteNode(Right);
    std::cout << std::endl;

    BinaryTree::PrefixPrint(DecisionTree);
    BinaryTree::Delete(DecisionTree);
    delete Left1;
    delete Right1;
    delete Right;
}