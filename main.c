#include <stdio.h>
#include <stdlib.h>
#include "list.h"



int main(){
    newList();
    int temp;
    int stop = 1;
    while (stop != 0){
        printf("Enter a positive int to add to list. Enter 0 to terminate: \n");
        scanf("%d", &temp);
        if (temp < 1){
            stop = 0;
        }
        else{
            addNode(temp);
        }
    }
    prettyPrint();
    return 0;
}

