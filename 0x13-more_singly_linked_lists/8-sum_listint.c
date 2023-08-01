include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - the sum of list of head
  * @head: if equel text
  *
  * Return: amount
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
