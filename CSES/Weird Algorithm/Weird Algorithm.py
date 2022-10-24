'''
Consider an algorithm that takes as input a positive integer n.
If n is even, the algorithm divides it by two, and if n is odd, 
the algorithm multiplies it by three and adds one. The algorithm repeats this,
until n is one. For example, the sequence for n=3 is as follows:

3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.
'''

#Explanation
'''
points to remember:-    
    single positive integer input (n)
    if n is even divide n by 2
    if n is odd multiple n by 3 and add 1
    stop the pattern if n become 1

sample input 3:
    3  (odd) ==> 3*3+1 = 10
    10 (even) ==> 10/2 = 5
    5  (odd) ==> 5*3+1 = 16
    16 (even) ==> 16/2 = 8
    8  (even) ==> 8/2 = 4
    4  (even) ==> 4/2 = 2
    2  (even) ==> 2/2 = 1 (The End.)
'''
def weirdAlgo(n):
    while(True):
        if(n%2): #odd condition
            n=(n*3+1)
        else: #even condition
            n//=2
        if(n==1):
            print(1)
            break
        print(n,end="->")
