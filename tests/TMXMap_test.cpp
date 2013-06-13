#define BOOST_TEST_MAIN
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>
#include "../TMXMap.h"

BOOST_AUTO_TEST_CASE( my_test ) {
	TMXMap testMap("test_map.tmx");

	BOOST_ASSERT(testMap.getVersion().compare("1.0") == 0);

	BOOST_ASSERT(testMap.getOrientation().compare("orthogonal") == 0);

	BOOST_CHECK_EQUAL(testMap.getWidth(), 50);

	BOOST_CHECK_EQUAL(testMap.getHeight(), 75);

	BOOST_CHECK_EQUAL(testMap.getTileWidth(), 32);

	BOOST_CHECK_EQUAL(testMap.getTileHeight(), 32);

}