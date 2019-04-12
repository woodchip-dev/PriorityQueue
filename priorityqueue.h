/******************************
 * Addeline Mitchell
 * April 2019
 ******************************
 * Header file for a priority
 * queue that holds integers
 *****************************/

// Include std libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Include memory allocation library
#include <malloc.h>


struct pq_node
{
    int data;
    struct pq_node * next;
} node;

node * head = NULL;

node * new_node(int val) 
{ 
    node * temp = (node*)malloc(sizeof(node));
    temp->data = val;
    temp->next = NULL;
  
    return temp; 
} 

// Adds an element to the PQ, then sorts
void push(int item)
{
    // write this
}

// Removes a value from the front of a PQ
// and establishes a new front
void pop()
{
    // write this
}

// Shows value of element at the front of the PQ
int front()
{
    return (* head);
}

// Returns the size of the PQ
int size()
{
    // write this
    return 0;
}

// Returns true if the PQ is empty, false otherwise
bool empty()
{
    return (* head) == NULL;
}