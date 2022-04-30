#pragma once
#include<iostream>
using namespace std;
class Bread
{

	friend ostream& operator << (ostream& out, Bread&);
     void print();
};

