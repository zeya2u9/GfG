/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
}; */

// Deletes middle of linked list and returns head of the modified list
struct Node* deleteMid(struct Node *head)
{
     struct Node *ptr1,*ptr2,*save;
     ptr1=head;
     ptr2=head;
     save=head;
     while(1)
     {
        if(ptr2->next==NULL)
        {
            save->next=ptr1->next;
            ptr1->next=NULL;
            free(ptr1);
            return head;
        }
        save=ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr2->next==NULL)
        {
            save->next=ptr1->next;
            ptr1->next=NULL;
            free(ptr1);
            return head;
        }
        else
            ptr2=ptr2->next;
     }
    
}/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
}; */

// Deletes middle of linked list and returns head of the modified list
struct Node* deleteMid(struct Node *head)
{
     struct Node *ptr1,*ptr2,*save;
     ptr1=head;
     ptr2=head;
     save=head;
     while(1)
     {
        if(ptr2->next==NULL)
        {
            save->next=ptr1->next;
            ptr1->next=NULL;
            free(ptr1);
            return head;
        }
        save=ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr2->next==NULL)
        {
            save->next=ptr1->next;
            ptr1->next=NULL;
            free(ptr1);
            return head;
        }
        else
            ptr2=ptr2->next;
     }
    
}