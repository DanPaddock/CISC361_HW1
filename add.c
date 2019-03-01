#include "mp3.h"

extern node_t *head, *tail;

void insert(char *artist, char *title, int num, int time)
{
  node_t *temp, *mp3;

  mp3 = (node_t *) malloc(sizeof(node_t));        // malloc space for MP3
  mp3->artist = (char *) malloc(strlen(artist) + 1);  // malloc space for name
  strcpy(mp3->artist, artist);                        // "assign" name via copy
  mp3->title = (char *) malloc(strlen(title) + 1);
  strcpy(mp3->title, title);                        // "assign" name via copy
  mp3->data = num;
  mp3->time = time;
  mp3->next = NULL;
  mp3->prev = NULL;

  if (head == NULL)
  {
    head = mp3;               // add the first MP3
  }
  else
  {
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
      
     // HEAD->FIRST->PREV = newNode
    temp->next = mp3;         // append to the tail/end
    tail = mp3;
    tail->prev = temp;
  }
}
