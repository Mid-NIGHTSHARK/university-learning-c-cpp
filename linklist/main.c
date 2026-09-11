#include <stdio.h>

struct node{
    int data;
    struct node *next;
    struct node *back;
};

struct node *start=NULL,*connect=NULL,*new_node=NULL;

void create_node(){
    new_node = (struct node*) malloc(sizeof(struct node));
    printf("enter a data: ");
    scanf("%d",&new_node->data);
    if(start == NULL){
        start = new_node;
        connect = new_node;
        connect->next = NULL;
        connect->back = NULL;

    }else{
        connect->next = new_node;
        new_node->back = connect;
        connect = new_node;
        connect->next=NULL;
    }
};

void delete_last(){
    if(start->next==NULL){
        free(start);
    }else{
        connect = connect->back;
        free(connect->next);
        connect->next=NULL;
    };
};