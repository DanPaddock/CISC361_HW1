//
// adapted from http://www.cprogramming.com/snippets/source-code/singly-linked-list-insert-remove-add-count
//

#include "mp3.h"
#define  BUFFERSIZE 128

node_t *head, *tail;

void insert(char *name, char *title, int num, int time);
void print();
void freeList();
void deleteArtist(char *name);

int main()
{
  int i, num, len, time, len2, len_artist;
  struct node *n;
  char buffer[BUFFERSIZE], c, title[BUFFERSIZE], artist[BUFFERSIZE];

  head = NULL;
// void insert(char *artist, char *title, int num, int time)
  while (1) {
    printf("\nList Operations\n");
    printf("===============\n");
    printf("(1) Insert\n");
    printf("(2) Display\n");
    printf("(3) Delete\n");
    printf("(4) Exit\n");
    printf("Enter your choice : ");
    if (scanf("%d%c", &i, &c) <= 0) {          // use c to capture \n
        printf("Enter only an integer...\n");
        exit(0);
    } else {
        switch(i)
        {
        case 1: printf("Enter the artist to insert : ");
		if (fgets(buffer, BUFFERSIZE , stdin) != NULL) {
                  len = strlen(buffer);
                  buffer[len - 1] = '\0';   // override \n to become \0
                } else {
                    printf("wrong name...");
                    exit(-1);
                  }
                
                printf("Enter the song title to insert : ");
                if (fgets(title, BUFFERSIZE , stdin) != NULL) {
                    len2 = strlen(title);
                    title[len2 - 1] = '\0';   // override \n to become \0
                } else {
                    printf("wrong title...");
                    exit(-1);
                }
                printf("Enter the number to insert : ");
                scanf("%d%c", &num, &c);  // use c to capture \n
                printf("Enter the song length to insert : ");
                scanf("%d%c", &time, &c);  // use c to capture \n
                printf("[%s] [%d]\n", buffer, num);
                insert(buffer, title, num, time);
                break;
        case 2: if (head == NULL)
                  printf("List is Empty\n");
                else
                  print();
                break;
        case 3: printf("Enter the artist to delete : ");
                if (fgets(artist, BUFFERSIZE , stdin) != NULL) {
                    len_artist = strlen(artist);
                    artist[len_artist - 1] = '\0';   // override \n to become \0
                    deleteArtist(artist);
                } else {
                    printf("wrong name...");
                    exit(-1);
                }
                break;
        case 4: freeList();
                return 0;
        default: printf("Invalid option\n");
        }
    }
  }
  return 0;
}
