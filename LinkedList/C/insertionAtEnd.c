#include <stdio.h>
#include <stdlib.h>

struct Node{ //creating a node
    int data;
    struct Node * next;
};

struct Node * insertionAtEnd(struct Node * head, int ele){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = ele;//pointer pointing to the element
    ptr->next = NULL;//pointing to null
    struct Node *p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    return(head);
}

void llTraversal(struct Node * head){
    while(head != NULL){
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main(){
    struct Node *head, *second, *third;
    int ele;

    head = (struct Node *)malloc(sizeof(struct Node));    //defining head node
    second = (struct Node *)malloc(sizeof(struct Node));  //defining second node
    third = (struct Node *)malloc(sizeof(struct Node));   //defining third node

    head->data = 12;
    head->next = second;

    second->data = 75;
    second->next = third;
    
    third->data = 48;
    third->next = NULL;

    printf("Linked List before Insertion is : \n");
    llTraversal(head);

    printf("Enter the element want to insert at tail : ");
    scanf("%d", &ele);
    head = insertionAtEnd(head, ele);
    printf("linked List after insertion at tail : \n");
    llTraversal(head);

    return 0;
}