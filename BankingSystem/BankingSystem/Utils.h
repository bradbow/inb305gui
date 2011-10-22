#pragma once

#ifndef UTILS_H
#define UTILS_H
#include "stdafx.h"
#include <string>
#include <vector>
using namespace std;

class stringUtils
{
public:
	static vector<std::string> splitstring(std::string str, char delimiter);
};

class TypeConverter
{
public:
	TypeConverter(std::string strData) : m_strData(strData){}

	operator int();
	operator double();
	operator bool();

private:
	std::string m_strData;
	bool isVariantOfTrue();
	bool isVariantOfFalse();
};

#endif

