//FINDING AVERAGE MARKS OF 5 SUBJECTS (3B)
// Archisha Chatterjee
// PRN : 24070123021

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
   cout << "Enter marks of Subject 1 : ";
   cin >> a;
   cout << "Enter marks of Subject 2 : ";
   cin >> b;
   cout << "Enter marks of Subject 3 : ";
   cin >> c;
   cout << "Enter marks of Subject 4 : ";
   cin >> d;
   cout << "Enter marks of Subject 5 : ";
   cin >> e;
   int avg;
   avg = (a+b+c+d+e)/5;
   if (avg <=100 && avg > 90){
   	cout << "O grade";
   }
   else if (avg <=90 && avg >80){
   	cout << "A+ grade";
   }
   else if (avg <=80 && avg >70){
   	cout << "A grade";
   }
   else if (avg <=70 && avg >60){
   	cout << "B+ grade";
   }
   else if (avg <=60 && avg >50){
   	cout << "B grade";
   }
   else if (avg <=50 && avg >40){
   	cout << "C grade";
   }
   else if (avg <=40 && avg >30){
   	cout << "D grade";
   }
   else{
   	cout << "Fail";
   }
	return 0;
}
