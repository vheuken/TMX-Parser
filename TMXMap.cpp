#include "TMXMap.h"

TMXMap::TMXMap(std::string pathToMapFile)
{
	this->pathToMapFile = pathToMapFile;

	processMap();
}

void TMXMap::processMap()
{
	rapidxml::xml_document<> tmxDoc;
	std::ifstream tmxFile (pathToMapFile.c_str());
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

	processMapAttributes(mapNode);

	processMapLayers(mapNode);

}

void TMXMap::processMapAttributes(rapidxml::xml_node<char> * mapNode)
{
	version = mapNode->first_attribute("version")->value();

	orientation = mapNode->first_attribute("orientation")->value();

	width = atoi(mapNode->first_attribute("width")->value());
	height = atoi(mapNode->first_attribute("height")->value());

	tileWidth = atoi(mapNode->first_attribute("tilewidth")->value());
	tileHeight = atoi(mapNode->first_attribute("tileheight")->value());

}

void TMXMap::processMapLayers(rapidxml::xml_node<char> * mapNode)
{
	rapidxml::xml_node<char> * currentLayerNode;

	currentLayerNode = mapNode->first_node("layer");
	
	while (currentLayerNode != NULL)
	{
		TMXLayer layer(currentLayerNode);

		layerList.push_back(layer);

		currentLayerNode = currentLayerNode->next_sibling("layer");
	}
}

TMXLayer TMXMap::getLayer(int layerNum) const
{
	return layerList.at(layerNum);
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
