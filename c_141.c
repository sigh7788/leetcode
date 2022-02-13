#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (head == NULL) return false;
    struct ListNode *walker = head;
    struct ListNode *runner = head;
    while (runner->next != NULL && runner->next->next != NULL) {
        walker = walker->next;
        runner = runner->next->next;
        if (walker == runner) return true;
    }

    return false;
}

int main(void) {
    struct ListNode n1;
    struct ListNode n2;
    struct ListNode n3;
    n1.val = 3;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 4;
    n3.next = &n2;

    bool rc = hasCycle(&n1);
    printf("%d\n", rc);

    return 0;
}