#include "Utils.h"
#include "stdafx.h"
#include <vector>
#include <sstream>
using namespace std;

// --------------------------------------------------------------------------------------------- //
// std::stringUtils

vector<std::string> stringUtils::splitstring(std::string str, char delimeter)
{
	vector<std::string> vecSubStrs;	
	std::string strSub;
	strSub = str;
	int nIndex = 0;
	
	while ((nIndex = strSub.find(delimeter)) >= 0)
	{
		vecSubStrs.push_back(strSub.substr(0, nIndex));
		strSub = strSub.substr(nIndex + 1);
	}

	if (!strSub.empty())
	{
		vecSubStrs.push_back(strSub.substr(0, nIndex));
	}

	return vecSubStrs;

}

// --------------------------------------------------------------------------------------------- //
// TypeConverter

TypeConverter::operator int()
{
	return atoi(m_strData.c_str());
}

TypeConverter::operator double()
{
	return atof(m_strData.c_str());
}

TypeConverter::operator bool()
{
	return isVariantOfTrue();
}

bool TypeConverter::isVariantOfTrue()
{
	return 
		(
			m_strData.compare("True")
			||
			m_strData.compare("true")
			||
			m_strData.compare("TRUE")
			||
			m_strData.compare("YES")
			||
			m_strData.compare("Yes")
			||
			m_strData.compare("yes")
		);
}

// --------------------------------------------------------------------------------------------- //