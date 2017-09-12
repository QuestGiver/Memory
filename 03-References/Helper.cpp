#include "Helper.h"
#include<iostream>
#include<ctime>
#include<random>
void printPlaylist(const Playlist & pl)
{
	std::cout << pl.playlistName << std::endl;
	for (int i = 0; i < pl.num; i++)
	{
		if (pl.trackList[i].trackName != "")
		{
			std::cout << (int)pl.trackList[i].playtime << ":" << (pl.trackList[i].playtime - (int)pl.trackList[i].playtime) * 100;
			std::cout << pl.trackList[i].trackName << "\n";
		}

	}
}
void shufflePlaylist(Playlist & pl)
{
	srand(time(NULL));
	int counter = 20;
	Track temp;

	while (counter > 0)
	{
		int bogo = rand() % (pl.num - 1);

		temp = pl.trackList[bogo];

		pl.trackList[bogo] = pl.trackList[bogo + 1];
		pl.trackList[bogo + 1] = temp;

		counter--;
	}
	std::cout << "Playlist shuffled!\n";
}
void dedupePlaylist(Playlist & pl)
{
	for (int i = 0; i < pl.num; i++)
	{
		for (int j = i + 1; j < pl.num; j++)
		{
			if (pl.trackList[i].trackName == pl.trackList[j].trackName)
			{
				pl.trackList[j].trackName = "";
				pl.trackList[j].playtime = 0.0f;
			}
		}
	}
}
void feedAussie(Aussiegochi& aus)
{
	aus.hunger += 10;
	aus.sanity += 1;
}
void waterAussie(Aussiegochi& aus)
{
	aus.thirst -= 10;
	aus.happiness += 1;
}
void abuseAussie(Aussiegochi& aus)
{
	aus.happiness -= 5;
	aus.sanity -= 5;
}
void coddleAussie(Aussiegochi& aus)
{
	aus.happiness += 1;
	aus.sanity += 1;
}
void enhance(int&a)
{
	a = a * 2;
}
void sum(int a, int b, int& c)
{
	c = a + b;
}

void product(float a, float b, float & c)
{
	c = a*b;
}

void swap(float & x, float & y)
{
	x = y + x;
	y = x - y;
	x = x - y;
}
