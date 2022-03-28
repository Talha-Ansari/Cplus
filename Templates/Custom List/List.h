#pragma once
#include<iostream>
using namespace std;
template<typename T>
void regrow(T*& arr, int current, int& max)
{
	T* temp = new T[max + 1];
	for (int i = 0; i < current; i++)
	{
		temp[i] = arr[i];
	}
	max += 1;
	delete[]arr;
	arr = temp;

}
template<typename T>
void shrink(T*& arr, int current, int max)
{
	current -= 1;
	T* temp = new T[max - 1];
	for (int i = 0; i < current; i++)
	{
		temp[i] = arr[i];
	}
	max -= 1;
	delete[]arr;
	arr = temp;
}


template<class T>
class List
{
protected:
	T* arr;
	int currentsiz;
	int maxsiz;
public:

	void setdata(T a)
	{
		arr[currentsiz] = a;
	}
	void setcurrentsiz(int c)
	{
		currentsiz = c;
	}
	void setmaxsiz(int m)
	{
		maxsiz = m;
	}
	virtual void addElementAtFirstIndex(T a) = 0;

	virtual	void addElementAtLastIndex(T a) = 0;

	//Should add the element at the last position of the List
	virtual	void removeElementFromEnd() = 0;

	//	Should remove the element from the last position of the List
	virtual	void removeElementFromStart() = 0;

	//	Should remove the element from the first position of the List
	virtual	void display()
	{
		for (int i = 0; i < currentsiz; i++)
		{
			cout << arr[i] << " ";
		}
	}

	

};

