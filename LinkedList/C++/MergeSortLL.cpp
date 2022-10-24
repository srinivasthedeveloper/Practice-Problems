

// THE QUESTION IS TO APPLY MERGESORT ON LINKED LIST

// WE USE DIVIDE AND CONQUER AND WE DIVIDE THE LIST USING FINDMID FUNCTION
// WE APPLY MERGE SORT BASIC LOGIC AND HENCE SORT THE LIST
// IF INPUT IS 1->4->2->0->7->5
// THEN THE OUTPUT WILL BE 0->1->2->4->5->7
class Solution
{
public:
    // void printLL(Node* head){
    //     while(head!=NULL){
    //         cout<<head->data<<" ";
    //         head = head->next;
    //     }
    //     cout<<endl;
    // }
    // function to find mid
    Node *find_mid(Node *head)
    {
        if (head->next == NULL)
        {
            return head;
        }
        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // function to merge two sorted linked list;
    Node *merge(Node *left, Node *right)
    {
        if (left == NULL)
        {
            return right;
        }
        if (right == NULL)
        {
            return left;
        }
        Node *ans = new Node(-1);
        Node *temp = ans;
        while (left != NULL && right != NULL)
        {
            if (left->data < right->data)
            {
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else
            {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        while (left != NULL)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        while (right != NULL)
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
        ans = ans->next;
        return ans;
    }

    // Function to sort the given linked list using Merge Sort.
    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *mid = find_mid(head);
        Node *left = head;
        Node *right = mid->next;
        mid->next = NULL;

        left = mergeSort(left);
        right = mergeSort(right);
        Node *result = merge(left, right);
        return result;
    }
};
