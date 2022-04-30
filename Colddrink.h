#pragma once
#include <iostream>
using namespace std;
class Colddrink
{
	friend ostream& operator << (ostream& out, Colddrink&);
	void print();
};