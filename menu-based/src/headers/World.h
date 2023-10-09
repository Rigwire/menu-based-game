#pragma once
#include <string>

struct Entity {
	Entity(std::string name, int health, int attack, int defense, int magic)
	{
		m_name = name;
		m_health = health;
		m_attack = attack;
		m_defense = defense;
		m_magic = magic;
	}

	std::string m_name;
	float	m_health = 0;
	int m_attack = 0;
	int m_defense = 0;
	int m_magic = 0;
};


enum class Enemy : int
{

	WIZARD = 1,
	OGRE = 2,
	MONSTER = 3

};

struct World {
	
	World() :
		player("Player", 100.0f, 5, 5, 2),
		ogre("Ogre", 100.0f, 8, 30, 4),
		wizard("Wizard", 100.0f, 6, 4, 50),
		monster("Monster", 100.0f, 40, 6, 2)
	{}

	Entity player;
	Entity wizard;
	Entity ogre;
	Entity monster;
};