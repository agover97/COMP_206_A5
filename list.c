#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct NODE *head;
void newList(){
    head = NULL;
}

int addNode(int value){
    struct NODE *temp = (struct NODE *) malloc(sizeof(struct NODE));
    if (temp == NULL) {
        return 1;
    }
    else{
        temp->data = value;
        temp->next = head;
        head = temp;
        return 0;
    }
    
}


void prettyPrint(){
    struct NODE *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    puts("\nEnd of list, printed in reverse order");
    

}
 