struct Node *head=NULL;
struct Node* add_link(int elm)
{
    struct Node *temp,*ptr;
	ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=elm;
	ptr->next=NULL;
	if(head==NULL)
		head=ptr;
	else
	{
		temp=head;
		while(temp->next!=NULL)
            temp=temp->next;
        temp->next=ptr;
	}
	return head;
}

struct Node* SortedMerge(struct Node* head1,struct Node* head2)
{
	if(head1 != NULL && head2 != NULL)
    {
        if(head1->data > head2->data)
        {
            head3=add_link(head2->data);           
            head2=head2->next;
        }
        else {
            head3=add_link(head1->data);         
            head1=head1->next;
        }
    }
    else if(head1 == NULL && head2 != NULL)
    {
        head3=add_link(head2->data);
        head2=head2->next;
    }
    else if(head2 == NULL && head1 != NULL)
    {
        head3=add_link(head1->data);
        head1=head1->next;
    }
    else
        return head3;
    head3=SortedMerge(head1,head2);
    return head3;
}
