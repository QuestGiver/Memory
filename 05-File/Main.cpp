#include<fstream>
#include<iostream>
#include <string>
#include<conio.h>
#include<random>
#include<time.h>
using std::string;

using std::fstream;//select what we know we'll use

//using namespace std - select EVERYTHING.

int main()
{
	//fstream file;

	//file.open("text.txt");

	//if (file.fail())
	//{
	//	std::cout << "File not found" << std::endl;
	//	return -1;
	//}
	////Reading from a File
	//string buffer;//you need to have a nice buffer so that anything from the file can be ported over, stored and read by the concole.
	//while (std::getline(file, buffer))
	//{
	//	//print the line
	//	std::cout << buffer << std::endl;
	//}

	//file.clear();//reset error flags

	//file.seekp(0, std::ios_base::end); //move my cursor to the end

	////write a msg to the file
	//file << std::endl << "Today is always the present";

	//file.flush(); //Write down everything left in the exe buffer

	//file.close();//dont forget to close the file.

	////lets make another thingy

	//fstream autoCreate;

	//code autogens a file----------------------------------------------------------------------------------
	//autoCreate.open("createme.txt", std::ios::out);

	//if (autoCreate.fail())
	//{
	//	std::cout << "SOmething went wrong." << std::endl;
	//	return -1;
	//}

	//autoCreate.close();
	////closed-----------------------------------------------------------------------------------------------------




	//fstream Selection;

	//std::cout << "What file would you like to open?\n";
	//
	//string menuItem;
	//std::cin >> menuItem;

	//Selection.open(menuItem);

	//if (Selection.fail())
	//{
	//	std::cout << "file not found" << std::endl;
	//}

	//string buffer;

	//while (std::getline(Selection, buffer))
	//{
	//	std::cout << buffer << std::endl;
	//}


	//Selection.clear();//reset error flags

	//Selection.seekp(0, std::ios_base::end); //move my cursor to the end
	//system("pause");


	//Open-------------------------------------------------------------------

	//srand(time(NULL));
	//fstream importantFile;
	//string buffer;
	//
	//importantFile.open("text.txt");
	//char block = 219;

	//if (importantFile.fail())
	//{
	//	std::cout << "File not found\n";
	//}

	//while (std::getline(importantFile, buffer))
	//{
	//	

	//	for (int i = 0; i < buffer.length(); i++)
	//	{
	//		int a = rand() % 100 + 1;
	//		if (a > 20)
	//		{
	//			std::cout << buffer[i];
	//		}
	//		else
	//		{
	//			std::cout << block;
	//		}
	//		
	//	}
	//	std::cout << std::endl;
	//}

	//importantFile.close();

	fstream sepValues;

	int arr[4] = { 0 };







	while (true)
	{

	}


	//Writing from a file
}