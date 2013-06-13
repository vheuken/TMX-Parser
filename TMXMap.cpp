#include "TMXMap.h"

TMXMap::TMXMap(std::string pathToMapFile)
{
	this->pathToMapFile = pathToMapFile;

	processMap();
}

void TMXMap::processMap()
{
	rapidxml::xml_document<> tmxDoc;
	std::ifstream tmxFile (pathToMapFile);
	std::stringstream buffer;

	buffer << tmxFile.rdbuf();

	tmxFile.close();

	std::string tmxFileContent(buffer.str());
	
	// safe-to-modify copy of tmxFileContent
	std::vector<char> tmxFileContentCopy( tmxFileContent.begin(), 
										  tmxFileContent.end() );
	tmxFileContentCopy.push_back('\0');

	tmxDoc.parse<rapidxml::parse_no_data_nodes>(&tmxFileContentCopy[0]);
	
	rapidxml::xml_node<char> * mapNode;
	
	mapNode = tmxDoc.first_node("map");

	version = mapNode->first_attribute("version")->value();

	orientation = mapNode->first_attribute("orientation")->value();

	width = atoi(mapNode->first_attribute("width")->value());
	height = atoi(mapNode->first_attribute("height")->value());

	tileWidth = atoi(mapNode->first_attribute("tilewidth")->value());
	tileHeight = atoi(mapNode->first_attribute("tileheight")->value());

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
