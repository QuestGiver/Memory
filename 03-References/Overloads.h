#pragma once


struct Enemy
{
	int health;
};

struct BossEnemy
{
	int Health;
	int damage;
};


struct player
{
	int health, damage;
};


void PlayerGivesDamage(player &p, Enemy &e);
void PlayerGivesDamage(player &p, BossEnemy &e);