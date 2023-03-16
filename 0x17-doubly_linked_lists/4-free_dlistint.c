#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a list
 * @head: head pointer
 * Return: nothing
 * By: Akpe Caleb
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

