// Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
// If Real and Distinct , print the roots in increasing order.
// If Real and Equal , print the same repeating root twice
// If Imaginary , no need to print the roots.
// Note : Print only the integer part of the roots.
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = (b*b)-(4*a*c);
	if (d < 0){
		cout << "Imaginary";
	}
	else if (d == 0){
		cout << "Real and Equal\n";
		float root = (-b)/(float)(2*a);
		cout << root << " " << root;
	}
	else{
		cout << "Real and Distinct\n";
		float root1 = (-b + sqrt(d))/(float)(2*a);
		float root2 = (-b - sqrt(d))/(float)(2*a);
		cout << root2 << " " << root1;
	}
}
