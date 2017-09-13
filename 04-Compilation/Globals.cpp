#include "Globals.h"
#include<iostream>
#include<cassert>
int counter = 0;
int globalOffensive = 0;

void makeItTwo()
{
	globalOffensive = 2;
}

void makeItOne()
{
	globalOffensive = 1;
}

void releasedHalfLove()
{
	
	static int counter = 0;
	std::cout << "The game halflove " << counter << " was released!";

	counter = ++counter % 2;

}

void stepFizzBuzz()
{
	int x = halfLoved;
	int y = globalOffensive;
	static int counter = 1;

	
			if (counter % 3 == 0)
			{

				std::cout << "Fizz\n";
				if (counter % 5 == 0)
				{
					std::cout << "Buzz\n";
				}

			}
			else if (counter % 5 == 0)
			{
				std::cout << "Buzz\n";
			}
			else if (counter % 5 == 0 && counter % 3 == 0)
			{
				std::cout << "FizzBuzz\n";
			}
			else
			{
				std::cout << counter << std::endl;
			}

		
	

}

void increment()
{
	counter++;
}

void decrement()
{
	counter--;
}

float divide(float lhs, float rhs)
{
	assert(rhs != 0.0 && "Division by Zero detected");

	return lhs / rhs;
}

void callMeMaybe()
{
	static int counter = 0;

	if (counter == 0)
	{
		std::cout << "Howdy Partnder!\n";
	}
	else if (counter == 2)
	{
		std::cout << "WOWOWOWOW\n";
	}
	else if (counter == 2)
	{
		std::cout << "HIHIHIHIHIHIHIHI\n";
	}

}



