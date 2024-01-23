#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                       using the Insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    listint_t *prev, *next;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        next = current->next;

        while (current->prev != NULL && current->n < current->prev->n)
        {
            prev = current->prev;

            
            if (current->next != NULL)
                current->next->prev = prev;
            prev->next = current->next;

            
            current->next = prev;
            current->prev = prev->prev;

            /* Update previous node's next pointer */
            if (prev->prev != NULL)
                prev->prev->next = current;
            else
                *list = current;

            /* Update previous node's prev pointer */
            prev->prev = current;

            print_list(*list);
        }

        current = next;
    }
}
