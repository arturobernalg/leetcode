//
// Created by Arturo Bernal on 15/5/22.
//

#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H


class TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode();
public:
    TreeNode(int x);
public:
    TreeNode(int x, TreeNode *left, TreeNode *right);
};


#endif //LEETCODE_TREENODE_H
