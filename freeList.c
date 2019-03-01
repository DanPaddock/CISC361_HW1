#include "mp3.h"

extern node_t *head, *tail;

void freeList()
{
  node_t *temp;
  int  i = 0;

  while (head != NULL) {
    temp = head;
    head = head->next; // point to next MP3 record
    free(temp->artist);  // first free name inside MP3 record
    free(temp->title);
    free(temp);        // then free MP3 record
    i++;
  }
  printf("free %d MP3 records...\n", i);
}

/*void freeList(char *name)
{
    node_t *temp;
    int  i = 0;
    
    while (head != NULL && temp->artist == name) {
        temp = head;
        head = head->next; // point to next MP3 record
        free(temp->artist);  // first free name inside MP3 record
        free(temp->title);
        free(temp);        // then free MP3 record
        i++;
    }
    printf("free %d MP3 records...\n", i);
}*/
