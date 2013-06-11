#include "TMXMap.h"


TMXMap::TMXMap(std::string pathToMapFile)
{
	this->pathToMapFile = pathToMapFile;

	processMap();
}

void TMXMap::processMap()
{

}

std::string TMXMap::getVersion() const
{
	return version;
}

std::string TMXMap::getOrientation() const
{
	return orientation;
}

int TMXMap::getWidth() const
{
	return width;
}

int TMXMap::getHeight() const
{
	return height;
}

int TMXMap::getTileWidth() const
{
	return tileWidth;
}

int TMXMap::getTileHeight() const
{
	return tileHeight;
}
