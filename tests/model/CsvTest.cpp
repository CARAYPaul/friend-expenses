/*
 * CsvTest.cpp
 *
 *  Created on: 12 mai 2014
 *      Author: stephan
 */

#include <iostream>
#include <gtest/gtest.h>
#include "../../src/model/Person.hpp"
#include "../../src/model/Group.hpp"
#include "../../src/model/Donor.hpp"
#include "../../src/view/Arg.hpp"
#include "../../src/model/Csv.hpp"

using namespace std;
using namespace model;

Csv csv;
string myFileName;
string person = "toto,1234,200,Righi,Donor\n";
Person aPerson2;

TEST(Csv, isWriteOk)//
{
//	myFileName = "inputTest.csv";
//	csv.openCSV(myFileName);
//	csv.writeCSV(person);
//	csv.readCSV();/*
//	EXPECT_EQ("tot", aPerson2.getName());
//	EXPECT_EQ("1234", aPerson2.getPhoneNumber());
//	EXPECT_EQ(200, aPerson2.getExpenses());
//	EXPECT_EQ("Righi", aPerson2.getGroupName());
//	EXPECT_EQ("Person",aPerson2.getType());
}
