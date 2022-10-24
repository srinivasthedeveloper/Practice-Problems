class Solution
{
public:
    // QUESTION ::::Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        Node *current = head;
        int count = 1;
        while (count < k && current != NULL)
        {
            current = current->next;
            count++;
        }
        if (current == NULL)
            return NULL;
        Node *kthNode = current;
        while (current->next != NULL)
            current = current->next;
        current->next = head;
        head = kthNode->next;
        kthNode->next = NULL;

        return head;
    }
    // I/P: 1->2->4->6->7 , K=1
    // NOW WE ROTATE THE LINKED LIST ELEMENTS BY POSITION 1 TOWARDS LEFT
    //  HENCE WE GET THE OUTPUT AS 2->4->6->7->1
};
