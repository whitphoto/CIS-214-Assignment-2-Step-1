#include <iostream>
#include <stdlib.h>
#include "BankAccount.h"
using namespace std;

//Nathan Whitchurch
//Programming Assignment #2


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int accountIn;
	double balanceIn;

	accountIn = 123456;
	balanceIn = 123.45;
	
	cout << "The acocunt number is " << accountIn;
	cout << "The account balance is " << balanceIn;
		
	return 0;
}
