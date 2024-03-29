#pragma once

#ifndef _CREDITACCOUNT_H
#define _CREDITACCOUNT_H

#include "stdafx.h"

class CreditAccount : public Account
{
public:

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	CreditAccount
	(	
		int accountId, int customerId, std::string accountName,
		double interestRate, double balance = 0
	);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	virtual void deposit(double amount) throw (TransactionException);
	virtual void applyInterest();

};

#endif

