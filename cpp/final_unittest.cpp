#include <limits.h>
#include "final.h"
#include "classroom.h"
#include "floor.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "gtest/gtest.h"

namespace
{
/*
TEST(finalTest1, classroomTest0)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    EXPECT_EQ(3, Classroom::no);    
}

TEST(finalTest, classroomTest1)
{
    Classroom c("411", 60);
    EXPECT_EQ(60, c.noOfSeats());   
} 

TEST(finalTest, classroomTest2)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    EXPECT_EQ(a->getLeft(), c);
}

TEST(finalTest, classroomTest3)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4[1], b);
}

TEST(finalTest, floorTest4)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4[-1], c);
}

TEST(finalTest, floorTest5)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4[16], b);
}

TEST(finalTest, floorTest6)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    EXPECT_EQ(f4.noOfSeats(), 90);
}
TEST(finalTest, floorTest7)
{
    auto a = std::make_shared<Classroom>("411", 40);
    auto b = std::make_shared<Classroom>("413", 30);
    auto c = std::make_shared<Classroom>("415", 20);
    a->setLeft(c);
    c->setRight(a);
    b->setLeft(a);
    a->setRight(b);
    c->setLeft(b);
    b->setRight(c);
    Floor f4{"4", a};
    f4.moveSeats(0, 1, 10);
    EXPECT_EQ(f4[0]->noOfSeats(), 30);
}
*/
}
