#pragma once

struct Entity {
	Entity(int health, int attack, int defense, int magic)
	{
		m_health	= health;
		m_attack	= attack;
		m_defense	= defense;
		m_magic		= magic;
	}

	
	int m_health = 0;
	int m_attack = 0;
	int m_defense = 0;
	int m_magic = 0;
};


enum class Enemy : int
{

	WIZARD		= 1,
	OGRE		= 2,
	MONSTER		= 3

};
