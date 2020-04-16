#include "Level.h"

Level::Level(std::vector<std::vector<char>> levelVector)
{
	_levelVector = levelVector;
}

void Level::editLevel(std::string entityName, char character, std::pair<int, int> coordinates)
{
	_levelVector[_entityPositions[entityName].first][_entityPositions[entityName].second] = '-';

	_levelVector[coordinates.first][coordinates.second] = character;

	setEntityPosition(entityName, coordinates);
}

std::pair<int, int> Level::getEntityPosition(std::string entityName)
{
	return _entityPositions[entityName];
}

void Level::setEntityPosition(std::string entityName, std::pair<int, int> coordinates)
{
	_entityPositions[entityName] = coordinates;
}