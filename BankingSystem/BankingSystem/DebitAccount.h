#pragma once

#ifndef _DEBITACCOUNT_H
#define _DEBITACCOUNT_H

#include "stdafx.h"

class DebitAccount: public Account
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	DebitAccount
	(
		int accountId, int customerId, std::string accountName,
		double interestRate, double balance = 0
	);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	void withdraw(double amount);
	virtual void deposit(double amount) throw (TransactionException);
	virtual void applyInterest();

	// -------------------------------------------------------------------------------------------- //

};

#endif

