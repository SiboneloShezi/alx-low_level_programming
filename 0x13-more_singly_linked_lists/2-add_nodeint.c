#include "lists.h"

/**
* add_nodeint – adds new nodes at the start of a  linked list
* @head: pointer to the first node in the list
* @n: data to put or type in that new node
*
* Return: NULL if the pointer fails or pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *current;

current = malloc(sizeof(listint_t));
if (!current)
return (NULL);

current->n = n;
current->next = *head;
*head = current;

return (current);
}
