#include "Code.h"



Code::Code()
{
	*StringToCode = nullptr;
	*ShifrCode = nullptr;
}

Code::Code(string * InCodeString)
{
	StringToCode = InCodeString;
	Create_ShifrCode();
}

Code::Code(const Code &C)
{
	StringToCode = C.StringToCode;
	Create_ShifrCode();
}

Code::~Code()
{
}

void Code::Get_ShifrCode(string &OutString)
{
	OutString = *ShifrCode;
}

void Code::Get_StringToCode(string &OutString)
{
	OutString = *StringToCode;
}

void Code::Set_StringToCode(string &InString)
{
	*StringToCode = InString;
}

void Code::Create_ShifrCode()
{

}