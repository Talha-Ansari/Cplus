#pragma once
#include "MyList.h"
template<typename T>
class CustomList : public MyList<T>
{

public:
	CustomList(T a, int current, int max) :MyList<T>(a, current, max)
	{

	}
	T sum_ofPrime()
	{
			T sum = 0;
		for (int i = 0; i < List<T>::currentsiz; i++)
		{
			int counter = 0;

			for (int i = 0; i < List<T>::arr[i]; i++)
			{
				if (List<T>::arr[i]%i==0)
				{
					counter += 1;
				}
			}
			if (counter==2)
			{
				sum += List<T>::arr[i];
			}
		
		}
		return sum;
	}
		/*Type secondMaxEven() 
		Type secondMinOdd()
		void  printDuplicates() 
		void rotateClockwaise(int r)
		void rotateanitclockwaise(int rt)*/


};

