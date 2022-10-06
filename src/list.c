#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    assert(l != NULL); //Pre-condition

    int count = 0; //Initilise counter and set to 0, use this to count amount of elements
    
    node *p = l; // 
     while(p -> next != NULL) //While loop counts through all of the elements, until next element is NULL
     {
      p = p -> next; //Set p to the next value
      count++; //Add 1 to count
     }

    return count;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    while (p!=NULL){
      printf("%d, ",p->data);
      p = p -> next;
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/

    
    node *p = l -> next;
    int max = p -> data;

    while(p != NULL){ //Goes through each element as long as != NULL
      if(p -> data > max){ //Checks if current value is larger than max
        max = p -> data; //If above is true, set this value to the new max
      }
      p = p -> next; //Set p to the next value to check this
    }

    return max; 
}

