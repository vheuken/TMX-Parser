#ifndef TMXLAYER_H
#define TMXLAYER_H

#include <string>
#include <cstring>
#include "rapidxml-1.13/rapidxml.hpp"
#include "TMXData.h"

class TMXLayer
{
public:
	TMXLayer(rapidxml::xml_node<char> * layerNode);

	std::string getName() const;

	int getWidth() const;
	int getHeight() const;

	TMXData getData() const;

private:
	std::string name;

	int width, height;

	TMXData data;

	void processAttributes(rapidxml::xml_node<char> * layerNode);
};

#endif // TMXLAYER_H