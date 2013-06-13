#ifndef TMXMAP_H
#define TMXMAP_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstring>
#include "rapidxml-1.13/rapidxml.hpp"
#include "TMXLayer.h"

class TMXMap 
{
public:
    TMXMap(std::string pathToMapFile);

	std::string getVersion() const;
	std::string getOrientation() const;

	int getWidth() const;
	int getHeight() const;

	int getTileWidth() const;
	int getTileHeight() const;

	TMXLayer getLayer(int layerNum) const;

private:
	std::string pathToMapFile;

	std::string version;

	// Supports "orthogonal", "isometric", 
	// and "staggered" orientations
	std::string orientation; 

	// width and height are measured in tiles
	int width, height;

	int tileWidth, tileHeight;

	// Can contain: properties, tileset, objectgroup, 
	std::vector<TMXLayer> layerList;

	void processMap();
	void processMapAttributes(rapidxml::xml_node<char> * mapNode);
	void processMapLayers(rapidxml::xml_node<char> * mapNode);

};

#endif // TMXMAP_H