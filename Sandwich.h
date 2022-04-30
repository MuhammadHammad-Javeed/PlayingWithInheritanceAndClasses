#pragma once
#include<iostream>
using namespace std;
class Sandwich
{
	friend ostream& operator << (ostream& out, Sandwich&);
	void print();
		
};

