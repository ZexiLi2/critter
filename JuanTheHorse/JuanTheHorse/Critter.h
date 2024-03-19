#pragma once //11
#include <iostream>
using namespace std;
class Critter
{
public:
	Critter(int hunger = 2, int boredom = 2, int knowledge = 2);
	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4, int know =2);
	void Study(int know = 2, int fun = 4);
	void Orc();
private:
	int m_Hunger;
	int m_Boredom;
	int m_Knowledge;
	//int GetMood() const;
	void PassTime(int time = 1);

};
