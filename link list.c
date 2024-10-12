//
// Created by Pratik Giri on 12-10-2024.
//
#include<stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}node;
node* getnode(int x){
    node* p;
    p= (node*)malloc(sizeof (node));
    p->data=x;
    p->next=NULL;
    return p;

}
node* linknode(){
    int a;
    printf("enter the size of link list\n");
    scanf("%d",&a);
    node* p[a];
    for (int i = 0;i <a; ++i) {
        int b;
        printf("Enter your data part  \n");
        scanf("%d",&b);
        p[i]=getnode(b);
    }
    for (int i = 0; i <a-1 ; ++i) {
        p[i]->next=p[i+1];

    }
    return p[0];
}
void display(node* s){
    while(s!=NULL){
        printf("%d\n",s->data);
        s=s->next;
    }
}
node* HP;
int main(){
    printf("------Creat your list------\n");
    HP=linknode();
    printf("-------------------\n Display the link list \n");
    display(HP);
    return 0;
}