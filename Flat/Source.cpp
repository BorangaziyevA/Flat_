#include "room_.h"

void main()
{
	room_ a("Bathroom", 10);
	a.info();
	cout << a.getArea() << endl;
	cout << a.getName() << endl;
	a.setArea(12);
	a.setName("Toilet");
	a.info();
	
	system("pause");
}