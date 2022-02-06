#include <stdio.h>

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

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* tmp = head;
    int num = 0;
    while (tmp != NULL) {
        num++;
        tmp = tmp->next;
    }
    num /= 2;
    tmp = head;
    while (num >= 1) {
        tmp = tmp->next;
        num--;
    }

    return tmp;
}

int main(void) {
    struct ListNode n1 = {};
    struct ListNode n2 = {};
    struct ListNode n3 = {};
    struct ListNode n4 = {};
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    struct ListNode* tmp = middleNode(&n1);
    printf("%d\n", tmp->val);
    return 0;
}