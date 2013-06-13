#define BOOST_TEST_MAIN
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>
#include "../src/TMXMap.h"
#include "../src/TMXLayer.h"

BOOST_AUTO_TEST_CASE( my_test ) {
	TMXMap testMap("test_map.tmx");

	BOOST_ASSERT(testMap.getVersion() == "1.0");

	BOOST_ASSERT(testMap.getOrientation() == "orthogonal");

	BOOST_CHECK_EQUAL(testMap.getWidth(), 50);

	BOOST_CHECK_EQUAL(testMap.getHeight(), 75);

	BOOST_CHECK_EQUAL(testMap.getTileWidth(), 32);

	BOOST_CHECK_EQUAL(testMap.getTileHeight(), 32);

	BOOST_ASSERT(testMap.getLayer(0).getName() == "Tile Layer 1");
	BOOST_ASSERT(testMap.getLayer(1).getName() == "Tile Layer 2");
	BOOST_ASSERT(testMap.getLayer(2).getName() == "");

	BOOST_CHECK_EQUAL(testMap.getLayer(0).getHeight(), 75);
	BOOST_CHECK_EQUAL(testMap.getLayer(0).getWidth(), 50);

	/*TMXLayer testLayer = testMap.getLayer(0);
	TMXData testLayerData = testLayer.getData();

	BOOST_CHECK_EQUAL(testLayerData.getNumOfTiles(), 0);*/
}