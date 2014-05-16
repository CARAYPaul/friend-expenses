/*
 * DonorTest.cpp
 *
 *  Created on: 9 avr. 2014
 *      Author: YH
 */


#include <iostream>
#include <gtest/gtest.h>
#include "../../src/model/Person.hpp"
#include "../../src/model/Group.hpp"
#include "../../src/model/Donor.hpp"

using namespace std;
using namespace model;

Donor myDonor("Donor1", "0909", 200, "G1");

TEST(Donor, isInitOk)
{
	myDonor.setType();
	EXPECT_EQ("Donor1", myDonor.getName());
	EXPECT_EQ("0909", myDonor.getPhoneNumber());
	EXPECT_EQ(200, myDonor.getExpenses());
	EXPECT_EQ("G1", myDonor.getGroupName());
	EXPECT_EQ("Donor", myDonor.getType());
}

TEST(Donor, isPaybackOk)
{
	myDonor.operatePayback(100);
	EXPECT_EQ(0, myDonor.getPayback());
}


