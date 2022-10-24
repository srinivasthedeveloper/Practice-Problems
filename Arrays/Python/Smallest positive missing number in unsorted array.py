def findNum(arr, n):
    for i in range(1, n+1):  
        flag = False

        for j in range(n-1):  
            if arr[j] == i:
                flag = True
                break
        if flag == False:
            return i


arr = [-2, 2, 1, -3, 2, 10, 0]
length = len(arr)
res = findNum(arr, length)
print("The smallest positive missing number in the array is:",res)

'''
Problem Statement: You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Example:
arr = [-2, 2, 1, -3, 2, 10, 0]
Output: The smallest positive missing number in the array is: 3
'''
