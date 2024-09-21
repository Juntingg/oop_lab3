//Name: Caroline Su
//Student# : A01369603

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main(), put this in one cpp file
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("Pop an empty stack then add values", "testTag2")
{
    MyStack tester;
    tester.pop();
    tester.push(3);

    REQUIRE(tester.top() == 3);
}

TEST_CASE("Push more than maximum stack amount, check value of top of stack", "testTag3")
{
    MyStack tester;
    for (int i = 0; i < (MyStack::SIZE + 3); ++i) {
        tester.push(i);
    }
    REQUIRE(tester.top()  == 9);
}

TEST_CASE("Check top value on empty stack", "testTag4")
{
    MyStack tester;
    REQUIRE(tester.top()  == -1);
}

TEST_CASE("Push X values pop Y values, check top for expected value", "testTag5")
{
    MyStack tester;
    tester.push(1);
    tester.push(2);
    tester.push(3);
    tester.pop();
    REQUIRE(tester.top()  == 2);
}

TEST_CASE("Push exactly 10 values, check if stack is full and top value is expected value", "testTag6")
{
    MyStack tester;
    for (int i = 0; i < MyStack::SIZE; ++i) {
        tester.push(i);
    }
    REQUIRE(tester.top()  == 9);
    REQUIRE(tester.full() == true);
}


TEST_CASE("Push one value to stack", "testTag7")
{
    MyStack tester;
    tester.push(5);

    REQUIRE(tester.full() == false);
    REQUIRE(tester.empty() == false);
    REQUIRE(tester.top() == 5);
}





