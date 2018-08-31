// Junyiac-1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include <vector>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;



void split(std::string& s, std::vector<std::string>& oVector)
{
	char* pStrok = strtok((char *)s.c_str(), " ");
	while (pStrok != NULL)
	{
		oVector.push_back(pStrok);
		pStrok = strtok(NULL, " ");
	}
	
}

int _tmain(int argc, _TCHAR* argv[])
{
	// get the variable
	std::string input;
	getline(cin, input);

	// split the variable
	std::vector<std::string> oSplit;
	split(input, oSplit);

	// reverse the string
	std::vector<std::string>::iterator i;
	for (i = oSplit.begin(); i < oSplit.end(); i++)
	{
		std::string output(i->c_str());
		std::reverse(output.begin(), output.end());
		printf("%s ", output.c_str());
	}

	system("pause");
	return 0;
}