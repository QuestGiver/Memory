#include<iostream>
#include"Helper.h"
using std::cout;
//Manipulating pointer adresses and type casting

int main()
{
	//Pointer Arithmatic
	int a = 0;
	int b = 1;

	struct
	{
		int a;
		int b;
	} thing;

	thing.a = 2;
	thing.b = 3;

	cout << thing.a << "\n";
	cout << thing.b << "\n";

	std::cout << *((&thing.a) + 1) << std::endl;//you can kindof pretend structs are arrays








	//Pointer Arithmatic 2: Electric Boogaloo (Arrays)
	int * hArr = new int[2];

	hArr[0] = 1;
	hArr[1] = 2;

	cout << hArr[0] << "\n";
	cout << hArr[1] << "\n";

	cout << hArr[0] << "\n";
	cout << *(hArr+1) << "\n";//The pointer points to the array and then moves it one over to access the 2nd variable.



	int * arrLarge = new int[100];
	int arrLargeStack[100];
	//iteration w? pointer arithmatic

	for (int i = 0; i < 100; i++)
	{
		arrLarge[i] = i;
		arrLargeStack[i] = i;
	}

	for (int i = 0; i < 100; i++)
	{

		cout << *(arrLarge + i) << "\n";
	}



	delete[] hArr;

	//Type casting
	float dollars = 1.80f;

	cout << dollars << std::endl;
	cout << (int)dollars << "\n";
	
	//closed activity

	float * floaty = new float[100];
	for (int i = 0; i < 100; i++)
	{
		floaty[i] = i+0.2f;
	}

	int * inty = new int[100];

	printFloats(floaty, 100);
	delete[] floaty;


	cout << arraySum(arrLarge, 100) << "\n";

	cout << arrayAvg(arrLarge, 100) << "\n";

	cout << findCount(7, arrLarge, 100) << "\n";

	arrayCopy(arrLarge, 100, inty, 100);

	for (int i = 0; i < 100; i++)
	{
		cout << *(inty + i) << "\n";
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	arrReversal(inty, 100);
	
	for (int i = 0; i < 100; i++)
	{
		cout << *(inty + i) << "\n";
	}

	//char * phrase = "GuySensei";
	//cstrReversal(phrase, 10);

	delete[] inty;
	delete[] arrLarge;










	while (true)
	{

	}
}