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
	int Length = StringToCode->length;
	string Str = *StringToCode;
	// first step
	if (Length % 2)
	{
		for (int i = 0, j = Length - 1; i < Length || j > 0; ++i, --j)
		{
			if (i != j)
			{
				Str[i] ^= Str[j];
			}
			else
			{
				~Str[i];
			}
		}
	}
	else
	{
		for (int i = 0, j = Length - 1; i < Length || j > 0; ++i, --j)
		{
			Str[i] ^= Str[j];
		}
	}
	// second step
	for (int i = 0, char j = ~Str[Length/2]; i < Length; ++i)
	{
		Str[i] ^= j;
	}
	*ShifrCode = Str;
}