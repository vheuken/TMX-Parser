#include "TMXLayer.h"

TMXLayer::TMXLayer(rapidxml::xml_node<char> * layerNode)
{
	processAttributes(layerNode);
}

void TMXLayer::processAttributes(rapidxml::xml_node<char> * layerNode)
{
	name = layerNode->first_attribute("name")->value();
	width = atoi(layerNode->first_attribute("width")->value());
	height = atoi(layerNode->first_attribute("height")->value());
}

std::string TMXLayer::getName() const
{
	return name;
}

int TMXLayer::getWidth() const
{
	return width;
}

int TMXLayer::getHeight() const
{
	return height;
}
