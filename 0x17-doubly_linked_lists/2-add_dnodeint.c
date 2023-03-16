#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a list
 * @n: The integer to be added to the list
 * @head: head pointer
 * Return: return the new list.
 * By: Akpe Caleb
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;

	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	return (newnode);
}
