#pragma once
#include<iostream>
using namespace std;
class room_
{
	char* name;
	int area;

public:
	room_();
	room_(const char* name,int area);
	~room_();
	void info();
	char* getName();
	int getArea();
	void setName(const char* name);
	void setArea(int area);
	
};

