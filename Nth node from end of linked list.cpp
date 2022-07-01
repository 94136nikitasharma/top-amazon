int getLength(struct Node*head)
{
   struct Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
int getNthFromLast(struct Node *head, int n)
{
    int len=getLength(head);
    if(n>len)
    {
        return -1;
    }
    int k=len-n;
   struct Node*temp=head;
    for(int i=0;i<k;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}
