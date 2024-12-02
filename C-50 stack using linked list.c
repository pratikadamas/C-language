//
// Created by Pratik Giri on 02-12-2024.
//
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void push(int val)
{
    //create new node
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;

    //make the new node points to the head node
    newNode->next = head;

    //make the new node as head node
    //so that head will always point the last inserted data
    head = newNode;
}

void pop()
{
    //temp is used to free the head node
    struct Node *temp;

    if(head == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", head->data);

        //backup the head node
        temp = head;

        //make the head node points to the next node.
        //logically removing the node
        head = head->next;

        //free the poped element's memory
        free(temp);
    }
}

//print the linked list
void display()
{
    struct Node *temp = head;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    printf("Linked List\n");
    display();
    pop();
    printf("After the pop, the new linked list\n");
    display();
    pop();
    printf("After the pop, the new linked list\n");
    display();

    return 0;
}