#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>


/**
 * struct dog - this a struct for an animal
 * @name: name argument
 * @age: age argument
 * @owner: owner argument
 */

	struct node {
		char *str;
		size_t len;
		struct node* next;
};

typedef struct node list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
