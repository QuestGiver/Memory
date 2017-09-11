#include<iostream>
#include"Helper.h"
#include<conio.h>
using std::cout;
int main()
{
	//Working with Pointers
	//Working with Heap-Allocation Mem
	int age = 13;

	std::cout << age << std::endl;

	int* agePtr = new int(22); //Allocate age

	std::cout << agePtr << std::endl;
	std::cout << *agePtr << std::endl;

	int * ageAlias = &age; //Takes the adress of the stack Allocated mem(&age) and sets it to Heap.

	*ageAlias = 48; //Overwrites &age


	std::cout << age << std::endl;
	std::cout << *ageAlias << std::endl;
                    //Deallocate age
	

	//Pointers as Parameters
	int result = sum(agePtr, ageAlias);
	std::cout << result << std::endl;
	delete agePtr; 
	int Onum = 100;
	float Onum2 = 10.5;
	bool Onum3 = false;

	int*num = &Onum;//we do not need to delete these from the heap since they technically are still part of stack mem, i.e they are set to equal stack mem.
	float*num2 = &Onum2;
	bool*num3 = &Onum3;

	cout << *num << "|" << *num2 << "|" << *num3 << std::endl;


	/*delete num;
	delete num2;
	delete num3;*/

	int arr[10] = {0};
	float arr2[10] = {0.5f};
	bool arr3[10] = { false };

	int * Narr = *&arr;
	float * Narr2 = *&arr2;
	bool * Narr3 = *&arr3;

	cout << *Narr << "|" << *Narr2 << "|" << *Narr3 << "\n";

	//delete[] Narr;
	//delete[] Narr2;
	//delete[] Narr3;

	int* dum = new int(10);
	int* dum2 = new int(20);
	cout << diff(dum, dum2) << std::endl;

	int* dumArr = new int[100];

	for (int i = 0; i < 100; i++)
	{
		dumArr[i] = i + 1;//Implicitly dereferences, just like how "i" can access the stuff in individual array slots, it can access stuff like pointers can.
		cout << dumArr[i] << std::endl;
	}
	

	
	
	*dumArr = arrX(dumArr, 100);
	for (int i = 0; i < 100; i++)
	{
		cout << dumArr[i] << std::endl;
	}

	printArray(dumArr, 100);

	clearScreen();

	//Heap-Allocated Array of Numbers
	HAAN();
	//Adding up to 21
	AUT21();

	delete[] dumArr;//we can delete dumarr because the array itself is not set to equal a stack array.

	while (true)
	{

	}
}
