#pragma once
#include "Sandwich.h"
#include<iostream>
using namespace std;
class BreadSlices
{
	friend ostream& operator << (ostream& out, BreadSlices&);
	void print();
};

