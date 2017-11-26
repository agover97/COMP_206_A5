#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct NODE *head;
//accesses the global variable
void newList(){
    head = NULL;
}

int addNode(int value){
    //reserves NODE sized space in memory
    struct NODE *temp = (struct NODE *) malloc(sizeof(struct NODE));
    //temp will be null if we dont have hte memory to allocate
    if (temp == NULL) {
        return 1;
    }
    else{
        //establish the new node
        //change where head points to
        //now new node is at the front of the list
        temp->data = value;
        temp->next = head;
        head = temp;
        return 0;
    }
    
}


void prettyPrint(){
    //temp helps us traverse the list
    struct NODE *temp = head;
    //continues until we reach the tail
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    puts("\nEnd of list, printed in reverse order");
    

}
 