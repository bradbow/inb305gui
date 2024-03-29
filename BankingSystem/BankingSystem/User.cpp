//User.cpp
#include "User.h"
#include "stdafx.h"

// constructor
// precondition: valid user details passed in
// postcondition: user is created
User::User(int userID, std::string password) 
	: _userId(userID), _password(password)
{
}

// destructor
// precondition: none
// postcondition: memory deallocated
User::~User(void)
{
}
