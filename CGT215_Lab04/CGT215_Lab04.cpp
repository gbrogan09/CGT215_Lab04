// CGT215_Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	int n;
	int final = 0;
	cout << "Please enter a positive whole number: ";
	cin >> n;
	while (n <= 0) {
		cout << "Invalid input. Please enter a positive whole number: ";
			cin >> n;
	}
	cout << n << "! = ";
	for (int i = 1; i <= n; i++) {
		final += i;
		cout << i;
		if (i < n) cout << " + ";
	}
	cout << " = " << final << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
	int n;
	int diff;
	int count;
	int final = 0;
	cout << "Please enter a starting number: ";
	cin >> n;
	cout << "Please enter the number of repetitions: ";
	cin >> count;
	cout << "Please enter the value to add each repetition: ";
	cin >> diff;
	while (count > 0) {
		final += n;
		cout << n;
		if (count > 1) cout << " + ";
		count--;
		n += diff;
	}
	cout << " = " << final << endl;
}
void geometric() {
	// I recommend writing your geometric series code here
	int r;
	int a;
	int count;
	int final = 0;
	cout << "Please enter a starting number: ";
	cin >> a;
	cout << "Please enter the number of repetitions: ";
	cin >> count;
	cout << "Please enter the value to multiply by each repetition: ";
	cin >> r;
	final = a;
	cout << a << " + ";
	for (int i = 1; i < count; i++) {
		final += a * pow(r,i);
		cout << a * pow(r,i);
		if (i < count - 1) cout << " + ";
	}
	cout << " = " << final << endl;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
