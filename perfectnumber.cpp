/*
A number is a perfect number if is equal to sum of its proper divisors, that is, 
sum of its positive divisors excluding the number itself.
*/

/*
Input: n = 15
Output: false
Divisors of 15 are 1, 3 and 5. Sum of 
divisors is 9 which is not equal to 15.

Input: n = 6
Output: true
Divisors of 6 are 1, 2 and 3. Sum of 
divisors is 6.
*/

/*
*A Simple Solution* 
is to go through every number from 1 to n-1 and check if it is a divisor. 
Maintain sum of all divisors. If sum becomes equal to n, then return true, else return false.

*An Efficient Solution* 
is to go through numbers till square root of n. If a number ‘i’ divides n, then add both ‘i’ and n/i to sum.
*/

// C++ program to check if a given number is perfect 
// or not 
#include<iostream> 
using namespace std; 

// Returns true if n is perfect 
bool isPerfect(long long int n) 
{ 
	// To store sum of divisors 
	long long int sum = 1; 

	// Find all divisors and add them 
	for (long long int i=2; i*i<=n; i++) 
	{ 
		if (n%i==0) 
		{ 
			if(i*i!=n) 
				sum = sum + i + n/i; 
			else
				sum=sum+i; 
		} 
	} 
	// If sum of divisors is equal to 
	// n, then n is a perfect number 
	if (sum == n && n != 1) 
		return true; 

	return false; 
} 

// Driver program 
int main() 
{ 
	cout << "Below are all perfect numbers till 10000\n"; 
	for (int n =2; n<10000; n++) 
		if (isPerfect(n)) 
			cout << n << " is a perfect number\n"; 

	return 0; 
} 
