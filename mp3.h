#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct node
{
  char *artist;
  char *title;
  int data;
  int time;
  struct node *next;
  struct node *prev;
} node_t; 
