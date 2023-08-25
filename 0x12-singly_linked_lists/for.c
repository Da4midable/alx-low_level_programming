#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: is the pointer to the head node
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *current = h;

	count = current->len;

	if (current->str == NULL)
		printf("[0] (nil)");

	while (current != NULL)
	{
		printf("%s", current->str);
		current = current->next;
		count++;

	}

	printf("\n");

	return (count);
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    list_t *head;
	        list_t *new;
		    list_t hello = {"World", 5, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(list_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->str = strdup("Hello");
					    new->len = 5;
					        new->next = head;
						    head = new;
						        n = print_list(head);
							    printf("-> %lu elements\n", n);

							        printf("\n");
								    free(new->str);
								        new->str = NULL;
									    n = print_list(head);
									        printf("-> %lu elements\n", n);

										    free(new);
										        return (0);
}
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#ifndef LISTS_H
#define LISTS_H

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
