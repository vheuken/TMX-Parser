#define BOOST_TEST_MAIN
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#define BOOST_TEST_MODULE TMXMap
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( my_test ) {
    BOOST_CHECK_EQUAL(1, 1);
}