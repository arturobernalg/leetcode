//
// Created by Arturo Bernal on 23/5/22.
//

#include "TwoNumbers.h"
#include "ListNode.h"


int main() {


    ListNode *tree = new ListNode(9);
    ListNode *four = new ListNode(9, tree);
    ListNode *l1 = new ListNode(9, four);


    ListNode *four2 = new ListNode(9);
    ListNode *six2 = new ListNode(9, four2);
    ListNode *l2 = new ListNode(9, six2);


    ListNode *result = NULL;
    ListNode *prev = NULL;
    int res = 0;
    while (l1!= NULL || l2!= NULL || res == 1) {

        int l1Calc = l1 ? l1->val : 0;
        int l2Calc = l2 ? l2->val : 0;

        int sum = l1Calc + l2Calc + res;
        res = sum / 10;
        ListNode *aux = new ListNode(sum % 10);
        l1 = l1 != NULL ? l1->next : NULL;
        l2 = l2 != NULL ? l2->next : NULL;

        if (result == NULL) {
            result = aux;
        }
        if (prev != NULL) {
            prev->next = aux;
        }
        prev = aux;

    }

}
