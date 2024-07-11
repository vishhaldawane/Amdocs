/*
 * MultipleLevelInheritance.cpp
 *
 *  Created on: 11-Jul-2024
 *      Author: apple
 */

/*

				  Animal
				  	 |breathing()
			----------------
			|				|
			Bird			Mammal
			|fly()			|walk()
			|layEggs()		|giveBirth()
			-----------------
					|   |
			FlyingHorse Bat
			run()		 hangInvertely(){}
*/


#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


class Animal {

public:
	Animal() {
		cout<<"\nAnimal ctor....";
	}
	void breathing() {
		cout<<"\nAnimal is breathing....";
	}
};


class Bird : public virtual Animal { //virtual base classes
	public:
	Bird() {
		cout<<"\nBird ctor...";

	}
	void fly(){
		cout<<"\nBird is flying...";
	}
};

class Mammal : public virtual Animal { //virtual base classes
	public:
	Mammal() {
		cout<<"\nMammal ctor...";

	}
	void walk(){
		cout<<"\nMammal is walking...";
	}
};

class FlyingHorse : public Bird, public Mammal
{
	public:
	FlyingHorse() {
		cout<<"\nFlyingHorse ctor...";

	}
	void run() {
		cout<<"\nFlying Horse is running....";
	}
};

int main() {


	Animal animal;
	animal.breathing();
	cout<<"\n-----------------";

	Bird sparrow;
	sparrow.breathing();
	sparrow.fly();
	cout<<"\n-----------------";


	Mammal dog;
	dog.breathing();
	dog.walk();

	cout<<"\n-----------------";




	FlyingHorse flyingHorseObj1; //DRY YAGNI KISS

	flyingHorseObj1.fly();
	flyingHorseObj1.walk();
	flyingHorseObj1.run();
	flyingHorseObj1.Animal::breathing();

	return 0;
};




