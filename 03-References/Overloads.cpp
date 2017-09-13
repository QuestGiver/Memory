#include "Overloads.h"

void PlayerGivesDamage(player & p, Enemy & e)
{
	e.health -= p.damage;
}

void PlayerGivesDamage(player & p, BossEnemy & e)
{
	e.Health -= p.damage;
	p.health -= e.damage;
}
