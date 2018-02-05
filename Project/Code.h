#pragma once
#include <string>
#include <iostream> 
using namespace std;

class Code
{
protected:
	string *StringToCode;
	string *ShifrCode;

	void Get_ShifrCode(string &OutString);
	void Get_StringToCode(string &OutString);
	void Set_StringToCode(string &InString);
	void Create_ShifrCode();
	virtual void UseShifrCode()=0;
public:
	Code();
	Code(string *InCodeString);
	Code(const Code &C);
	virtual ~Code();
};

