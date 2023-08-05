#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if (head == NULL) {
        return 0;
    }
    node* slow = head;
    node* fast = head;

    while(fast != NULL) {
        fast = fast->next;
        if (fast == NULL) {
            return 0;
        }
        fast = fast->next;
        slow = slow->next;
        if (slow == fast) {
            return 1;
        }
    }

    return 0;
}