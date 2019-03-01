#include "mp3.h"

extern node_t *head, *tail;

void print()
{
  node_t *temp;
  int  i = 0;
    char c;

  temp = head;

    printf("Print items in order, or reverse order? (r = reverse, n = normal): ");
    scanf(" %c", &c);
    
    switch(c){
        case 'n':
            temp = head;
            while (temp != NULL) {
                printf("(%d)--%s--%s--%d--%d--\n", ++i, temp->artist, temp->title, temp->data, temp->time);
                temp = temp->next;
            }
            break;
        case 'r':
            temp = tail;
            while (temp != NULL) {
                printf("(%d)--%s--%s--%d--%d--\n", ++i, temp->artist, temp->title, temp->data, temp->time);
                temp = temp->prev;
            }
            break;
        default: printf("Not valid!");
                exit(-1);
    }
}
