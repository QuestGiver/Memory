#include "Helper.h"
#include<iostream>
#include<conio.h>

int sum(int * Ptr, int * Alias)
{
	return *Ptr + *Alias;
}

int diff(int * Ptr, int * Alias)
{
	return *Ptr - *Alias;
}


int arrX(int * arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = (i + 1) * 3;
	}

	return *arr;
}

void printArray(int * arr,int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << "\n";
	}
}

void clearScreen()
{
	for (int i = 0; i < 25; i++)
	{
		std::cout << "\n";
	}
}

bool isAlpha(char query)
{
	return query >= 'A' && query <= 'Z' || query >= 'a' && query <= 'z';
}

void HAAN()
{
	std::cout << "How many numbers would you likle to enter?\n";
	int menit = 0;
	std::cin >> menit;
	int even = 0;
	int odd = 0;
	int * menuItem = new int(menit);
	int * item = new int[*menuItem];
	for (int i = 0; i < *menuItem; i++)
	{
		std::cout << "Ok, what is number" << i + 1 << "?\n";
		std::cin >> menit;
		item[i] = menit;
		if (item[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	if (even > odd)
	{
		std::cout << "You sure do like even numbers!\n";
		system("pause");
	}
	else if(odd < even)
	{
		std::cout << "You sure do like odd numbers!\n";
		system("pause");
	}
	else
	{
		std::cout << "You like both even and odd numbers equally!";
	}

}

void AUT21()
{
	std::cout << "How many numbers would you likle to enter?\nAll numbers combined need to equal 21.";
	int menit = 0;
	int a = 0;
	std::cin >> menit;
	int * menuItem = new int(menit);
	int * item = new int[*menuItem];
	for (int i = 0; i < *menuItem; i++)
	{
		std::cout << "Ok, what is number" << i + 1 << "?\n";
		std::cin >> menit;
		item[i] = menit;
		a += menit;
	}
	if (a == 21)
	{
		std::cout << "GG, 21.";
		system("pause");
	}
	else
	{
		std::cout << "Womp womp, not 21";
		system("pause");
	}

}

char toLower(char &query)
{
	if (isAlpha(query) == true)
	{
		if (query >= 'A' && query <= 'Z')
		{
			query += 'a' - 'A';//a-A i8n this case means 32 in character code number for ascii. query += 32. This means that capitol letter have 32 added to them in order to be set to their lower case varients.
			return query;
		}

	}
	else
	{
		return query;
	}

}
