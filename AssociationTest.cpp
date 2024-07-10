/*
 * AssociationTest3.cpp
 *
 *  Created on: 10-Jul-2024
 *      Author: apple
 */

#include <iostream>
#include <string>
using namespace std;


class Curd {};
class Vinegar { };

class Milk {
public:
	int getQuantity() const {
		return quantity;
	}

	void setQuantity(int quantity) {
		this->quantity = quantity;
	}

private:
	int quantity;



//produce			usesA
	Curd coagulate(Vinegar v) {

		Curd c;
		return c;
	}

};

class Cow {

	//producesA
	Milk milkACow() {
		Milk m;
		return m;
	}
};

class MilkShake {
	char flavour[20];
	int sweetnessLevel;
	int quantity;
	char color[20];

	public:
		MilkShake(char f[], int sl, int q, char col[]) {
			strcpy(flavour,f);
			sweetnessLevel=sl;
			quantity=q;
			strcpy(color,col);
		}
		void print() {
			cout<<"\nType : "<<flavour;
			if(sweetnessLevel > 1.0 && sweetnessLevel<=3.0)
				cout<<"\nSweet: "<<"High Sweet";
			else if(sweetnessLevel > 3.0 && sweetnessLevel<=6.0)
				cout<<"\nSweet: "<<"Medium Sweet";
			else if(sweetnessLevel > 6.0 )
				cout<<"\nSweet: "<<"Lesser Sweet";


			cout<<"\nQty  : "<<quantity <<" ML";
			cout<<"\nCOLOR: "<<color;
		}

};
class Sugar{
	int quantity;
	char type[20];
	char color[20];

public:
	Sugar(int q, char t[], char col[]) {
		quantity = q;
		strcpy(type,t);
		strcpy(color,col);
	}

	const char* getColor() const {
		return color;
	}

	int getQuantity() const {
		return quantity;
	}

	const char* getType() const {
		return type;
	}
};
class Fruit {

	char type[20];
	int weight;
	char color[20];

public:
	Fruit(char t[],int w, char col[]) {
		strcpy(type,t);
		weight=w;
		strcpy(color,col);
	}

	char* getColor()  {
		return color;
	}

	char* getType()  {
		return type;
	}

	int getWeight() const {
		return weight;
	}
};

class Kitchen {
public:
						// 1 1000
	MilkShake makeSomething(Milk m, Sugar s, Fruit f) {
		MilkShake ms(f.getType(), m.getQuantity() / s.getQuantity() ,m.getQuantity(), "Red");
		return ms;
	}
};
/*

	250ml	500ml		1000ml
	200gm	200gm		200gm
1
2.5
3

low  high
1 to 10

*/
int main() {


	Milk m;
	m.setQuantity(1000);// half litre

	Sugar s(250, "Organic", "Brown");

	Fruit fruit("Strawberries",350,"Red");

	Kitchen kitchen;

	MilkShake milkShake = kitchen.makeSomething(m,s,fruit);
	milkShake.print();

	/*Cow cow;
	Milk m  = cow.milkACow();
	Vinegar v;
	Curd c = m.coagulate(v);*/

	return 0;
}

