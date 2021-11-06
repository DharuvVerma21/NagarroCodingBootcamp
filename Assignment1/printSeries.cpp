// Take the following as input.
// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
#include<iostream>
using namespace std;
void printSeries(int n1, int n2){
	int count = 0;
	int i = 1;
	while(count < n1){
		int ans = 3*i + 2;
		if (ans%n2 != 0){
			count++;
			cout << ans << '\n';
		}
		i++;
	}
}
int main() {
	int n1, n2;
	cin >> n1 >> n2;
	printSeries(n1, n2);
}
