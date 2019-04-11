#pragma once
#include"room_.h"
class flat_
{
	int cost;
	int num;
	room_* rooms;
public:
	flat_(int cost,int num);
	flat_(const flat_ & obj);
	~flat_();
	void info();
	int sumArea();
	bool type(const flat_ &obj);
	bool area(flat_ obj);
	//bool cost(const flat_ &obj);
};


