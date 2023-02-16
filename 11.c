#include<stdio.h>
#include<stdlib.h>
int count=0;
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search_key();
void traverse_list();
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void main(){
    int opt,item;
    do
    {
    printf("\n SELECT A VALID OPTION FROM THE MENU\n");
    printf("\n1. INSERTION AT BEGINNING\n");
    printf("\n2. INSERTION AT END\n");
    printf("\n3. INSERTION AT A GIVEN POSITION\n");
    printf("\n4. DELETION AT BEGINNING\n");
    printf("\n5. DELETION AT END\n");
    printf("\n6. DELETION AT A PARTICULAR POSITION\n");
    printf("\n7. SEARCH FOR AN ITEM\n");
    printf("\n8. DISPLAY LIST\n");
    printf("\n9. EXIT\n");
    scanf("%d",&opt);
    switch(opt)
        {
           case 1: insert_begin();
                   break;
           case 2: insert_end();
                   break;
           case 3: insert_pos();
                   break;
           case 4: delete_begin();
                   break;
           case 5: delete_end();
                    break;
           case 6: delete_pos();
                    break;
           case 7: search_key();
                    break;
           case 8: traverse_list();
                    break;
           case 9: exit(0);
           default: printf("\n Invalid Option\n");
          }
    }
    while(opt!=9);
}
void insert_begin(){
    int item;
    printf("\n enter a value: ");
    scanf("%d",&item);
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {     
        newnode->data = item;  
        newnode->next = head;  
        head = newnode;  
        printf("\nNode inserted");  
    }  
   printf("\n the items in the list are:\n");
   traverse_list();
}
void insert_end(){

    int item;
    
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else
    {
        printf("\n enter a value: ");
        scanf("%d",&item);
        newnode->data=item;
        if(head==NULL)
        {
        newnode->next=NULL;
        head=newnode;
        }  
        else
       {
       struct node *temp=head;
       while(temp->next!=NULL)
       temp=temp->next;
       temp->next=newnode;
       newnode->next=NULL;
       }
    }   
    printf("\n the items in the list are\n");
    traverse_list();
}


void insert_pos()
{

    int item,pos,i=1;
    struct node *temp;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW");  
    }
    else
    {
     printf("\n enter a value: ");
     scanf("%d",&item);
     newnode->data = item;  
     printf("\n Enter the position after to which node the new node is to be inserted: ");
     scanf("%d",&pos);
     temp=head;  
     for(i=0;i<pos;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
          
        }  
        newnode->next = temp ->next;   
        temp ->next = newnode; 
     }        
printf("\n the items in the list are\n");
traverse_list();
}
void delete_begin()
{
   struct node *newnode;
   if(head==NULL)
   printf("\n linked list is empty\n");
   else
   {
      newnode=head;
      head = newnode->next;  
      free(newnode);
      printf("\n the item  has been deleted\n");
    }
}
void delete_end()
{
    
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
    
    
    
    
    
 printf("\n the items in the list are\n");
 traverse_list();
}

void delete_pos()
{

struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  

printf("\n the items in the doubly linked list are\n");
traverse_list();
}
void traverse_list()
{
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}
void search_key()
{
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)   
            printf("Item not found\n");  
       
    }  
}       

