#include "gtest/gtest.h"
#include "../src/ATwoDArray/ATwoDArray.h"
#include "../src/VTwoDArray/VTwoDArray.h"
#include "../src/STwoDArray/STwoDArray.h"

#include <string>

TEST(ATwoDArrayTest, Insert) {
    ATwoDArray<int> *arr_int = new ATwoDArray<int>(15,15,0);
    ATwoDArray<double> *arr_doub = new ATwoDArray<double>(7,7,0);
    ATwoDArray<std::string> *arr_string = new ATwoDArray<std::string>(3,3," ");
    
    arr_int->insert(2,2,12);
    EXPECT_EQ(12, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    EXPECT_EQ(15, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    EXPECT_EQ(-1, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    EXPECT_EQ(2.2, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    EXPECT_EQ(3, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    EXPECT_EQ(1, arr_doub->access(3,5));

    arr_string->insert(1,2,std::string("hi"));
    EXPECT_EQ("hi", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    EXPECT_EQ("what", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    EXPECT_EQ("world", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(ATwoDArrayTest, Access) {
    ATwoDArray<int> *arr_int = new ATwoDArray<int>(15,15,0);
    ATwoDArray<double> *arr_doub = new ATwoDArray<double>(7,7,0);
    ATwoDArray<std::string> *arr_string = new ATwoDArray<std::string>(3,3," ");

    arr_int->insert(2,2,12);
    EXPECT_EQ(12, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    EXPECT_EQ(15, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    EXPECT_EQ(-1, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    EXPECT_EQ(2.2, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    EXPECT_EQ(3, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    EXPECT_EQ(1, arr_doub->access(3,5));

    arr_string->insert(1,2,"hi");
    EXPECT_EQ("hi", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    EXPECT_EQ("what", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    EXPECT_EQ("world", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(ATwoDArrayTest, Remove) {
    ATwoDArray<int> *arr_int = new ATwoDArray<int>(15,15,0);
    ATwoDArray<double> *arr_doub = new ATwoDArray<double>(7,7,0);
    ATwoDArray<std::string> *arr_string = new ATwoDArray<std::string>(3,3," ");

    arr_int->insert(2,2,12);
    arr_int->remove(2,2);
    EXPECT_EQ(0, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    arr_int->remove(3,2);
    EXPECT_EQ(0, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    arr_int->remove(2,2);
    EXPECT_EQ(0, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    arr_doub->remove(1,1);
    EXPECT_EQ(0, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    arr_doub->remove(6,4);
    EXPECT_EQ(0, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    arr_doub->remove(3,5);
    EXPECT_EQ(0, arr_doub->access(3,5));

    arr_string->insert(1,2,"hi");
    arr_string->remove(1,2);
    EXPECT_EQ(" ", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    arr_string->remove(2,2);
    EXPECT_EQ(" ", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    arr_string->remove(0,0);
    EXPECT_EQ(" ", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(ATwoDArrayTest, GetNumRows) {
    ATwoDArray<int> *arr_int = new ATwoDArray<int>(15,15,0);
    ATwoDArray<double> *arr_doub = new ATwoDArray<double>(7,7,0);
    ATwoDArray<std::string> *arr_string = new ATwoDArray<std::string>(3,3," ");

    EXPECT_EQ(15, arr_int->getNumRows());
    EXPECT_EQ(7, arr_doub->getNumRows());
    EXPECT_EQ(3, arr_string->getNumRows());

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(ATwoDArrayTest, GetNumCols) {
    ATwoDArray<int> *arr_int = new ATwoDArray<int>(15,15,0);
    ATwoDArray<double> *arr_doub = new ATwoDArray<double>(7,7,0);
    ATwoDArray<std::string> *arr_string = new ATwoDArray<std::string>(3,3," ");

    EXPECT_EQ(15, arr_int->getNumCols());
    EXPECT_EQ(7, arr_doub->getNumCols());
    EXPECT_EQ(3, arr_string->getNumCols());

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(VTwoDArrayTest, Insert) {
    VTwoDArray<int> *arr_int = new VTwoDArray<int>(15,15,0);
    VTwoDArray<double> *arr_doub = new VTwoDArray<double>(7,7,0);
    VTwoDArray<std::string> *arr_string = new VTwoDArray<std::string>(3,3," ");
    
    arr_int->insert(2,2,12);
    EXPECT_EQ(12, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    EXPECT_EQ(15, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    EXPECT_EQ(-1, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    EXPECT_EQ(2.2, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    EXPECT_EQ(3, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    EXPECT_EQ(1, arr_doub->access(3,5));

    arr_string->insert(1,2,std::string("hi"));
    EXPECT_EQ("hi", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    EXPECT_EQ("what", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    EXPECT_EQ("world", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(VTwoDArrayTest, Access) {
    VTwoDArray<int> *arr_int = new VTwoDArray<int>(15,15,0);
    VTwoDArray<double> *arr_doub = new VTwoDArray<double>(7,7,0);
    VTwoDArray<std::string> *arr_string = new VTwoDArray<std::string>(3,3," ");

    arr_int->insert(2,2,12);
    EXPECT_EQ(12, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    EXPECT_EQ(15, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    EXPECT_EQ(-1, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    EXPECT_EQ(2.2, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    EXPECT_EQ(3, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    EXPECT_EQ(1, arr_doub->access(3,5));

    arr_string->insert(1,2,"hi");
    EXPECT_EQ("hi", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    EXPECT_EQ("what", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    EXPECT_EQ("world", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(VTwoDArrayTest, Remove) {
    VTwoDArray<int> *arr_int = new VTwoDArray<int>(15,15,0);
    VTwoDArray<double> *arr_doub = new VTwoDArray<double>(7,7,0);
    VTwoDArray<std::string> *arr_string = new VTwoDArray<std::string>(3,3," ");

    arr_int->insert(2,2,12);
    arr_int->remove(2,2);
    EXPECT_EQ(0, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    arr_int->remove(3,2);
    EXPECT_EQ(0, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    arr_int->remove(2,2);
    EXPECT_EQ(0, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    arr_doub->remove(1,1);
    EXPECT_EQ(0, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    arr_doub->remove(6,4);
    EXPECT_EQ(0, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    arr_doub->remove(3,5);
    EXPECT_EQ(0, arr_doub->access(3,5));

    arr_string->insert(1,2,"hi");
    arr_string->remove(1,2);
    EXPECT_EQ(" ", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    arr_string->remove(2,2);
    EXPECT_EQ(" ", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    arr_string->remove(0,0);
    EXPECT_EQ(" ", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(VTwoDArrayTest, GetNumRows) {
    VTwoDArray<int> *arr_int = new VTwoDArray<int>(15,15,0);
    VTwoDArray<double> *arr_doub = new VTwoDArray<double>(7,7,0);
    VTwoDArray<std::string> *arr_string = new VTwoDArray<std::string>(3,3," ");

    EXPECT_EQ(15, arr_int->getNumRows());
    EXPECT_EQ(7, arr_doub->getNumRows());
    EXPECT_EQ(3, arr_string->getNumRows());

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(VTwoDArrayTest, GetNumCols) {
    VTwoDArray<int> *arr_int = new VTwoDArray<int>(15,15,0);
    VTwoDArray<double> *arr_doub = new VTwoDArray<double>(7,7,0);
    VTwoDArray<std::string> *arr_string = new VTwoDArray<std::string>(3,3," ");

    EXPECT_EQ(15, arr_int->getNumCols());
    EXPECT_EQ(7, arr_doub->getNumCols());
    EXPECT_EQ(3, arr_string->getNumCols());

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(STwoDArrayTest, Insert) {
    STwoDArray<int> *arr_int = new STwoDArray<int>(15,15,0);
    STwoDArray<double> *arr_doub = new STwoDArray<double>(7,7,0);
    STwoDArray<std::string> *arr_string = new STwoDArray<std::string>(3,3," ");
    
    arr_int->insert(2,2,12);
    EXPECT_EQ(12, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    EXPECT_EQ(15, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    EXPECT_EQ(-1, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    EXPECT_EQ(2.2, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    EXPECT_EQ(3, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    EXPECT_EQ(1, arr_doub->access(3,5));

    arr_string->insert(1,2,std::string("hi"));
    EXPECT_EQ("hi", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    EXPECT_EQ("what", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    EXPECT_EQ("world", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(STwoDArrayTest, Access) {
    STwoDArray<int> *arr_int = new STwoDArray<int>(15,15,0);
    STwoDArray<double> *arr_doub = new STwoDArray<double>(7,7,0);
    STwoDArray<std::string> *arr_string = new STwoDArray<std::string>(3,3," ");

    arr_int->insert(2,2,12);
    EXPECT_EQ(12, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    EXPECT_EQ(15, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    EXPECT_EQ(-1, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    EXPECT_EQ(2.2, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    EXPECT_EQ(3, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    EXPECT_EQ(1, arr_doub->access(3,5));

    arr_string->insert(1,2,"hi");
    EXPECT_EQ("hi", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    EXPECT_EQ("what", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    EXPECT_EQ("world", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(STwoDArrayTest, Remove) {
    STwoDArray<int> *arr_int = new STwoDArray<int>(15,15,0);
    STwoDArray<double> *arr_doub = new STwoDArray<double>(7,7,0);
    STwoDArray<std::string> *arr_string = new STwoDArray<std::string>(3,3," ");

    arr_int->insert(2,2,12);
    arr_int->remove(2,2);
    EXPECT_EQ(0, arr_int->access(2,2));
    arr_int->insert(3,2,15);
    arr_int->remove(3,2);
    EXPECT_EQ(0, arr_int->access(3,2));
    arr_int->insert(2,2,-1);
    arr_int->remove(2,2);
    EXPECT_EQ(0, arr_int->access(2,2));

    arr_doub->insert(1,1,2.2);
    arr_doub->remove(1,1);
    EXPECT_EQ(0, arr_doub->access(1,1));
    arr_doub->insert(6,4,3);
    arr_doub->remove(6,4);
    EXPECT_EQ(0, arr_doub->access(6,4));
    arr_doub->insert(3,5,1);
    arr_doub->remove(3,5);
    EXPECT_EQ(0, arr_doub->access(3,5));

    arr_string->insert(1,2,"hi");
    arr_string->remove(1,2);
    EXPECT_EQ(" ", arr_string->access(1,2));
    arr_string->insert(2,2,"what");
    arr_string->remove(2,2);
    EXPECT_EQ(" ", arr_string->access(2,2));
    arr_string->insert(0,0,"world");
    arr_string->remove(0,0);
    EXPECT_EQ(" ", arr_string->access(0,0));

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(STwoDArrayTest, GetNumRows) {
    STwoDArray<int> *arr_int = new STwoDArray<int>(15,15,0);
    STwoDArray<double> *arr_doub = new STwoDArray<double>(7,7,0);
    STwoDArray<std::string> *arr_string = new STwoDArray<std::string>(3,3," ");

    EXPECT_EQ(15, arr_int->getNumRows());
    EXPECT_EQ(7, arr_doub->getNumRows());
    EXPECT_EQ(3, arr_string->getNumRows());

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}

TEST(STwoDArrayTest, GetNumCols) {
    STwoDArray<int> *arr_int = new STwoDArray<int>(15,15,0);
    STwoDArray<double> *arr_doub = new STwoDArray<double>(7,7,0);
    STwoDArray<std::string> *arr_string = new STwoDArray<std::string>(3,3," ");

    EXPECT_EQ(15, arr_int->getNumCols());
    EXPECT_EQ(7, arr_doub->getNumCols());
    EXPECT_EQ(3, arr_string->getNumCols());

    delete arr_int;
    delete arr_doub;
    delete arr_string;
}
