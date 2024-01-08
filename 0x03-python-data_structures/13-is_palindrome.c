#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void reverse(listint_t **head);
int compare_lists(listint_t *head, listint_t *middle, int len);

/**
 * is_palindrome - checks if a singly linked list is a palidrome
 *
 * @head: pointer to pointer of the first node in the list passed
 *
 * Return: 0 if a palidrome isnt detected and 1 if yes
 */
int is_palindrome(listint_t **head)
{
	int len, y;
	listint_t *tmp;
	listint_t *middle;

	if (head == NULL || *head == NULL)
		return (1);
	tmp = *head;
	middle = *head;

	for (len = 0; tmp != NULL; len++)
		tmp = tmp->next;

	len = len / 2;

	for (y = 1; y < len; y++)
		middle = middle->next;
	if (len % 2 != 0 && len != 1)
	{
		middle = middle->next;
		len = len - 1;
	}
	reverse(&middle);
	y = compare_lists(*head, middle, len);

	return (y);
}

/**
 * compare_lists - compare two lists
 * @head: pointer to the head node
 * @middle: pointer to the middle node
 * @len: length of the list
 * Return: if the same 1, if not 0
 */
int compare_lists(listint_t *head, listint_t *middle, int len)
{
	int y;

	if (head == NULL || middle == NULL)
		return (1);
	for (y = 0; y < len; y++)
	{
		if (head->n != middle->n)
			return (0);
		head = head->next;
		middle = middle->next;
	}
	return (1);
}

/**
 * reverse - reverse a list
 * @head: pointer to the head to reverse
 */
void reverse(listint_t **head)
{
	listint_t *current;
	listint_t *next;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return;

	prev = NULL;
	current = *head;
	while (current != NULL)
	{

		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}
