#include "lists.h"

/**
* sum_listint - calculates the result of all the data in a listint_t list
* @head: first node in the linked list
*
* Return: results
*/
int sum_listint(listint_t *head)
{
int result = 0;
listint_t *worried = head;

while (worried)
{
result += worried->n;
worried = worried->next;
}

return (result);
}
