#include "Island.cpp"

#pragma once
class Archipelago
{
public:
	void setAmountOfIslands(int amountOfIslands) 
	{
		_amountOfIslands = amountOfIslands;
	}

	void addIsland(Island island) 
	{
		_archipelagoIslands.push_back(island);
	}



private:
	int _amountOfIslands; // Amount of islands
	std::vector <Island> _archipelagoIslands; 
};

