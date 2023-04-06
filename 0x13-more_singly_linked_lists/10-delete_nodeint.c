#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *worried = *head;
listint_t *current1 = NULL;
unsigned int z = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(worried);
return (1);
}

while (z < index - 1)
{
if (!worried || !(worried->next))
return (-1);
worried = worried->next;
z++;
}


current1 = worried->next;
worried->next = current1->next;
free(current1);

return (1);
}
