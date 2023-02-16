
#ifndef USER_H_
#define USER_H_
#include <iostream>
using namespace std;

class User {

	public:
		string name;
		string username;
		string dob;
		string userName;
		string setUser();
		int createPin();
		int pin = 0;
		float checkingAccount = 0;
		float savingsAccount = 0;
		
		
		float showChecking();
		float showSavings();
		float makeDeposit();
		void menuScreen();
		void createAccount();
		
		User();
		~User();
		
};

#endif /* USER_H_ */