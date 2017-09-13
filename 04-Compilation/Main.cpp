#include<iostream>
#include<cassert>
#include"globals.h"
void diffArrays(int * arrA, size_t arrAsize, int* arrB, size_t arrBSize)
{
	assert(arrBSize <= arrAsize);
#ifdef _DEBUG
	if (arrBSize > arrAsize)
	{
		//std::cerr << __FILE__ << "\n" << __LINE__ << "\n" << __DATE__ << "\n" << "ArrB's Size exceeds that of ArrA's";
		abort();
	}
#endif // _DEBUG

	for (int i = 0; i < arrBSize; i++)
	{
		arrA[i] -= arrB[i];
	}
}

int& picker(int& optA, int& optB, int& optC)
{
	static int counter = 0;
	switch (counter++ % 3)
	{
	case 0:
		return optA;

		break;
	case 1:
		return optB;
		break;
	case 2:
		return optC;
		break;

	default:
		return optA;
		break;
	}
}

void gridgen(int width, int height)
{
	assert(width > -1 && height > -1 );

}


void Numcounter()
{
	static int ct = 0;
	ct++;
	std::cout << ct << std::endl;
}

int halfLoved = 0;
int main()
{
	//Preprocessor Directives
	int numA[] = { 3,2,1 };
	int numB[] = { 3,2,1 };
	diffArrays(numA, 3, numB, 3);

	for (int i = 0; i < 3; i++)
	{
		std::cout << numA[i] << std::endl;
	}

	for (int i = 0; i < 50; i++)
	{
		Numcounter();
	}


	for (int i = 0; i < 5; i++)
	{
		releasedHalfLove();
		system("pause");
	}

	halfLoved = 100;
	globalOffensive = 100;

	

	while (true)
	{
		stepFizzBuzz();
	}

}