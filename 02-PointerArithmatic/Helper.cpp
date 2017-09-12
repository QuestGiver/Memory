#include "Helper.h"
#include<iostream>
#include<cstring>
using std::cout;
void printFloats(float * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "\n";
	}
}

int arraySum(int * arr, int size)
{
	int a = 0;
	for (int i = 0; i < size; i++)
	{
		a += *(arr + i);
	}
	return a;
}

float arrayAvg(int * arr, int size)
{
	int a = (arraySum(arr, size) / size);
	return a;
}

int findCount(int target, int * arr, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{	
		if (*(arr + i) == target)
		{
			total++;
		}
	}
	return total;
}

int arrayCopy(int * srcArr, int srcSize, int * dstArr, int dstSize)
{
	int j = 0;
	for (int i = 0; i < dstSize; i++)
	{
		*(dstArr + i) = *(srcArr + j);
		j++;
	}
	return *dstArr;
}

int arrReversal(int * arr, int size)
{
	if (size % 2 == 0)
	{
		int x = 0;
		int y = 0;
		int j = size - 1;
		for (int i = 0; i < size / 2; i++)
		{
			x = *(arr + i);
			y = *(arr + j);
			x = y + x;
			y = x - y;
			x = x - y;
			*(arr + i) = x;
			*(arr + j) = y;
			j--;
		}
		return *arr;
	}
	else
	{
		int x = 0;
		int y = 0;
		int j = size - 1;
		for (int i = 0; i < size-1 / 2; i++)
		{
			x = *(arr + i);
			y = *(arr + j);
			x = y + x;
			y = x - y;
			x = x - y;
			*(arr + i) = x;
			*(arr + j) = y;
			j--;
		}
		return *arr;
	}
}

void cstrReversal(char * arr, int size)
{
	//
	//you can manually determine the null break character.
	int len = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == '\0')
		{
			break;
		}
		len++;
	}
	//or
	//len = strlen(arr);
	

	for (int i = 0; i < len/2; i++)
	{
		int temp = *(arr + i);
		*(arr + i) = *(arr + len - 1 - i);
		*(arr + len - 1 - i) = temp;
	}
}


