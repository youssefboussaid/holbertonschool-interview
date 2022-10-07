#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 * Return: the address of the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head, *rabbit = head;

	while (rabbit && rabbit->next)
	{
		rabbit = rabbit->next->next;
		turtle = turtle->next;
		if (rabbit == turtle)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				turtle = turtle->next;
				rabbit = rabbit->next;
			}
			return (rabbit);
		}
	}
	return (NULL);
}
