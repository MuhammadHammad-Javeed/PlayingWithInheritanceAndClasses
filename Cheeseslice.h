#pragma once
#include<iostream>
using namespace std;
class Cheeseslice
{
public:
	friend ostream& operator << (ostream& out, Cheeseslice&);
	void print();
};