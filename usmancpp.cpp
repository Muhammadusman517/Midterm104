#include<iostream>
using namespace std;
int main() {
	int loyalty =0;
	double purchase;
	double conversion = 10;
	char choice;
	do {
		cout << "enter total amount of purchase:" << endl;
		cin >> purchase;
		loyalty += loyalty / conversion;
		cout << "your loyalty points:" << endl;
		cout << "do you want to redeem" << endl;
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			cout << "enter the number of redeem:" << endl;
			int redeem, discount;
			cin >> redeem;

			discount = redeem / loyalty * 0.5;
			cout << "discount is apply:" << endl;
			cout << "do you want to make another purchase:" << endl;
			cin >> choice;
			
		}
		

	} while (choice == 'y' || choice == 'Y');
		cout<< "Thank you for shopping:" << endl;
	return 0;
}