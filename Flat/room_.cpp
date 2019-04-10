#include "room_.h"



room_::room_()
{
	this->name = nullptr;
	this->area = 0;
}

room_::room_(const char* name, int area)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->area = area;
}

room_::~room_()
{

	delete[] this->name;

}

void room_::info()
{
	cout << this->name << " " << this->area << endl;
}

char * room_::getName()
{
	return this->name;
}

int room_::getArea()
{
	return this->area;
}

void room_::setName(const char* name)
{
	if (this->name != nullptr)
	{
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void room_::setArea(int area)
{
	this->area = area;
}
