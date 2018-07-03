#define BOOST_TEST_MODULE TestGrasp
#include <boost/test/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>

int add (int i, int j) {return i + j; }

#include "model.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(simple_test)

BOOST_AUTO_TEST_CASE(simple_test1){
	BOOST_CHECK( add( 2,2 ) == 4 );
}

BOOST_AUTO_TEST_SUITE_END()