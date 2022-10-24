#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int left, int right, int diff)
{
	if (right <= left)
		return INT_MAX;

	int mid = left + (right - left) / 2;

	if (arr[mid + 1] - arr[mid] != diff)
		return (arr[mid] + diff);

	if (mid > 0	&& arr[mid] - arr[mid - 1] != diff)
		return (arr[mid - 1] + diff);

	if (arr[mid] == arr[0] + mid * diff)
		return findMissing(arr, mid + 1, right, diff);

	return findMissing(arr, left,
					mid - 1, diff);
}

int missingElement(int arr[], int n)
{
	sort(arr, arr + n);

	int diff = (arr[n - 1] - arr[0]) / n;

	return findMissing(arr, 0, n - 1, diff);
}


int main()
{
	int arr[] = { 2, 8, 6, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << missingElement(arr, n);
	return 0;
}

/*
Problem Statement: Given an array arr of n elements that represents an Arithmetic Progression having one missing element in the order, find that missing element.

Example: 
arr = [2, 8, 6, 10]
Output: 4
*/
