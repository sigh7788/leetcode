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

struct ListNode* deleteDuplicates(struct ListNode* head){
    int hash[201] = {};
    for (int k = 0; k < 201; k++) {
        hash[k] = 101;
    }
    int i = 0;
    struct ListNode* prev = NULL;
    struct ListNode* h = head;
    while (head != NULL) {
        int val = head->val;
        printf("val %d\n", val);
        if (hash[val+100] == 101) {
            hash[val+100] = val;
        } else {
            // remove
            if (prev == NULL) {
                return NULL;
            } else {
                prev->next = head->next;
                head = head->next;
                continue;
            }

        }
        prev = head;
        head = head->next;
    }

    return h;
}
void dump(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main(void) {
    struct ListNode n1 = {};
    struct ListNode n2 = {};
    struct ListNode n3 = {};
    n1.val = 1;
    n1.next = &n2;
    n2.val = 3;
    n2.next = &n3;
    n3.val = 3;
    n3.next = NULL;

    struct ListNode* n = deleteDuplicates(&n1);

    dump(n);
    return 0;
}