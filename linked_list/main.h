#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/* Singly Linked Lists */

/**
 * TODO: make gpt to document this file.
 */

typedef struct listElmt_
{
	void			*data;
	struct listElmt_	*next;
} listElmt_;

typedef listElmt_* list_t;

/* simple function for the singly linke list */

list_t create_listElmt_(int data);
void print_listElmt_(list_t list);
void add_after_listElmt_(list_t list, int position, int data);
void remove_listElmt_(list_t list, int position);
void clear_listElmt_(list_t list);



#endif /* LINKED_LIST_H */
