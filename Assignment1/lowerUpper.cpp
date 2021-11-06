// Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.
#include<iostream>
int main() {
	char ch;
	std::cin >> ch;
	if (ch >= 97 && ch <= 122){
		std::cout << "lowercase";
	}
	else if (ch >= 65 && ch <= 90){
		std::cout << "UPPERCASE";
	}
	else{
		std::cout << "Invalid";
	}
}
