#include "Critter.h"
using namespace std;
Critter::Critter(int hunger, int boredom, int knowledge) {
	//low hunger = good, low boredom = good, high knowledge = good
	m_Hunger = hunger; m_Boredom = boredom; m_Knowledge = knowledge;
	cout << "A critter has been born!" << endl;
	cout << "Hunger level " << m_Hunger << endl;
	cout << "Boredom level " << m_Boredom << endl;
	cout << "Knowledge level " << m_Knowledge << endl;
	cout << "\nJuan: I'm Juan, the almighty ruler of the balcony, fear me mortal! (help me i'm stuck >_<)\n";

}

void Critter::Talk() {
	cout << "Hunger level " << m_Hunger << endl;
	cout << "Boredom level " << m_Boredom << endl;
	PassTime();
	m_Knowledge += 1;
	cout << "Knowledge level " << m_Knowledge << endl;
	if (m_Hunger + m_Boredom > 25)
	{
		cout << "Juan is a divine being and cannot die.\n" << "Instead he will sacrifice the nearest soul, you are the nearest soul\n" << "You died (don't worry, you didn't lose anything valuable).\n";
		//en teoria el joc hauria d'acaba aquí, però no se com fer-ho.
	}
	else if (m_Hunger + m_Boredom > 19)
	{
		cout << "Juan is on the verge of death, be careful!\n";
	}
	else if (m_Hunger + m_Boredom < 19 && m_Hunger + m_Boredom >= 15)
	{
		cout << "Juan is hungery\n";
	}
	else if (m_Hunger + m_Boredom < 15 && m_Hunger + m_Boredom >= 5)
	{
		cout << "Juan is aight\n";
	}
	else if (m_Hunger + m_Boredom < 5 && m_Hunger + m_Boredom > 0)
	{
		cout << "Juan does not need food nor entertainment\n";
	}
	else
	{
		cout << "Juan: ^-^\n";
	}
}

void Critter::Eat(int food ) {
	
	if (m_Hunger< ( - 10) && m_Hunger>(-50))
	{
		cout << "Juan: Stop feeding me!\n";
	}
	else if (m_Hunger < (-50))
	{
		cout << "Juan: STOP!\n";
	}
	else
	{
		cout << "\nFeeding Juan, yummy yummy in my tummy\n";
	}
	m_Hunger -= food;
	cout << "Juan's hunger level: " << m_Hunger << endl;
	PassTime();

}

void Critter::Play(int fun, int know ) {
	cout << "\nPlaying with Juan, yee-haw\n";
	m_Boredom -= fun;
	m_Knowledge -= 1;
	cout << "Juan's boredom level: " << m_Boredom << endl<<endl;
	cout << "OH NO! Juan is having so much fun he is starting to forget things!\nJuan's knowledge level: " << m_Knowledge << endl;
	PassTime();

}
void Critter::Study(int know, int fun) {
	cout << "\nStudying with Juan, zzz\n";
	m_Boredom += 3;
	m_Knowledge += know;
	cout << "Juan does not like studying.\nJuan: Study is for nerds!\nJuan's boredom level: " << m_Boredom << endl<<endl;
	cout << "Juan is getting smorter (not a typo btw)\nJuan's knowledge level: " << m_Knowledge << endl;
	PassTime();
}

void Critter::PassTime(int time) { //mentre el jugador sigui jugant, juan comença a avorir-se, passar gana i tornar-se deficient
	m_Boredom += time;
	m_Hunger += time;
	m_Knowledge -= time;
}