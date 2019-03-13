#include <iomanip>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{

	double TP1;
	cout << "Box cost: ";
	cout << "$250 ";
	cout <<  "     Number of Tickets sold:";
	cin >> TP1;
	cout << "Total Sale:" << setprecision(2) << fixed << 250 * TP1 <<endl;

	double TP2;
	cout << "Sideline cost: ";
	cout << "$100 ";
	cout <<  "     Number of Tickets sold:";
	cin >> TP2;
	cout << "Total Sale:" << setprecision(2) << fixed << 100 * TP2 <<endl;

	double TP3;
	cout << "Premium cost: ";
	cout << "$50 ";
	cout <<  "     Number of Tickets sold:";
	cin >> TP3;
	cout << "Total Sale:" << setprecision(2) << fixed << 50 * TP3 <<endl;

	double TP4;
	cout << "General Admission cost: ";
	cout << "$25 ";
	cout <<  "     Number of Tickets sold:";
	cin >> TP4;
	cout << "Total Sale:" << setprecision(2) << fixed << 25 * TP4 <<endl;

	 
	
	_getch();
	return 0;
}