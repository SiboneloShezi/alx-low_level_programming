#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int z;
listint_t *current;
listint_t *worried = *head;

current = malloc(sizeof(listint_t));
if (!current || !head)
return (NULL);

current->n = n;
current->next = NULL;

if (idx == 0)
{
current->next = *head;
*head = current;
return (current);
}

for (z = 0; worried && z < idx; z++)
{
if (z == idx - 1)
{
current->next = worried->next;
worried->next = current;
return (current);
}
else
worried = worried->next;
}

return (NULL);
}
