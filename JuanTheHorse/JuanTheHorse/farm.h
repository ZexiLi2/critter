#pragma once
#include "Critter.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Farm
{
public:
	Farm(int space = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;

private: vector<Critter> m_Critters;
};

