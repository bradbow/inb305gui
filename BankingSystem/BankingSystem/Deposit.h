#pragma once

#ifndef _DEPOSIT_H
#define _DEPOSIT_H 

#include "stdafx.h"

class Deposit : public Transaction
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// Constructors / Destructors

	Deposit(int id, double amount, int customerId, date dt, int accountId);
	
	// ----------------------------------------------------------------------------------------- // 
	// behaviours

	virtual void execute();
	virtual void rollback();

	// ----------------------------------------------------------------------------------------- // 
	// getters

	Account* getAccount(){return _account;}

	// ----------------------------------------------------------------------------------------- // 
	
private:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	Account* _account;
	double _preTransactionBalance;

	// ----------------------------------------------------------------------------------------- // 

};

#endif

