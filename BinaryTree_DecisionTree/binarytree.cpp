#include "binarytree.hpp"
#include <iostream>


BinaryTree::BinaryTree()
{
    this->_Parent = nullptr;
    this->_TreeLeft = nullptr;
    this->_TreeRight =  nullptr;
}

BinaryTree::BinaryTree(Bot Ai)
{
    this->_Parent = nullptr;
    this->_TreeLeft = nullptr;
    this->_TreeRight = nullptr;
    this->_Ai = Ai;
    this->_Ai.PrintBotInfo();
}

BinaryTree *BinaryTree::Insert(BinaryTree *Left, BinaryTree *Right, Bot Ai)
{
    BinaryTree *Tree = new BinaryTree(Ai);
    Tree->_TreeLeft = Left;
    Tree->_TreeRight = Right;

    if(Left != nullptr)
        Left->_Parent = Tree;
    
        if (Right != nullptr)
        {
            Left->_Parent = Tree;
        }

        std::cout << "Insertion reussie" << std::endl;
    
        return Tree;
}

void BinaryTree::Delete(BinaryTree *b)
{
    if (b == nullptr) return;


    std::cout << "Suppresion de " << " ";
    b->_Ai.PrintBotInfo(); //Debug

    Delete(b->_TreeLeft);
    Delete(b->_TreeRight);

    delete b;
    
}

void BinaryTree::PrefixPrint(BinaryTree *tree)
{
    if (tree != nullptr)
    {
        tree->_Ai.PrintBotInfo();
        PrefixPrint(tree->_TreeLeft);
        PrefixPrint(tree->_TreeRight);
    }
    
}