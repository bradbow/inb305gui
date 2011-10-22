// BankClerk.h
// Models a bank clerk

#ifndef _BANKCLERK_H
#define _BANKCLERK_H 

#include "stdafx.h"

class BankClerk :
	public User
{
public:
	// constructor
	// precondition: valid bank clerk details passed in
	// postcondition: bank clerk created
	BankClerk(int userName, std::string password);
	// destructor
	// precondition: none
	// postcondition: memory deallocated
	~BankClerk(void);
	//std::string operator<< (const BankClerk &rhs);

private:
	static const int NUM_FIELDS = 2;

};
#endif

