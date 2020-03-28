#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 *  * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    struct ListNode *next;
 };


int getDecimalValue(struct ListNode* head){
    struct ListNode *p = NULL;
    int result = 0;

    p = head;
    while(p != NULL){
        result = (result << 1) | (p->val);
        p = p->next;
    }
    return result;
}

int function_1290()
{

    return 0;
}
