/*
 * virtualFunctions.cpp
 *
 *  Created on: 11-Jul-2024
 *      Author: apple
 */



#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class GeometricalShape //maintains a vptr to vtable
{
public:
	virtual void draw() {
		cout<<"\nDrawing a geometrical shape";
	}
	void draw(int thickNess) {
		cout<<"\nDrawing a geometrical shape of thickness "<<thickNess;
	}
};
class Circle : public GeometricalShape
{
	public:
	void draw() { //overriding
		cout<<"\nDrawing a Circle shape";
	}
	void drawn() {
		cout<<"\nDrawn a Circle shape";

	}
};


class Ellipse : public Circle
{
	public:
	void draw() { //overriding
		cout<<"\nDrawing a Ellipse shape";
	}
	void drawn() {
		cout<<"\nDrawn a Ellipse shape";

	}
};


int main() {

	GeometricalShape geoShape;
	geoShape.draw(5); //early binding

	GeometricalShape *ptr; // ptr to GeometricalShape

	ptr = &geoShape;
	ptr->draw(5); //early binding

	cout<<"\n-------Circle---------";

	Circle circle;
	circle.draw(); // early binding [ compile time polymorphism ] of Circle's draw with the object ref
	circle.drawn();
	circle.GeometricalShape::draw(4);

	cout<<"\n--------via ptr--------";

	ptr = &circle; //;late binding [ runtime polymorphism ] this line is possible cause circle is also a GeometricalShape

	ptr->draw();
	//ptr->drawn();


	Ellipse ellipse;
	//ellipse.draw();

	ptr=&ellipse;

	ptr->draw();

	return 0;
}










