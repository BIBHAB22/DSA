#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head=NULL;
struct node* createnode(int item){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->next=NULL;
    ptr->prev=NULL;
    return ptr;
}
void addbeg(int item){
    struct node* curr=createnode(item);
    if(head==NULL){
        head=curr;
        return;
    }
    curr->next=head;
    head->prev=curr;
    head=curr;
}
void addend(int item){
    struct node* curr=createnode(item);
    if(head==NULL){
        head=curr;
        return;
    }
    struct node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
		}
        temp->next=curr;
        curr->prev=temp;
    }
void delbeg(){
    if(head==NULL){
        printf("empty list\n");
    }
    else{
          head=head->next;
        }
	}
void delend(){
    if(head==NULL){
        printf("empty list\n");
        return ;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    struct node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
        temp->prev->next=NULL;
        free(temp);
}
void display(){
    if(head==NULL){
        printf("empty list\n");
        return ;
    }
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
void rdisplay(){
    if(head==NULL){
        printf("empty list\n");
        return ;
    }
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->prev;
    }
}
int main(){
    int d,ch;
    do
    {
      printf("\n1.addbeg\n2.addend\n3.delbeg\n4.delend\n5.display\n6.exit\n");
      printf("enter the choice:-");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1:printf("enter the number:-");
            scanf("%d",&d);
            addbeg(d);
            break;
        case 2:printf("enter the number:-");
            scanf("%d",&d);
			addend(d);
            break;
        case 3:delbeg();
            break;
        case 4:delend();
            break;
        case 5:display();
            break;
        case 6:printf("\nthank you");
            break;
        default:printf("invalid choice");
    }
    } while (ch!=6);
}
