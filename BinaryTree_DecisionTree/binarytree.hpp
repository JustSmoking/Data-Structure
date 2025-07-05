#ifndef __BINARYTREE__
#define __BINARYTREE__
#include "ai.hpp"

    class BinaryTree
    {
        public:
            BinaryTree();
            BinaryTree(Bot);
            static BinaryTree *Insert(BinaryTree*, BinaryTree*, Bot);
            static void Delete(BinaryTree*);
            static void PrefixPrint(BinaryTree*);
            static void SearchModifyResetValuePrincipe(BinaryTree *, Bot);
            bool DeleteNode(BinaryTree *Node);


        private:
            Bot _Ai;
            BinaryTree *_TreeLeft;
            BinaryTree *_TreeRight;
            BinaryTree *_Parent;
            
    };


#endif
