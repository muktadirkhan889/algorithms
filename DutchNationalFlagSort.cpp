/*

The goal is to sort an array of 0, 1 and 2's but you must do this in place, 
in linear time and without any extra space (such as creating an extra array). 
This is called the Dutch national flag sorting problem. 
For example, if the input array is [2,0,0,1,2,1] then your program should output [0,0,1,1,2,2] 
and the algorithm should run in O(n) time.

*/

/*

*Algorithm*

The solution to this algorithm will require 3 pointers to iterate throughout the array, swapping the necessary elements.
(1) Create a low pointer at the beginning of the array and a high pointer at the end of the array.
(2) Create a mid pointer that starts at the beginning of the array and iterates through each element.
(3) If the element at arr[mid] is a 2, then swap arr[mid] and arr[high] and decrease the high pointer by 1.
(4) If the element at arr[mid] is a 0, then swap arr[mid] and arr[low] and increase the low and mid pointers by 1.
(5) If the element at arr[mid] is a 1, don't swap anything and just increase the mid pointer by 1.

This algorithm stops once the mid pointer passes the high pointer.

*Time Complexity*
O(n)
*/

#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b) {
	int temp = *a;
	*a= *b;
	*b = temp;
}
void sort(int a[],int arr_size) {
	int low = 0;
	int high = arr_size - 1;
	int mid = 0;

	while(mid <= high) {
		switch(a[mid]) {
			case 0:
				swap(&a[low++],&a[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(&a[mid],&a[high--]);
				break;
		}
	}
}
void printArray(int a[], int n) {
	for(int i=0;i<n;i++) 
		cout<<a[i]<<" ";
}
int main() {
	int a[] = {0,1,1,1,0,2,2,2,2,1,0,1,0,2,0,1,0};
	sort(a,sizeof(a)/sizeof(a[0]));
	printArray(a,sizeof(a)/sizeof(a[0]));
}
