// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.
#include<iostream>
using namespace std;
int countOfDigits(int n, int digit){
	int count = 0;
	while(n > 0){
		if (n%10 == digit){
			count++;
		}
		n /= 10;
	}
	return count;
}
int main() {
	int n, digit;
	cin >> n >> digit;
	int a = countOfDigits(n, digit);
	cout << a;
}
