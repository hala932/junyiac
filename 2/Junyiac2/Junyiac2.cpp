// Junyiac2.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <windows.h> 

void PrintNumber(int &iInput)
{
	int iTotal = 1;
	for (int i = 1; i < iInput; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d ", i);
			iTotal++;
		}
		else if (i % 3 == 0 || i % 5 == 0)
		{
		}
		else
		{
			printf("%d ", i);
			iTotal++;
		}
	}
	printf("%d Total:%d ", iInput, iTotal);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int iInput;
	scanf_s("%d", &iInput);

	PrintNumber(iInput);

	system("pause");
	return 0;
}




