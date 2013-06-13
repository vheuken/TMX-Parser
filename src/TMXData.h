#ifndef TMXDATA_H
#define TMXDATA_H

#include <vector>
#include "rapidxml-1.13/rapidxml.hpp"
#include "TMXTile.h"

class TMXData
{
public:
	TMXData();
	TMXData(rapidxml::xml_node<char> * dataNode);

	void processData(rapidxml::xml_node<char> * dataNode);

	int getNumOfTiles() const;

private:
	std::vector<TMXTile> tileList;
};

#endif // TMXDATA_H