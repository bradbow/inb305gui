// Account.h
// Models a customer account and contains accessors
// and mutators for account information


#pragma warning( disable : 4290 )

using namespace std;

#ifndef _ACCOUNT_H
#define _ACCOUNT_H 
#include "stdafx.h"
#include "TransactionExceptions.hpp"

class Account
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destruction
	
	Account
	(
		int accountId, int customerId, std::string accountName,
		double interestRate, double balance
	) : _accountId(accountId), _customerId(customerId), 
	    _accountName(accountName), _interestRate(interestRate),
		_balance(balance){}

	
	// ----------------------------------------------------------------------------------------- // 
	// getters

	int getAccountId(){return _accountId;}
	int getCustomerId(){return _customerId;}
	std::string getAccountName(){return _accountName;}
	double getInterestRate(){return _interestRate;}
	double getBalance(){return _balance;}

	// ----------------------------------------------------------------------------------------- // 
	// setters

	void setAccountName(std::string value){_accountName = value;}
	void setInterestRate(double value){_interestRate = value;}
	void setBalance(double value){_balance = value;}

	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void deposit(double amount) throw (TransactionException) = 0;
	virtual void applyInterest() = 0;

	// ----------------------------------------------------------------------------------------- // 

private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	int _accountId;
	int _customerId;
	std::string _accountName;
	double _interestRate;
	double _balance;

	// ----------------------------------------------------------------------------------------- // 
	
};
#endif