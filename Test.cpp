#include "doctest.h"
#include "OrgChart.hpp"
#include <array>

using std::array;
using namespace ariel;



TEST_CASE("CHECK Sizes")
{
    OrgChart org;
    org.add_root("Father").add_sub("Father","son_one")
    .add_sub("Father","son_two")
    .add_sub("Father","son_three")
    .add_sub("son_one","grand_child_one")
    .add_sub("son_two","grand_child_two")
    .add_sub("son_three","grand_child_three");

    CHECK_EQ(org->size(),7);



    OrgChart org1;
     org1.add_root("Father").add_sub("Father","son_one")
    .add_sub("Father","son_two")
    .add_sub("Father","son_three");

    CHECK_EQ(org1->size(),4);


    OrgChart org2;
     org1.add_root("Mother").add_sub("Mother","son_one");
    
    CHECK_EQ(org2->size(),2);
   

    OrgChart org3;
     org1.add_root("Mother").add_sub("Mother","son_one")
     .add_sub("son_one","grand_child");
    
    CHECK_EQ(org2->size(),3);

    OrgChart org4;
     org1.add_root("Boss").add_sub("Boss","Employee1")
     .add_sub("Boss","Employee2")
     .add_sub("Boss","Employee3");
    
    CHECK_EQ(org2->size(),4);

    OrgChart org5;
     org1.add_root("Father").add_sub("Father","son")
    .add_sub("Father","girl")
    .add_sub("Father","grandchild");

    CHECK_EQ(org5->size(),4);

    OrgChart org6;
     org1.add_root("Mother").add_sub("Mother","son_one")
    .add_sub("Father","son_two")
    .add_sub("Father","son_three");

    CHECK_EQ(org6->size(),4);

    OrgChart org7;
     org1.add_root("Father").add_sub("Father","son_one")
    .add_sub("Father","son_two")
    .add_sub("Father","son_three");

    CHECK_EQ(org7->size(),5);

    

}

TEST_CASE("Root doesn't exist")
{
    OrgChart og;
    CHECK_THROWS(og.add_sub("shalom","Benny"));
    CHECK_THROWS(og.add_sub("shalom","Benny").add_sub("shalom","itzik"));
    CHECK_THROWS(og.add_sub("shalom","Benny").add_sub("Benny","Daniel"));
    CHECK_THROWS(og.add_sub("sapir","moshe"));
    CHECK_THROWS(og.add_sub("Itzik","Daniel"));
    CHECK_THROWS(og.add_sub("Ben","Dana").add_sub("Zik","Rotem"));
    CHECK_THROWS(og.add_sub("sapir","ron").add_sub("raz","victor"));
    CHECK_THROWS(og.add_sub("sapir","moshe"));
    CHECK_THROWS(og.add_sub("nizri","daniela"));
    CHECK_THROWS(og.add_sub("or","victor").add_sub("ariel","sinai"));
    CHECK_THROWS(og.add_sub("Gabriel","Amos").add_sub("Ran","Amit"));
    CHECK_THROWS(og.add_sub("sarit","shir"));
    CHECK_THROWS(og.add_sub("amit","amir"));
    CHECK_THROWS(og.add_sub("nitzan","shiran").add_sub("timon","pumba"));
    CHECK_THROWS(og.add_sub("katy","perry").add_sub("what","who"));
  
}

