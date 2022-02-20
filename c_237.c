#include <stdio.h>
#include <string.h>
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

void deleteNode(struct ListNode* node) {
    if (node->next == NULL) {
        // can not be here
    } else {
        node->val = node->next->val;
        node->next = node->next->next;
    } 
}

void dump(struct ListNode* node) {
    while (node != NULL) {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("\n");
}

int main(void) {
    struct ListNode n1;
    struct ListNode n2;
    struct ListNode n3;

    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = NULL;

    dump(&n1);
    
    deleteNode(&n1);

    dump(&n1);
    return 0;
}