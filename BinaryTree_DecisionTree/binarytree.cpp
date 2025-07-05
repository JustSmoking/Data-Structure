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

void BinaryTree::SearchModifyResetValuePrincipe(BinaryTree *tree, Bot Ai)
{
    if (tree == nullptr)
        return;

    if (tree->_Ai == Ai)
    {
        std::cout << "Element trouve" << std::endl;
        tree->_Ai = Bot();
        return;
    }
    SearchModifyResetValuePrincipe(tree->_TreeLeft, Ai);
    SearchModifyResetValuePrincipe(tree->_TreeRight, Ai);
}


bool BinaryTree::DeleteNode(BinaryTree *tree)
{
    if (tree == nullptr)
    {
        std::cout << "C'est bon" << std::endl;
        return true;
    }
    
    if (tree == this->_TreeLeft)
    {
        DeleteNode(this->_TreeLeft);
        delete tree;
    }

    if (tree == this->_TreeRight)
    {
        DeleteNode(this->_TreeRight);
        delete tree;
    }
    
}