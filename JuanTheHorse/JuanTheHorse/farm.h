#pragma once
#include "Critter.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Farm
{
public:
	Farm(int space = 5);
	void Add();
	void RollCall() const;

private: vector<Critter> m_Critters;
};

