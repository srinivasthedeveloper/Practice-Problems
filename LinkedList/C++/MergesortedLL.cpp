/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// QUESTION ::::Function to merge two sorted linked list.

// IF INPUT IS GIVEN AS TWO LISTS AS: 1->4->7->8 AND 2->9->13->14
// THEN WE RETURN A SORTED MERGED LIST AS 1->2->4->7->8->9->13->14
Node *sortedMerge(Node *head1, Node *head2)
{
    /*
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    Node* head=NULL;
    Node* tail=NULL;
    if(head1->data<=head2->data)
    {
        head=tail=head1;
        head1=head1->next;
    }
    else
    {
        head=tail=head2;
        head2=head2->next;
    }

    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data<=head2->data)
    {

        tail->next=head1;
        tail=head1;

        head1=head1->next;
    }
    else
    {
        tail->next=head2;
        tail=head2;
        head2=head2->next;
    }
     if(head1==NULL)

    {
        tail->next=head2;
    }
    else
    {
        tail->next=head1;
    }

    }
    return head;
    */
    Node *tail = NULL;
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    if (head1->data <= head2->data)
    {
        tail = head1;
        tail->next = sortedMerge(head1->next, head2);
    }
    else
    {
        tail = head2;
        tail->next = sortedMerge(head1, head2->next);
    }

    return tail;
};