//
// Created by Arturo Bernal on 15/5/22.
//

#include "TreeNode.h"


TreeNode::TreeNode() {
     val = 0;
     left = nullptr;
     right = nullptr ;
}

TreeNode::TreeNode(int x) {
    val = x;
    left = nullptr;
    right = nullptr ;
}

TreeNode::TreeNode(int x, TreeNode *left1, TreeNode *right1) {
    val = x;
    left = left1;
    right = right1;
}
