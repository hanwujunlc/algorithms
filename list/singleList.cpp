#include <stdio.h>
#include <stdlib.h>
#include "singleList.h"

struct Node * initList(int number)
{
	struct Node *head = (struct Node *)malloc(sizeof(struct Node));
	head->next = NULL;
	head->number = number;
	return head;
}

void insert_head(struct Node *& head, int number)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->next = head;
    node->number=number;
    head=node;
}

void insert_tail(struct Node * head, int number)
{
	while(head->next)
		head=head->next;

    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->next = NULL;
    node->number =number;
    head->next = node;
}

struct Node *reverse(struct Node *&head)
{
	if(NULL == head) return NULL;
	if(NULL == head->next) return head;

	struct Node *next = head->next;
	struct Node *pre = head;
	struct Node *tmp;
	head->next = NULL;

	while(next) {
		tmp = next->next;
		next->next = pre;
		pre = next;
		next = tmp;
	}

	head = pre;

	return head;
}

struct Node *reverse(struct Node *head, struct Node *& new_head)
{
	if (NULL == head) return NULL;
	if (NULL == head->next)
	{
		new_head = head;
		return head;
	}

	struct Node *new_tail = reverse(head->next, new_head);
	new_tail->next = head;
	head->next = NULL;

	return head;
}

void printList(struct Node *head)
{
	printf("------begin-------\n");
	
	for(;head;head=head->next)
		printf("number = %d\n", head->number);

	printf("------end-------\n");
}
