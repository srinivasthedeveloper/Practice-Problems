'''
Problem Statement

Given the head of a linked list, remove the nth node from the end of the list and return its head.
'''



# CODE

class ListNode:
   def __init__(self, data, next = None):
      self.val = data
      self.next = next
def make_list(elements):
   head = ListNode(elements[0])
   for element in elements[1:]:
      ptr = head
      while ptr.next:
         ptr = ptr.next
      ptr.next = ListNode(element)
   return head
def print_list(head):
   ptr = head
   print('[', end = "")
   while ptr:
      print(ptr.val, end = ", ")
      ptr = ptr.next
   print(']')
class Solution(object):
   def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        c = 0
        temp = head
        while temp != None:
            c+=1
            temp = temp.next
        temp = head
        if c==1:
            head = None
            return head
        if c==n:
            head = head.next
            return head
        s = c-1-n
        while s:
            temp = temp.next
            s-=1
        temp.next = temp.next.next
        return head
head = make_list([1,2,3,4,5,6])
ob1 = Solution()
print_list(ob1.removeNthFromEnd(head, 3))



'''
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Input: head = [1], n = 1
Output: []

Input: head = [1,2], n = 1
Output: [1]
'''
