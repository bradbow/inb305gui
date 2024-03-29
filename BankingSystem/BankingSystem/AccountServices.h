// AccountServices.h
// Provides services to open, close, retrieve and modify customer 
// accounts.

#ifndef _ACCOUNT_SERVICES_H
#define _ACCOUNT_SERVICES_H

#include "stdafx.h"
#include "DataSource.h"
#include "HomeLoanAccount.hpp"
#include <vector>
#include <string>

using namespace std;

class AccountServices
{
public:

	enum accountType{ SAVINGS_ACC, CREDIT_ACC, HOME_LOAN_ACC};

	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors / instance retreival

	~AccountServices(void){}

	// precondition: none
	// postcondition: an AccountSerices is returned, if none is alreay
	// available one is created then returned
	static AccountServices *instance(void);

	// -------------------------------------------------------------------------------------------- //
	// behaviours

	// precondition: valid parameters passed in
	// postcondition: a savings account is created and returned
	void makeSavingsAccount 
	(
		std::string accountName, int customerId,
        double interestRate, double balance
	);

	// precondition: valid parameters passed in
	// postcondition: a credit account is created and returned
	void makeCreditCardAccount 
	(
		std::string accountName, int customerId,
        double interestRate, double balance,
        double overdraftLimit
	);

	// precondition: valid parameters passed in
	// postcondition: a home loan account is created and returned
	void makeHomeLoanAccount 
	(
		std::string accountName, int customerId,
        double interestRate, double balance,
        std::string propertyAddress, HomeLoanAccount::RepaymentOption option, 
        double minimumRepayment
	);

	// precondition: valid accountID with a zero balance is passed in
	// postcondition: account matching accountID is closed 
	void closeAccount(int accountID);

	// precondition: valid accountID passed in
	// postcondition: Account matching accountID returned
	Account *getAccount(int accountID);

	// precondition: valid customerID passed in
	// postcondition: list of accounts matching customerID returned
	vector<Account*> getAccountsForCustomer(int customerID);

	// -------------------------------------------------------------------------------------------- //

private:

	static AccountServices* _accountServicesInstance;
	static DataSource* _ds;
	
	// precondition: none
	// postcondition: creates instance of AccountServices
	AccountServices();	

	// -------------------------------------------------------------------------------------------- //
	// utility

	int getNextAccountId(){return 1;}

};
#endif

