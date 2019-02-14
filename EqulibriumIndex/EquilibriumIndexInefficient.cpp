/*

Equilibrium index of an array is an index such that the sum of elements 
at lower indexes is equal to the sum of elements at higher indexes.

*/

/*
*Algorithm*

Use two loops. 
Outer loop iterates through all the element and 
inner loop finds out whether the current index picked by the outer loop is equilibrium index or not. 
Time complexity of this solution is O(n^2).

*/

#include <bits/stdc++.h> 
using namespace std; 

int equilibrium(int arr[], int n) 
{ 
	int i, j; 
	int leftsum, rightsum; 

	/* Check for indexes one by one until 
	an equilibrium index is found */
	for (i = 0; i < n; ++i) 
	{	 
		/* get left sum */
		leftsum = 0; 
		for (j = 0; j < i; j++) 
			leftsum += arr[j]; 

		/* get right sum */
		rightsum = 0; 
		for (j = i + 1; j < n; j++) 
			rightsum += arr[j]; 

		/* if leftsum and rightsum 
		are same, then we are done */
		if (leftsum == rightsum) 
			return i; 
	} 

	/* return -1 if no equilibrium 
	index is found */
	return -1; 
} 

int main() 
{ 
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 }; 
	int arr_size = sizeof(arr) / sizeof(arr[0]); 
	cout << equilibrium(arr, arr_size); 
	return 0; 
} 

