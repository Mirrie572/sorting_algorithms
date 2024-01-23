#ifndef SORT_H
#define SORT_H

/* all the library to consider for sorting algorithms */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>

/* ALLOWED,GIVEN STRUCTS TO USE */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* ALL THE PROTOTYPES USED IN THIS PROJECT */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void recursive(int *array, int start, int end, int size);
int partition(int *array, int start, int end, int size);
void swap(int *array, int i, int j, int size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);


#endif