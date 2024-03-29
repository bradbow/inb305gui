// User.h


using std::string;

#ifndef _USER_H
#define _USER_H 
#include <string>
#include "stdafx.h"

class User
{
public:

	enum UserType
	{
		BANK_CLERK,
		CUSTOMER
	};

	friend class BankClerk;
	friend class Customer;
	friend class UserServices;
	
	// constructor
	// precondition: valid user details passed in
	// postcondition: user is created
	User(int userId, std::string password);
	// destructor
	// precondition: none
	// postcondition: memory deallocated
	~User(void);

	int getUserId(){return _userId;}

private:

	int _userId;
	std::string _password;
	std::string _userName;
	UserType m_utType;
};
#endif
