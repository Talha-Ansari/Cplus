#pragma once
#include "List.h"
template<class T>
class MyList :public List<T>
{



public:

	MyList(T a, int current, int max)
	{
		List<T>::maxsiz = max;
		List<T>::currentsiz = 0;
		regrow(List<T>::arr, List<T>::currentsiz, List<T>::maxsiz);
		List<T>::currentsiz += 1;
		List<T>::arr[0] = a;
	}

	T last()
	{
		return List<T>::arr[List<T>::currentsiz-1];
	}
	bool search(T a)
	{
		for (int i = 0; i < List<T>::currentsiz; i++)
		{
			if (a == List<T>::arr[i])
			{
				return true;
			}
		}
		return false;
	}
	bool insertAt(int index, T value)
	{
		if (index< List<T>::maxsiz)
		{
			List<T>::arr[index] = value;
				return true;
		}
		return false;
	}

	bool empty()
	{
		if (List<T>::currentsiz==0)
		{
			return true;
		}
		return false;
	}
	bool full()
	{
		if (List<T>::currentsiz == List<T>::maxsiz)
		{
			return true;
		}
		return false;
	}
	int size()
	{
		return List<T>::currentsiz;
		}

	void addElementAtFirstIndex(T a)
	{
		regrow(List<T>::arr, List<T>::currentsiz, List<T>::maxsiz);
		for (int i = List<T>::maxsiz - 1; i > 0; i--)
		{
			List<T>::arr[i] = List<T>::arr[i - 1];
		}
		List<T>::arr[0] = a;
		List<T>::currentsiz += 1;
	}
	void addElementAtLastIndex(T a)
	{
		regrow(List<T>::arr, List<T>::currentsiz, List<T>::maxsiz);
		List<T>::arr[List<T>::currentsiz] = a;
		List<T>::currentsiz += 1;
	}
	//Should add the element at the last position of the List
	void removeElementFromEnd()
	{
		shrink(List<T>::arr, List<T>::currentsiz, List<T>::maxsiz);
		List<T>::currentsiz -= 1;
		List<T>::maxsiz -= 1;
	}
	//	Should remove the element from the last position of the List
	void removeElementFromStart()
	{
		for (int i = 0; i < List<T>::maxsiz - 1; i++)
		{
			List<T>::arr[i] = List<T>::arr[i + 1];
		}
		shrink(List<T>::arr, List<T>::currentsiz, List<T>::maxsiz);
		List<T>::currentsiz -= 1;
		List<T>::maxsiz -= 1;
	}
	//	Should remove the element from the first position of the List
	void display()
	{
		for (int i = 0; i < List<T>::currentsiz; i++)
		{
			cout << List<T>::arr[i] << " ";
		}
	}


};

