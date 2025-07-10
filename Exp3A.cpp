//FINDING WHETHER A NUMBER IS POSITIVE OR NOT (3A)
// Archisha Chatterjee 
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
	float a;
	cout << "Enter number : " ;
	cin>> a;
	if (a>0){
    	cout<< a << " is positive";
	}
	else if (a<0) {
    	cout << a << " is negative";
	}
	else {
    	cout << a << " is 0";}
	return 0;
}
