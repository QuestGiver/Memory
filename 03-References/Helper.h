#pragma once
#include<string>
struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};
struct Track
{
	std::string trackName; // name of track
	float playtime;        // track runtime
};

struct Playlist
{
	int num;
	std::string playlistName; // name of playlist
	Track * trackList /*= new Track[num]*/;        // pointer to array of tracks
};

void printPlaylist(const Playlist& pl);
void shufflePlaylist(Playlist& pl);
void dedupePlaylist(Playlist& pl);

void feedAussie(Aussiegochi& aus);
void waterAussie(Aussiegochi& aus);
void abuseAussie(Aussiegochi& aus);
void coddleAussie(Aussiegochi& aus);

void enhance(int&a);
void sum(int a, int b, int& c);
void product(float a, float b, float& c);
void swap(float& a, float& b);