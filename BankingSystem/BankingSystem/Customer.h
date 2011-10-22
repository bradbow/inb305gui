// Models a bank customer and contains accessors
// and mutators for customer information. Also
// contains functions for adding and removing accounts
// from a customers list of accounts

#include <string>
using std::string;
#include "stdafx.h"
#include <set>
using namespace std;

#ifndef _CUSTOMER_H
#define _CUSTOMER_H 

class Customer :
	public User
{
public:
	
	// constructor
	// preconditions: valid customer details passed in
	// postcondition: customer created
	Customer(
		int userName,
		std::string password,
		std::string name,
		std::string address,
		std::string phoneNumber);

	// destructor
	// precondition: none
	// postcondition: memory deallocated
	~Customer(void);

	// precondition: none
	// postcondition: returns name
	std::string getName(void);
	// precondition: valid name passed in
	// postcondition: name set
	void setName(std::string name);
	// precondition: none
	// postcondition: address returned
	std::string getAddress(void);
	// precondition: valid address passed in
	// postcondition: address returned
	void setAddress(std::string address);
	// precondition: none
	// postcondition: phone no returned
	std::string getPhoneNumber(void);
	// precondition: valid phone no passed in
	// postcondition: phone no set
	void setPhoneNumber(std::string number);
	// precondition: none
	// postcondition: returns account no's
	// as list
	set <int> getAccounts(void);
	// precondition: valid accountID passed in
	// postcondition: accountID addded to accounts
	bool addAccount(int accountID);
	// precondition: valid accountID passed in
	// postcondition: accountID removed from accounts
	// list
	bool removeAccount(int accountID);
	// precondition: none
	// postcondition: returns true if accountID is listed
	// in accounts, otherwise false
	bool hasAccount(int accountID);
	// precondition: none
	// postcondition: returns true if accounts is not empty
	bool hasAcocunt(void);
	//std::string operator<<(const Customer &rhs);

private:
	std::string _name;
	std::string _address;
	std::string _phoneNumber;
	set <int > _accounts;
	static const int NUM_FIELDS = 5;
};
#endif

