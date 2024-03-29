#pragma once


#ifndef _TRANSACTIONEXCEPTIONS_H
#define _TRANSACTIONEXCEPTIONS_H
#include "stdafx.h"
#include "BaseException.hpp"

class TransactionException: public BaseException
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	TransactionException(void){}
	TransactionException(std::string msg) : BaseException(msg) {}

	// ----------------------------------------------------------------------------------------- // 


};

class NegativeAmountException : public TransactionException
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	NegativeAmountException(void){}
	NegativeAmountException(std::string msg) : TransactionException(msg) {}

};

class InsufficientFundsException : public TransactionException
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	InsufficientFundsException(void){}
	InsufficientFundsException(std::string msg) : TransactionException(msg) {}

};

class PaymentMoreThanOwingException : public TransactionException
{
public:
	
	// -------------------------------------------------------------------------------------------- //
	// constructors / destructors

	PaymentMoreThanOwingException(void){}
	PaymentMoreThanOwingException(std::string msg) : TransactionException(msg) {}

};

#endif


