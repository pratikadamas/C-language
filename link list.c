
// Created by Pratik Giri on 12-10-2024.
#include<stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}node;
node* getnode(int x)
{
    node* p;
    p= (node*)malloc(sizeof (node));
    p->data=x;
    p->next=NULL;
    return p;

}
node* linknode()
{
    int a;
    printf("enter the size of link list\n");
    scanf("%d",&a);
    node* p[a];
    for (int i = 0;i <a; ++i)
    {
        int b;
        printf("Enter your data part  \n");
        scanf("%d",&b);
        p[i]=getnode(b);
    }
    for (int i = 0; i <a-1 ; ++i)
    {
        p[i]->next=p[i+1];

    }
    return p[0];
}
void display(node* s)
{
    while(s!=NULL)
    {
        printf("%d\n",s->data);
        s=s->next;
    }
}
node* HP;
node* add1st(node* s,int x){
    node* p= getnode(x);
    p->next=s;

    return p;
}
void addend(node* s,int x){
    node* p= getnode(x);
    while (s->next!=NULL){
        s=s->next;
    }
    s->next=p;
}
int main()
{
    printf("------Creat your list------\n");
    HP=linknode();
    printf("-------------------\n Display the link list \n");
    display(HP);
    printf("For add a node at frist \n Enter a data part\n");
    int f,e;
    scanf("%d",&f);
    HP=add1st(HP,f);
    printf("-------------------\n ---Display the new link listafter add a new node at the FIRST---\n");
    display(HP);
    printf("For add a node at END \n Enter a data part\n");
    scanf("%d",&e);
    addend(HP,e);
    printf("-------------------\n ---Display the new link list  after add a new node at the END---\n");
    display(HP);
    return 0;
}