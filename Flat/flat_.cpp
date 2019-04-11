#include "flat_.h"



flat_::flat_(int cost = 0,int num = 0)
{
	this->cost = cost;
	this->num = num;
	this->rooms = new room_[this->num];
	for (size_t i = 0; i < num; i++)
	{
		char name_[30];
		int area_;
		cout << "Name:" << endl;
		cin >> name_;
		rooms[i].setName(name_);
		cout << "Area:" << endl;
		cin >> area_;
		rooms[i].setArea(area_);
	}
}

flat_::flat_(const flat_ & obj)
{
	this->cost = obj.cost;
	this->num = obj.num;
	this->rooms = new room_[this->num];
	for (size_t i = 0; i < num; i++)
	{
		this->rooms[i] = obj.rooms[i];
	}

}


flat_::~flat_()
{
	delete[] rooms;
}

void flat_::info()
{
	cout << this->cost << " Rooms:" << endl;
	for (size_t i = 0; i < num; i++)
	{
		rooms[i].info();
	}
}

int flat_::sumArea()
{
	int sum =0;
	for (size_t i = 0; i < this->num; i++)
	{
		sum += rooms[i].getArea();
	}
	return sum;
}

bool flat_::type(const flat_ & obj)
{
	if (this->num == obj.num)
	{
		return true;
	}
	else
		return false;
}

bool flat_::area(flat_ obj)
{
	if (this->sumArea() == obj.sumArea())
	{
		return true;
	}
	else
		return false;
}
//
//bool flat_::cost(const flat_ & obj)
//{
//	if (this->cost == obj.cost)
//	{
//		return true;
//	}
//	else
//		return false;
//}

