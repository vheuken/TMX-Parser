#include "TMXLayer.h"

TMXLayer::TMXLayer(rapidxml::xml_node<char> * layerNode)
{
	processAttributes(layerNode);
}

void TMXLayer::processAttributes(rapidxml::xml_node<char> * layerNode)
{
	name = layerNode->first_attribute("name")->value();
}


std::string TMXLayer::getName() const
{
	return name;
}