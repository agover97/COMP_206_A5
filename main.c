#include <stdio.h>
#include <stdlib.h>
#include "list.h"



int main(){
    newList();
    int temp;
    //non-positive numbers change the stop value and break the loop
    //pretty self explanatory code
    int stop = 1;
    while (stop != 0){
        printf("Enter a positive int to add to list. Enter 0 to terminate: \n");
        scanf("%d", &temp);
        if (temp < 1){
            stop = 0;
        }
        else{
            //as long as the input is positive it goes to the top of the list
            addNode(temp);
        }
    }
    //once a non positive number is inputted, the program automatically
    //prints the list in reverse order 
    prettyPrint();
    return 0;
}

