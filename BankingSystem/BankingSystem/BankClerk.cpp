// BankClerk.cpp
// Models a bank clerk

#include "BankClerk.h"
#include "stdafx.h"

// constructor
// precondition: valid bank clerk details passed in
// postcondition: bank clerk created
BankClerk::BankClerk(
	int userName, 
	std::string password) : 
User(userName, password){}

// destructor
// precondition: none
// postcondition: memory deallocated
BankClerk::~BankClerk(void)
{
}

// TODO cannot concatenate std::string in clr
//std::string BankClerk::operator<< (const BankClerk &rhs){
//
//	BankClerk temp = rhs;
//	std::string delimited =
//		temp.getUserId() + "," +
//		temp._password + ",";
//		return delimited += "," + NUM_FIELDS;
//}

