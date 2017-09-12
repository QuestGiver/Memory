#include<iostream>
#include"Helper.h"
#include<random>
using std::cout;

struct Weapon
{
	int bluntDmg;
	int magicDmg;
	int bladeDmg;

	struct OwnerInfo
	{
		int playerID;
		bool isRare;
	};
	OwnerInfo info;//remember to initialize a structs if you have it inside another structs

	int testVal;
};






int main()
{
	int hotdog = 10;//Primitive variable
	int& dinosaur = hotdog;//reference to hotdog
	int* dinosaurPtr = &hotdog;//pointer to hotdog

	int tacos = hotdog; // compies value of hotdog

	hotdog = 15;//This just set 3 different things to 15 because they reference the same bit of mem.

	cout << hotdog << std::endl;
	cout << dinosaur << std::endl;
	cout << *dinosaurPtr << std::endl;//you must dereference using a asterisk when pointing to a reference.

	cout << "tacos" << std::endl;
	cout << tacos << std::endl;

	//references with functions

	int valA = 1;
	int ValB = 2;
	int valC = -1;
	sum(valA, ValB, valC);
	cout << valC << std::endl;
	//references with structs

	Weapon hammer;
	hammer.bluntDmg = 90;
	hammer.bladeDmg = 10;
	hammer.magicDmg = 4356789;

	cout << hammer.magicDmg << std::endl;
	enhance(hammer.magicDmg);
	cout << hammer.magicDmg << std::endl;

	Weapon arsenal[3]=
	{
		//Blunt Magic Blade PID Rareity
		{900,   567,  0,  { 0,  true } },
		{ 900,   567, 0,  { 0,  true } },
		{ 900,   567, 0,  { 0,  true } }
	};

	for (int i = 0; i < 3; i++)
	{
		int& pid = arsenal[i].info.playerID;
		cout << arsenal[i].info.playerID << std::endl;

		if (pid == 0)
		{
			pid = -1;
		}
	}

	//closed
	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';

	int& numRef = num;
	float& Dec = dec;
	bool& Tf = tf;
	char& character = letter;

	product(hammer.bladeDmg, hammer.bluntDmg, dec);

	cout << Dec << std::endl;
	//open
	float dote = 56;
	float& sote = dote;
	swap(dec, sote);

	Aussiegochi aussie = { 5,0,100,100 };
	feedAussie(aussie);
	abuseAussie(aussie);

	Track stuff[5];
	stuff[0] = { " Grape Vine", 5.07f };
	stuff[1] = { " LoFiction", 3.53f };
	stuff[2] = { " Red Cup", 2.29f };
	stuff[3] = { " Dine 'n Dash", 7.57f };
	stuff[4] = { " Dine 'n Dash", 7.57f };
	Playlist music = {5, "Fun Times \n", stuff};
	/*music.num = 5;
	music.playlistName = "Fun Times\n";*/
	
	
	
	
	/*music.trackList[0] = { "Grape Vine", 5.07f };
	music.trackList[1] = { "LoFiction", 3.53f };
	music.trackList[2] = { "Red Cup", 2.29f };
	music.trackList[3] = { "Dine 'n Dash", 7.57f };
	music.trackList[4] = { "Nine Days", 4.23f };*/
	shufflePlaylist(music);

	printPlaylist(music);

	dedupePlaylist(music);

	printPlaylist(music);
	while (true)
	{

	}
}