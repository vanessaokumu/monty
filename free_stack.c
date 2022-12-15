#include "monty.h"
/**
 * free_stack - frees a doubly linked list
 * @head: stack head
 * Return: no return
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
