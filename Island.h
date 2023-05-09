#include <vector>
#include <iostream>

#pragma once
class Island
{
public:
	void setCoordinates()
	{
		double x, y;
		int count;
		std::cout << "input amount of coordinates: ";
		std::cin >> count;
		while (count < 3) 
		{
			std::cout << "it is not an island. try again" << std::endl;
			std::cout << "input amount of coordinates: ";
			std::cin >> count;
		}
		for (int i = 0; i < count; i++)
		{
			std::cout << "input coordinates x, y" << std::endl;
			std::cin >> x >> y;
			_coordinates.push_back(std::make_pair(x, y));
		}
		
	}

	std::pair<double, double> makeEdge(int i) 
	{
		double vecX;
		double vecY;
		if (i == _coordinates.size()-1) {
			vecX = _coordinates[0].first - _coordinates[i].first;
			vecY = _coordinates[0].second - _coordinates[i].second;
		}
		else
		{
			vecX = _coordinates[i + 1].first - _coordinates[i].first;
			vecY = _coordinates[i + 1].second - _coordinates[i].second;
		}
		std::pair<double, double> vecEdge = { vecX,vecY };
		return vecEdge;
	}

	void setEdges() 
	{
		for (int i = 0; i < _coordinates.size(); i++)
		{
			_edges.push_back(makeEdge(i));
		}

	}

	void makeBridges() 
	{
		
	}

	void showEdges() 
	{
		for (int i = 0; i < _edges.size(); i++)
		{
			std::cout << _edges[i].first << ", " << _edges[i].second << std::endl;
		}
	}
private:
	std::vector <std::pair<double, double>> _coordinates; // Ñoordinates of the vertices of polygons (islands)
	std::vector <std::pair<double, double>> _edges; // Vectors of the edges of polygons
	std::vector <double> _allBridges; // Length of bridge from current island to every other
};

