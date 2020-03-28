#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 *  * Definition for singly-linked list.*/
struct ListNode {
    int val;
    struct ListNode *next;
 };
 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p1 = NULL;
    struct ListNode *p2 = NULL;
    struct ListNode *pre = NULL;
    struct ListNode *tmp = NULL;
    struct ListNode *head = NULL;

    p1 = l1;
    p2 = l2;
    while(  p1 != NULL || p2 !=NULL)
    {
        if(p1 == NULL)
        {
            if(head!=NULL)
                pre->next = p2;
            else
                head = p2;
            break; 
        }
        else if(p2 == NULL)
        {
            if(head!=NULL)
                pre->next = p1;
            else
                head = p1;
            break;
        }
        
        if(p1->val > p2->val)
        {
            tmp = p2;
            p2 = p2->next;
        }
        else
        {
            tmp = p1;
            p1 = p1->next;
        }
        if(head == NULL)
        {
            head  = tmp;
            head -> next = NULL;
            pre = head;
        }
        else
        {
            tmp->next = NULL;
            pre->next = tmp;
            pre = tmp;
        }
    }
    return head;
}

int function_21 ()
{
    int L1[3] = {1,2,4};
    int L2[3] = {1,3,4};
    struct ListNode *tmp = NULL;
    struct ListNode *tmp1 = NULL;
    struct ListNode *tmp2 = NULL;
    struct ListNode *output = NULL;
    struct ListNode *head1 = NULL;
    struct ListNode *head2 = NULL;

    for(int i = 0; i< 3;i++)
    {
        tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        tmp -> val = L1[i];
        tmp -> next = NULL;
        if(i == 0){
            head1 = tmp;
        }
        else
        {
            tmp1->next = tmp;
        }
        tmp1 = tmp;
        printf("%d, ",tmp->val);
    }
    printf("\n");
    for(int i = 0; i< 3;i++)
    {
        tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        tmp -> val = L2[i];
        tmp -> next = NULL;
        if(i == 0){
            head2 = tmp;
        }
        else
        {
            tmp2->next = tmp;
        }
        tmp2 = tmp;
        printf("%d, ",tmp->val);
    }
    printf("\n");
    output = mergeTwoLists(head1, head2);
    tmp = output;
    for(int i =0; i< 6;i++)
    {
        if(tmp != NULL){
            printf("%d ->",tmp->val);
            tmp = tmp -> next;
        }
    }
    return 0;
}
