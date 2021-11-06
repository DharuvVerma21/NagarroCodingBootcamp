// Take as input a Number N and Print all the prime numbers from 2 to N.
#include<iostream>
#include<cmath>
using namespace std;
int main () {
	int n;
	cin >> n;
	if (n == 2){
		cout << 2;
		return 0;
	}
	if (n == 3){
		cout << 2 << ", " << 3;
		return 0;
	}
	cout << 2 << ", " << 3;
	for (int num=4; num<=n; num++){
		bool isPrime = true;
		for (int i=2; i<=sqrt(num); i++){
			if (num%i == 0){
				isPrime = false;
				break;
			}
		}
		if (isPrime){
			cout << ", " << num;
		}
	}
}
