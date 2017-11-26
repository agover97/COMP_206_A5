//ifndef so that these lines are only included once
#ifndef LISTH
    #define LISTH
    //NODE struct defined here b/c they made me do it
    struct NODE{
        int data;
        struct NODE *next;
    };
    //i was getting an implicit declaration error so i declared them in the header
    void newList();
    int addNode(int value);
    void prettyPrint();
#endif