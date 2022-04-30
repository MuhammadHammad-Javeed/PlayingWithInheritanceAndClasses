#pragma once
#include"Sandwich.h"
#include<iostream>
using namespace std;
class Lunch
{
	friend ostream& operator << (ostream& out, Lunch&);
	void print();
};

