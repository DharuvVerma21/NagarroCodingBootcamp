// Read as input 5 Numbers and print the largest out of them.
#include<iostream>
using namespace std;
int main () {
	int a[5];
	int max = INT32_MIN;
	for (int i=0; i<5; i++){
		cin >> a[i];
		if (a[i] > max){
			max = a[i];
		}
	}
	cout << max;
}
