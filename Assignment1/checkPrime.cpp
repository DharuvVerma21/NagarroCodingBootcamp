// ake as input a number N, print "Prime" if it is prime if not Print "Not Prime".
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == 2 || n == 3){
		cout << "Prime";
	}
	else{
		bool isPrime = true;
		for (int i=2; i<=sqrt(n); i++){
			if (n%i == 0){
				isPrime = false;
				break;
			}
		}
		if (isPrime){
			cout << "Prime";
		}
		else{
			cout << "Not Prime";
		}
	}
}
