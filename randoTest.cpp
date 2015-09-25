/*
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
    FUNCTIONS WE NEED TO TEST:

    bool shouldWorry(bool,bool,bool);
    bool isDivisbleBy(int,int);
    bool isPrime(int);
    int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
    protected:
        RandoTest(){} //constructor runs before each test
        virtual ~RandoTest(){} //destructor cleans up after tests
        virtual void SetUp(){} //sets up before each test (after constructor)
        virtual void TearDown(){} //clean up after each test, (before destructor) 
};

// shouldWorry tests
TEST(RandoTest, ChildrenSmile111) {
    Rando rando;
    ASSERT_TRUE( rando.shouldWorry(true ,true ,true ) );
}

TEST(RandoTest, ChildrenSmile110) {
    Rando rando;
    ASSERT_FALSE(rando.shouldWorry(true ,true ,false) );
}
TEST(RandoTest, ChildrenSmile101) {
    Rando rando;
    ASSERT_FALSE(rando.shouldWorry(true ,false,true ) );
}
TEST(RandoTest, ChildrenSmile100) {
    Rando rando;
    ASSERT_TRUE( rando.shouldWorry(true ,false,false) );
}
TEST(RandoTest, ChildrenSmile011) {
    Rando rando;
    ASSERT_FALSE(rando.shouldWorry(false,true ,true ) );
}
TEST(RandoTest, ChildrenSmile010) {
    Rando rando;
    ASSERT_TRUE( rando.shouldWorry(false,true ,false) );
}
TEST(RandoTest, ChildrenSmile001) {
    Rando rando;
    ASSERT_TRUE( rando.shouldWorry(false,false,true ) );
}
TEST(RandoTest, ChildrenSmile000) {
    Rando rando;
    ASSERT_FALSE(rando.shouldWorry(false,false,false) );
}

// nearestToZero tests
TEST(RandoTest, nearestToZeroX00) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(0,0) == 0 );
}
TEST(RandoTest, nearestToZeroX10) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(1,0) == 1 );
}
TEST(RandoTest, nearestToZeroX01) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(0,1) == 1 );
}
TEST(RandoTest, nearestToZeroXn10) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(-1,0) == -1 );
}
TEST(RandoTest, nearestToZeroX0n1) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(0,-1) == -1 );
}
TEST(RandoTest, nearestToZeroX32) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(3,2) == 2 );
}
TEST(RandoTest, nearestToZeroX23) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(2,3) == 2 );
}
TEST(RandoTest, nearestToZeroXn23) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(-2,3) == -2 );
}
TEST(RandoTest, nearestToZeroX2n3) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(2,-3) == 2 );
}
TEST(RandoTest, nearestToZeroXn32) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(-3,2) == 2 );
}
TEST(RandoTest, nearestToZeroX3n2) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(3,-2) == -2 );
}
TEST(RandoTest, nearestToZeroXn3n2) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(-3,-2) == -2 );
}
TEST(RandoTest, nearestToZeroXn2n3) {
    Rando rando;
    ASSERT_TRUE( rando.nearestToZero(-2,-3) == -2 );
}
