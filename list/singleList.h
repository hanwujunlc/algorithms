#ifndef _SINGLE_LIST_
#define _SINGLE_LIST_

struct Node {
	int number;
	struct Node * next;
};

extern struct Node* initList(int number);
extern void insert_head(struct Node *&head, int number);
extern void insert_tail(struct Node *head, int number);
extern struct Node *reverse(struct Node *&head);
extern struct Node *reverse(struct Node *head, struct Node *& new_head);
extern void printList(struct Node *head);

#endif
