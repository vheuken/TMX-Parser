#ifndef TMXLAYER_H
#define TMXLAYER_H

#include <string>
#include "rapidxml-1.13/rapidxml.hpp"

class TMXLayer
{
public:
	TMXLayer(rapidxml::xml_node<char> * layerNode);

	std::string getName() const;

private:
	std::string name;

	void processAttributes(rapidxml::xml_node<char> * layerNode);
};

#endif // TMXLAYER_H