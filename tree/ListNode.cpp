//
// Created by Arturo Bernal on 23/5/22.
//

#include "ListNode.h"


ListNode::ListNode(){
    val = 0;
    next = nullptr;
}
ListNode::ListNode(int x){
    val = x;
    next = nullptr;
}
ListNode::ListNode(int x, ListNode *inputNext) {
    val = x;
    next = inputNext;
}