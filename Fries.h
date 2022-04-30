#pragma once
#include<iostream>
using namespace std;
class Fries
{
	friend ostream& operator << (ostream& out, Fries&);
	void print();
};

