//FIND THE COORDINATES BELONG TO WHICH QUADRANT (3C)
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
	int x,y;
	cout << "Enter coordinates as (X, Y) :" << endl ;
	cout << "Enter X : ";
	cin >> x;
	cout << "Enter Y : ";
	cin >> y;
	if (x>0 && y>0){
    	cout << "Point is on First Quadrant ";
	}
	else if (x>0 && y<0){
    	cout << "Point is on the Fourth Quadrant";
	}
	else if (x<0 && y<0){
    	cout << "Point is on the Third Quadrant";
	}
	else if (x<0 && y>0){
    	cout << "Point is on the Second Quadrant";
	}
	else if(x==0 || y==0){
    	cout << "Point is on the axis";
	}
	else {
    	cout << "Point is on the origin";
	}
	return 0;
}

