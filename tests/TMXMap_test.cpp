#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE TMXMap
#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( my_test ) {
    BOOST_CHECK_EQUAL(1, 1);
}
