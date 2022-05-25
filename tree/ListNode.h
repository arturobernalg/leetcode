//
// Created by Arturo Bernal on 23/5/22.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H


class ListNode {
public:
    int val;
public:
    ListNode *next;
public:
    ListNode();

public:
    ListNode(int x);

public:
    ListNode(int x, ListNode *next);
};


#endif //LEETCODE_LISTNODE_H
