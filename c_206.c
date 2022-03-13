#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode {
     int val;
     struct ListNode *next;
 };


void dump(struct  ListNode* p) {
    while (p != NULL) {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
}

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* p_next = NULL;
    struct ListNode* p_prev = NULL;
    while (head != NULL) {
        // 保存下一个
        p_next = head->next;

        // 指向前一个
        head->next = p_prev;

        // 保存前一个
        p_prev = head;

        // 处理下一个
        head = p_next;
    }
    return p_prev;
}

int main(void) {
    struct ListNode n1, n2, n3;
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = NULL;

    printf("old is: \n");
    dump(&n1);

    struct ListNode* p_ret =  reverseList(&n3);
    printf("new is: \n");
    dump(p_ret);
    
    return 0;
}