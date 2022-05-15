//
// Created by Arturo Bernal on 15/5/22.
//

#ifndef LEETCODE_SAMETREE_H
#define LEETCODE_SAMETREE_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SameTree {

public:
public:
   bool isSameTree(TreeNode* p, TreeNode* q);
};




#endif //LEETCODE_SAMETREE_H
