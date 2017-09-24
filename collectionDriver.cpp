//Schuyler Vercauteren
//Homework #1 Part 3
//Cosci 2 

//Collection template

#include"HWP3_Collection\Collection.h"
#include<iostream>

int main()
{
	//test constructor, print, destructor.
	 Collection<int> something(1);
	 something.print();
	 something.~Collection();

	 //test is empty.
	 Collection<int> thing(3);
	 thing.print();
	 cout << "The Array ";
	 if (thing.isEmpty() == true) {cout << "*is* empty." << endl;}
	 else { cout << "*is not* empty." << endl;}
	 
	 //test insert.
	 thing.insert(22);
	 thing.print();

	 //test remove.
	 thing.remove(22);
	 thing.print();

	 //test remove random.
	 thing.insert(12);
	 thing.insert(16);
	 thing.insert(45);
	 thing.print();
	 thing.removeRandom();
	 thing.print();

	 //test if x is contained
	 cout <<"The Array ";
	 if (thing.notContained(12) == true) { cout << "*does not* contain x." << endl; }
	 else { cout <<  "*does* contain x." << endl; }

	 //test get size.
	 cout << "The Array is: " << thing.getSize() << " items long."<<endl;
	return 0;
}
