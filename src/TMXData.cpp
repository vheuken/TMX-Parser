#include "TMXData.h"

TMXData::TMXData()
{

}

TMXData::TMXData(rapidxml::xml_node<char> * dataNode)
{
	processData(dataNode);
}

void TMXData::processData(rapidxml::xml_node<char> * dataNode)
{

}

int TMXData::getNumOfTiles() const
{
	return tileList.size();
}