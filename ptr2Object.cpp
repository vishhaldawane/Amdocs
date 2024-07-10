/*
 * PointerToObject.cpp
 *
 *  Created on: 10-Jul-2024
 *      Author: apple
 */



#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
/*

		variable	name		num
				    value		190
				    address		24560

		Value of any variable is accessed via its
				1. name   ( issued by the developer )
				2. address ( issued by the system ) - keeps changing during different run


		every run (on same machine/diff machine) address of the variable is not fixed
		- hence we will create a pointer to the variable

		how to create it?

		syntax

		DataType of the varibale
		whose address being
		hold by the pointre					* pointerName;

		int									*ptr;
		(above it is the					( pointer's data type is implicitly
		data type of num, and not				unsingned int )
		of ptr)


		when a pointer is initialized only then it can be used
		- if a pointer left uninitialized, better dont create it




*/

class Flight
{
	private:
		int flightNumber;
		char flightName[20];
		char source[20];
		char destination[20];

	public:
		Flight(int flno, char fn[], char s[], char d[]) {
			flightNumber=flno;
			strcpy(flightName,fn);
			strcpy(source,s);
			strcpy(destination,d);
		}
		void print() {
			cout<<"\nflno : "<<flightNumber;
			cout<<"\nname : "<<flightName;
			cout<<"\nsrc  : "<<source;
			cout<<"\ntrg  : "<<destination;

		}
};
int main() {

	Flight flight(101,"Lufthansa","Mumbai","Germany");

	flight.print();

	cout<<"\nsize of flight : "<<sizeof(flight);
	printf("\n=> address of flight : %ld",&flight);


	Flight *ptrToFlight = &flight;

	ptrToFlight->print();
	printf("\n=> value of  ptrToflight : %ld",ptrToFlight);

	cout<<"\nsize of ptrToFlight : "<<sizeof(ptrToFlight);

	cout<<endl;

	int num=190;



	cout<<"\n1.value   of num is : "<<num;
	printf("\n2.address of num    : %ld",&num);
	cout<<"\n3.value of num is   : "<<*(&num);

	int *ptr = &num;
	cout<<"\n\n4.value at ptr is   : "<<*ptr; //fetch value where ptr is pointing
	printf("\n5.content of ptr    : %ld",ptr); //ptr's content
	printf("\n6.address of ptr    : %ld",&ptr);

	int *    *ptr1 = &ptr;

	cout<<"\n\n7.value at ptr1 is   : "<<**ptr1; //fetch value where ptr is pointing
	printf("\n8.content of ptr1    : %ld",ptr1); //ptr's content
	printf("\n9.address of ptr1    : %ld",&ptr1);

	return 0;
}
