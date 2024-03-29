#pragma once

#ifndef _BASEEXCEPTION_H
#define _BASEEXCEPTION_H
#include "stdafx.h"
#include <string>

using namespace System;

class BaseException
{
public:

	// ----------------------------------------------------------------------------------------- // 
	// constructors / destructors

	BaseException(void){}
	BaseException(std::string msg){_msg = msg;}

	// ----------------------------------------------------------------------------------------- // 

protected:

	// ----------------------------------------------------------------------------------------- // 
	// data members

	std::string _msg;

	// ----------------------------------------------------------------------------------------- // 
};

#endif

