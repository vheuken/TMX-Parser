#ifndef TMXMAP_H
#define TMXMAP_H

#include <string>

#include "rapidxml-1.13/rapidxml.hpp"

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


private:
	std::string pathToMapFile;

	std::string version;

	// Supports "orthogonal", "isometric", 
	// and "staggered" orientations
	std::string orientation; 

	// width and height are measured in tiles
	int width, height;

	int tileWidth, tileHeight;

	// Can contain: properties, tileset, layer, objectgroup, imagelayer

	void processMap();

};

#endif // TMXMAP_H