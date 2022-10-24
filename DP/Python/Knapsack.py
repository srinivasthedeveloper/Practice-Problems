# It is an implementation of the knapsack problem using Dynamic Programming

'''
PROBLEM STATEMENT :

You’re in charge of selecting a football (soccer) team from a large pool of players. Each player has a cost, and a rating. 
You have a limited budget. What is the highest total rating of a team that fits within your budget. Assume that there’s no minimum or maximum team size.

General problem statemnt:

Given n elements, each of which has a weight and a profit, determine the maximum profit that can be obtained 
by selecting a subset of the elements weighing no more than w.
'''

# CODE

def max_profit_dp(weights,profits,capacity):
    n = len(weights)
    table = [[0 for i in range(capacity+1)] for j in range(n+1)]
    for i in range(n):
        for c in range(1,capacity+1):
            if weights[i]>c:
                table[i+1][c] = table[i][c]
            else:
                table[i+1][c] = max(table[i][c],profits[i]+table[i][c-weights[i]])
    return table[-1][-1]

capacity = int(input())
weights = list(map(int,input().split()))
profits = list(map(int,input().split()))
ans = max_profit_dp(weights,profits,capacity)
print(ans)

# Testcases

'''
test0 = {
    'input': {
        'capacity': 165,
        'weights': [23, 31, 29, 44, 53, 38, 63, 85, 89, 82],
        'profits': [92, 57, 49, 68, 60, 43, 67, 84, 87, 72]
    },
    'output': 309
}

test1 = {
    'input': {
        'capacity': 3,
        'weights': [4, 5, 6],
        'profits': [1, 2, 3]
    },
    'output': 0
}

test2 = {
    'input': {
        'capacity': 4,
        'weights': [4, 5, 1],
        'profits': [1, 2, 3]
    },
    'output': 3
}

test3 = {
    'input': {
        'capacity': 170,
        'weights': [41, 50, 49, 59, 55, 57, 60],
        'profits': [442, 525, 511, 593, 546, 564, 617]
    },
    'output': 1735
}

test4 = {
    'input': {
        'capacity': 15,
        'weights': [4, 5, 6],
        'profits': [1, 2, 3]
    },
    'output': 6
}

test5 = {
    'input': {
        'capacity': 15,
        'weights': [4, 5, 1, 3, 2, 5],
        'profits': [2, 3, 1, 5, 4, 7]
    },
    'output': 19
}
'''
