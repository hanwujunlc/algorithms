#include <stdio.h>
#include "singleList.h"


int main() {

	struct Node *head = initList(0);
	insert_tail(head, 1);
	insert_tail(head, 2);
	insert_tail(head, 3);
	insert_tail(head, 4);
	insert_tail(head, 5);
	insert_tail(head, 6);

	printList(head);

	reverse(head);

	printList(head);

	struct Node *new_head;
	reverse(head, new_head);
	printList(new_head);



}
