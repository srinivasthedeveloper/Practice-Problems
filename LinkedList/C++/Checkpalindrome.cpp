class Solution
{
public:
    // QUESTION ::: Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack<int> st;
        for (Node *curr = head; curr != NULL; curr = curr->next)
        {
            st.push(curr->data);
        }
        for (Node *curr = head; curr != NULL; curr = curr->next)
        {
            if (st.top() != curr->data) // STORE THE DATA IN STACK AND REMOVE TOP ONE BY ONE
            {
                return false;
            }
            st.pop();
        }
        return true;
    }

    // FOR EXAMPLE IF INPUT IS 1->2->3->3->2->1->NULL
    // THEN THE FUNCTION RETURNS TRUE AS IT IS A PALINDROME
    //  IF THE INPUT IS 1->4->3
    // THEN IT RETURNS FALSE AS LINKED LIST IS NOT PALINDROME
};
