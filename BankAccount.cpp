//BankAccount System

/*
Create a class BankAccount class:
(Private) Attributes: (string) accountHolder and (double) balance
(Public) Functions: 
1. deposit -> to deposite money into the account
2. withdraw -> to withdraw money into the account
3. checkBalance -> to check current balance
4. displayInfo -> to diplay name and balance
*/


#include <iostream>
using namespace std;

class bankAccount {
public:
	string accountHolder;
	double balance=0;

	void deposit(double money) {
		balance = balance + money;
		cout << "Sucessfully Deposited" << endl;
		cout << "New Balance: " << balance;
	}

	void withdraw(double money) {
		balance = balance - money;
		cout << "Sucessfully Deposited" << endl;
		cout << "New Balance: " << balance;
	}

	void checkBalance() {
		cout << "Balance: " << balance;

	}

	void displayInfor() {
		cout << "Name: " << accountHolder << endl;
		cout << "Balance: " << balance;
	}
};

int main() {
	string option;
	double money;
	bankAccount account;

	account.balance = 5000;

	cout << "Welcome to Patel Bank" << endl << endl;

	cout << "Create a Bank Account" << endl;
	cout << "Enter your name: ";
	cin >> account.accountHolder;
	cout << "Suscessfully account created" << endl << endl;

	cout << "Day 2" << endl;
	cout << "Choose a option: deposit, withdraw, checkBalance or displayInfor: ";
	cin >> option;

	if (option == "deposit") {
		cout << "How much you want to deposit: ";
		cin >> money;
		account.deposit(money);
	}
	else if (option == "withdraw") {
		cout << "How much you want to withdraw: ";
		cin >> money;
		account.withdraw(money);
	}
	else if (option == "checkBalance") {
		account.checkBalance();
	}
	else {
		account.displayInfor();
	}
	return 0;
}
