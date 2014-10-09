#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE helloworld
#include <boost/test/unit_test.hpp>

void fun() { throw std::runtime_error(""); }

BOOST_AUTO_TEST_CASE(what)
{
    // BOOST_FAIL("hello");

    BOOST_CHECK(0 == 0);
    BOOST_CHECK_EQUAL(0,0);
    BOOST_CHECK_NE(1,0);
    BOOST_CHECK_THROW(fun(), std::exception);

    std::vector<int> ints{3,2,1};

    BOOST_REQUIRE_EQUAL(ints.size(), 3U);
    BOOST_CHECK_EQUAL(ints[1], 2);
}
