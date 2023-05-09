#include "Archipelago.cpp"

void inputArchipelago(Archipelago archipelago)
{
	int amountOfIslands;
	std::cout << "input amount of islands: ";
	std::cin >> amountOfIslands;
	archipelago.setAmountOfIslands(amountOfIslands);
	Island island;
	for (int i = 0; i < amountOfIslands; i++)
	{
		island.setCoordinates();
		island.setEdges();
		island.showEdges();
		archipelago.addIsland(island);
	}

}

void main()
{
	Archipelago arch;
	inputArchipelago(arch);
}
