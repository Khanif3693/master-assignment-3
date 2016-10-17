#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

struct Link* listInsertionSort(struct Link* head) {

 struct Link* start ;

 struct Link* cur ;


for(start=head;start!= NULL; start=start->next)
{
    for(cur=start->next;cur!=NULL;cur=cur->next)
        {
        if(start->value > cur->value)
        {
             start->value = start->value + cur->value;
         cur->value = start->value - cur->value;
         start->value = start->value - cur->value;

        }
        else{
            continue;
        }
        if(start==head)
        {
            start=head;
        }
        else
        {
            continue;
        }
        }


}
  /*
   * This function should perform an insertion sort on the list whose head is
   * provided as the function's argument, so that the values in the list are
   * sorted in ascending order, starting at the head.
   *
   * The sort should be done without allocating any new Link structs or any
   * other auxiliary data structures.
   *
   * Return a pointer to the new head of the list.
   */
  return head;

}


struct Link* reverseList(struct Link* head) {




struct  Link *cur;
    struct Link* prev;
    struct Link* next;
    cur=head;
    prev=NULL;
    while (cur !=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }

    head=prev;

  /*
   * This function should iteratively reverse the list whose head is provided
   * as the function's argument.
   *
   * The reversal must be done totally in place, i.e. you may not allocate any
   * new Link structs or any other auxiliary data structures.
   *
   * Return a pointer to the new head of the list.
   */
  return head;

}


struct Link* reverseListRecursive(struct Link* head){


   struct Link* rest = head;
    struct Link* n;
 if (head == NULL || head->next == NULL) {
            return head;
        }
else{
        n = rest->next;
        rest->next = NULL;

        head= reverseListRecursive(n);
                n->next = rest;

}
  /*
   * Write this function for extra credit.  It should do the exact same thing
   * as reverseList() above, except it should do it recursively instead of
   * iteratively (i.e. no loops allowed).
   *
   * Again, you may not allocate any new Link structs or any other auxiliary
   * data structures.  You may, however, define an auxiliary function to help
   * you do the recursion.
   *
   * Return a pointer to the new head of the list.
   */
  return head;

}
