'''
Problem Statement

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
'''

# CODE
def isValid(s):
    stack=[]
    for i in s:
        if i in ['(','{','[']:
            stack.append(i)
        else:
            if stack:
                if (i==')' and stack.pop()=='(') or (i=='}' and stack.pop()=='{') or (i==']' and stack.pop()=='['):
                    continue
                else:
                    return False
            else:
                return False
    if len(stack)==0:
        return True
s = input()
if isValid(s):
    print("Yes it is valid.")
else:
    print("No it is not valid.")
    
'''
Outputs 

Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false

'''
