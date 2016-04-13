#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TESTS
#include <boost/test/unit_test.hpp>
#include <boost/test/framework.hpp>
#include <boost/test/results_collector.hpp>
#include <vector>
#include <cmath>
#include <cstdio>
#include "collections.cpp"
#include "arrays.cpp"
#include "mathematic.cpp"



using namespace std;
using boost::unit_test::results_collector;
using boost::unit_test::framework::current_test_case;
using boost::unit_test::test_case;
using boost::unit_test::test_results;

BOOST_AUTO_TEST_SUITE(MatematykaSuite)
   
BOOST_AUTO_TEST_CASE(testAdd){
    BOOST_CHECK_EQUAL(add(2,2),4);
}
BOOST_AUTO_TEST_CASE(testMultiply){
    BOOST_CHECK_EQUAL(multiply(2,2), 4);
}
BOOST_AUTO_TEST_CASE(testPower){
    BOOST_CHECK_EQUAL(power(3,3), 27);
}
BOOST_AUTO_TEST_CASE(testDivide){
    BOOST_CHECK_EQUAL(divide(3,3),1);
}
BOOST_AUTO_TEST_CASE(testSubstract){
    BOOST_CHECK_EQUAL(substract(3,3),0);
}
BOOST_AUTO_TEST_CASE(testIsPrime){
    BOOST_CHECK_EQUAL(isPrime(5),true);
}
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(ArraysSuite)
    BOOST_AUTO_TEST_CASE(testSortArrays){
        int tablica[5] = {5,4,3,2,1};
        sortArray(tablica,5);
        int tablica_wyn[5] = {1,2,3,4,5};
        BOOST_CHECK_EQUAL_COLLECTIONS(tablica, tablica+5,tablica_wyn, tablica_wyn+5);
    }
BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(CollectionsSuite)
    BOOST_AUTO_TEST_CASE(testReverseVector){
        vector<int> daneWe;
        for(int i=0;i<50;i++){
            daneWe.push_back(i);
        }
        vector<int> daneWy(reverseVector(daneWe));
        for(int i=0;i<daneWe.size();i++){
            daneWe.at(i)=50-i-1;
        }
        BOOST_CHECK_EQUAL_COLLECTIONS(daneWy.begin(), daneWy.end(), daneWe.begin(), daneWe.end());
    }
BOOST_AUTO_TEST_CASE(testGet3FirstElementFromVector){
    vector<int> daneWe;
    daneWe.push_back(10);
    daneWe.push_back(5);
    daneWe.push_back(32);
    daneWe.push_back(45);
    daneWe.push_back(25);
    daneWe.push_back(12);

    vector<int> daneWy(get3FirstElementFromVector(daneWe));
    BOOST_CHECK_EQUAL_COLLECTIONS(daneWy.begin(), daneWy.end(),daneWe.begin(), daneWe.begin()+3);
}

BOOST_AUTO_TEST_CASE(testAddTwoVectors){
    vector<vector<int> > daneWe1;
    vector<int> dane1;
    vector<int> dane2;

    dane1.push_back(55);
    dane1.push_back(21);
    dane1.push_back(45);

    dane2.push_back(77);
    dane2.push_back(88);
    dane2.push_back(99);	

    daneWe1.push_back(dane1);
    daneWe1.push_back(dane2);

    vector<int> daneWy(addTwoVectors(daneWe1));

    vector<int> daneWe2(dane1);
    daneWe2.push_back(77);
    daneWe2.push_back(88);
    daneWe2.push_back(99);

    BOOST_CHECK_EQUAL_COLLECTIONS(daneWy.begin(), daneWy.end(), daneWe2.begin(), daneWe2.end());	
}
BOOST_AUTO_TEST_SUITE_END()
