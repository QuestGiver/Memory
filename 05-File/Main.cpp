#include<fstream>
#include<iostream>
#include <string>
#include<conio.h>
#include<random>
#include"Entity.h"
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
	//string buffer;//you need to have a nice buffer so that anything from the file can be ported over, stored and read by the console.
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



	////Digital Printer
	//fstream Selection;

	//std::cout << "What file would you like to open?\n";
	//
	//string menuItem;
	//std::cin >> menuItem;

	//Selection.open(menuItem);//Remember to close files.

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
	//Selection.close();

	//Selection.seekp(0, std::ios_base::end); //move my cursor to the end
	//system("pause");


	//My Information

	//std::string inputBuffer;

	//std::cout << "Where would you like to save this?" << std::endl;
	//std::cin >> inputBuffer;

	//std::fstream profileData;
	//profileData.open(inputBuffer.c_str(), std::ios_base::out);

	//if (profileData.fail())
	//{
	//	std::cout << "Sorry, it seems we cant save data here.";
	//	return;
	//}


	////cin.ignor(1000, '\n');
	//std::cout << "WHo are you?" << std::endl;
	//getline(std::cin, inputBuffer);	
	//profileData << inputBuffer << "\n";

	//std::cout << "How old are you?" << std::endl;
	//getline(std::cin, inputBuffer);	
	//profileData << inputBuffer << "\n";

	//std::cout << "What's your favorite color?" << std::endl;
	//getline(std::cin, inputBuffer);
	//profileData << inputBuffer << "\n";

	//std::cout << "Thanks for feeding the google machine." << std::endl;
	//profileData.flush();
	//profileData.close();

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

	////////fstream sepValues;

	////////int arr[4] = { 0 };

	fstream entityStream;
	entityStream.open("monsters.txt");

	if (entityStream.fail())
	{
		std::cout << "CAN'T OPEN FILE" << std::endl;
	}

	int enitycount = 0;
	entity entities[100];

	while (true)
	{
		std::string buf;
		bool entityFound = false;
		//seek to the next entity
		while (getline(entityStream, buf))
		{
			if (buf[0] == '@')
			{
				entityFound = true;
				break;
			}
		}

		if (!entityFound)
		{
			break;
		}
		//load data into the array of entities
		entity& curEntity = entities[enitycount];
		getline(entityStream, buf);
		curEntity.hitpoints = stof(buf);

		getline(entityStream, buf);
		curEntity.armor = stof(buf);

		getline(entityStream, buf);
		curEntity.strength = stof(buf);

		getline(entityStream, buf);
		curEntity.defense = stof(buf);

		getline(entityStream, buf);
		curEntity.agility = stof(buf);

		getline(entityStream, buf);
		curEntity.luck = stof(buf);

		enitycount++;
		//exit if no entity is found
		if (enitycount >= 100)
		{
			break;
		}
	}

	


	while (true)
	{

	}


	//Writing from a file
}