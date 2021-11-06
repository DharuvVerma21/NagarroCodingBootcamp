// Take the following as input.
// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.
// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.
// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….
// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4
// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
#include<iostream>
using namespace std;
unsigned long long int power(int a, int n){
	if (a == 0){
		if (n == 0){
			return INT32_MIN;
		}
		else{
			return 0;
		}
	}
	else if (n == 0){
		return 1;
	}
	else if (a == 1 || n == 1){
		return a;
	}
	else{
		unsigned long long int x = power(a, n/2);
		if (n%2 == 0){
			return x*x;
		}
		else{
			return a*x*x;
		}
	}
}
int main() {
	int n;
	int count = 0;
	cin >> n;
	int temp = n;
	while(temp > 0){
		count++;
		temp /= 10;
	}
	temp = n;
	int sum = 0;
	while(temp > 0){
		int a = temp%10;
		sum += power(a, count);
		temp /= 10;
	}
	if (sum == n){
		cout << "true";
	}
	else{
		cout << "false";
	}
}
