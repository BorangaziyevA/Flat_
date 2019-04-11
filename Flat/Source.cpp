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

#include "room_.h"
#include "flat_.h"

void main()
{
	//room_ a("Bathroom", 10);
	//room_ b(a);
	//b.info();
	//cout << b.getArea() << endl;
	//cout << b.getName() << endl;
	//a.setArea(12);
	//a.setName("Toilet");
	//a.info();

	flat_ a(5000, 2);
	flat_ b(500,3);
	a.info();
	cout <<a.sumArea()<<endl;
	cout << a.area(b)<<endl;
	
	system("pause");
}
