// Input three numbers, print the largest of these numbers
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = INT32_MIN;
	if (a > max){
		max = a;
	}
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	cout << max;
}
