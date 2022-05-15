//
// Created by Arturo Bernal on 15/5/22.
//

#include <clocale>
#include <iostream>
#include "SameTree.h"

using namespace std;


int main(int argc, char **argv) {
    SameTree sameTree;

    TreeNode *p = {
            
    };
    TreeNode* q;

    cout << "is same? => " << sameTree.isSameTree(p,q) << endl;
    return 0;
}

bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL && q == NULL) {
        return true;
    }
    if (p == NULL || q == NULL) {
        return false;
    }

    if (p != NULL && q != NULL) {
        return (p->val == q->val
                && isSameTree(p->left, q->left)
                && isSameTree(p->right, q->right));
    }

    return false;
}



