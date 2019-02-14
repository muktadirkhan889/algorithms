/*
Find the number closest to n and divisible by m
Given two integers n and m. The problem is to find the number closest to n and divisible by m. 
If there are more than one such number, then output the one having maximum absolute value. 
If n is completely divisible by m, then output n only. Time complexity of O(1) is required.
*/

/*
We find value of n/m. Let this value be q. Then we find closest of two possibilities. 
One is q * m other is (m * (q + 1)) or (m * (q – 1)) depending on whether one of the given two numbers is negative or not.
*/


#include <bits/stdc++.h> 
using namespace std; 

// function to find the number closest to n 
// and divisible by m 
int closestNumber(int n, int m) 
{ 
	// find the quotient 
	int q = n / m; 
	
	// 1st possible closest number 
	int n1 = m * q; 
	
	// 2nd possible closest number 
	int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1)); 
	
	// if true, then n1 is the required closest number 
	if (abs(n - n1) < abs(n - n2)) 
		return n1; 
	
	// else n2 is the required closest number	 
	return n2;	 
} 

int main() 
{ 
	int n = 13, m = 4; 
	cout << closestNumber(n, m) << endl; 
	
	n = -15; m = 6; 
	cout << closestNumber(n, m) << endl; 
	
	n = 0; m = 8; 
	cout << closestNumber(n, m) << endl; 
	
	n = 18; m = -7; 
	cout << closestNumber(n, m) << endl; 
	
	return 0; 
} 
