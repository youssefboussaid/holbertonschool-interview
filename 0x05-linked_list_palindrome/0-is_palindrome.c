#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - Gets the length of a prefix substring.
 * @head: head of the linked
 *
 * Return: if list is palandrope return 1
 */


int is_palindrome(listint_t **head)
{
	listint_t *p, *q, *first_start, *second_start;
		p = *head;
		q = *head;

	if (p->next == NULL)
		return (1);
	while (1)
	{
		p = p->next->next;
		if (p == NULL)
		{
			second_start = q->next;
			break;
		}
		if (p->next == NULL)
		{
			second_start = q->next->next;
			break;
		}
		q = q->next;
	}
	q->next = NULL;
	second_start = reverse(second_start);
	first_start = *head;
	while (first_start != NULL && second_start != NULL)
	{
		if (first_start->n == second_start->n)
		{
			first_start = first_start->next;
			second_start = second_start->next;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 *reverse  - Gets the length of a prefix substring.
 * @head: head of the linked
 *
 * Return: reversed list
 */

listint_t *reverse(listint_t *head)
{
	listint_t *p, *q;

	if (head == NULL)
		return (head);
	p = head;
	q = p->next;
	if (q == NULL)
		return (p);
	q = reverse(q);
	p->next->next = p;
	p->next = NULL;
	return (q);
}
