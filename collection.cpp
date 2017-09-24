//Schuyler Vercauteren
//Homework #1 Part 3
//Cosci 2 

//Collection template

#include<iostream>
using namespace::std;

template<class T>
class Collection
{
public:
	Collection(int num);
	~Collection();
	void makeEmpty(int length);
	bool isEmpty();
	void insert(T add);
	void remove(T x);
	void removeRandom();
	bool notContained(T x);
	int getSize();
	void print();
private:
	int size;
	T *list;
};

template<class T>
Collection<T>::Collection(int num)
{
	size = num;
	list = new T[num];
}
template<class T>
Collection<T>::~Collection()
{	
	delete[] list;
	size = 0;
}
template<class T>
int Collection<T>::getSize()
{
	return size;
}
template<class T>
void Collection<T>::print()
{
	cout << "Curent Size: " << getSize() << endl << "The Array is: [";
	for (int i = 0; i < size; i++)
	{
		cout << "(" << list[i].first << " " << list[i].second << " " << list[i].third << "), ";
	}
	cout << "]. " << endl << endl;
}
template<class T>
bool Collection<T>::notContained(T x)
{
	int i = 0;
	while (i < size)
	{
		if (list[i] == x)
		{
			return true;
		}
		i++;
	}
	return false;
}
template<class T>
bool Collection<T>::isEmpty()
{
	if (list == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
void Collection<T>::makeEmpty(int length)
{
	delete[] list;
	list = new T[length];
}
template<class T>
void Collection<T>::insert(T add)
{
	T *tmp = new T[size+1];
	int i = 0;
	for (i = 0; i < size; i++;)
	{
		tmp[i] = list[i]
	}
	tmp[i + 1] = add;
	makeEmpty(size + 1);
	list = tmp;

}