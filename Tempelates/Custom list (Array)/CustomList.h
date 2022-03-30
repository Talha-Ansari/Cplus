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
			int num = List<T>::arr[i];
			for (int j = 1; j <= num; j++)
			{
				if (num % j == 0)
				{
					counter += 1;
				}
			}
			if (counter == 2)
			{
				sum += List<T>::arr[i];
			}

		}
		return sum;
	}
	T secondMaxEven()
	{
		T max, second = 0;
		int length = List<T>::currentsiz;
		for (int i = 0; i < length - 1; i++)
		{
			if (List<T>::arr[i] % 2 == 0 && List<T>::arr[i] > List<T>::arr[i + 1])
			{
				max = List<T>::arr[i];
			}
		}
		for (int i = 0; i < length; i++)
		{
			if (List<T>::arr[i] % 2 == 0 && List<T>::arr[i] <max && List<T>::arr[i] > second)
				second = List<T>::arr[i];
		}
		return second;
	}

	T secondMinOdd()
	{
		T max = 9999999999, second = List<T>::arr[0];
		int length = List<T>::currentsiz;
		for (int i = 0; i < length; i++)
		{
			if (List<T>::arr[i] % 2 != 0 && second > List<T>::arr[i])
			{
				second = List<T>::arr[i];
			}
		}
		for (int i = 0; i < length; i++)
		{
			if (List<T>::arr[i] % 2 != 0 && List<T>::arr[i] <max && List<T>::arr[i] > second)
				max = List<T>::arr[i];
		}
		return max;
	}
	void  printDuplicates()
	{
		int length = List<T>::currentsiz;
		int counter = 0;
		for (int i = 0; i < length; i++)
		{
			counter = 0;
			for (int j = i; j < length; j++)
			{
				if (List<T>::arr[i] == List<T>::arr[j])
				{
					counter++;
					if (counter > 1)
					{
						cout << List<T>::arr[i] << " ";
					}
				}
			}
		}
	}
	void rotateClockwaise(int r)
	{
		int mid = List<T>::currentsiz;
		mid /= 2;
		for (int i = 0; i < r; i++)
		{
			int a;
			int temp = List<T>::arr[mid-1];
			for (int i = mid-2; i >=0; i--)
			{
				List<T>::arr[i+1] = List<T>::arr[i];
			}
			List<T>::arr[0] = temp;
			if (List<T>::currentsiz % 2 != 0)
			{
				mid += 1;
			}
			temp = List<T>::arr[List<T>::currentsiz - 1];
			
			for (int i = List<T>::currentsiz - 2; i > mid-1; i--)
			{
				List<T>::arr[i+1] = List<T>::arr[i ];
			}
			List<T>::arr[mid] = temp;
		}
	}
	void rotateanitclockwaise(int rt)
	{
		int mid = List<T>::currentsiz;
		mid /= 2;
		for (int i = 0; i < rt; i++)
		{
			int temp = List<T>::arr[0];

			for (int i = 0; i < mid; i++)
			{
				List<T>::arr[i] = List<T>::arr[i + 1];
			}
			List<T>::arr[mid - 1] = temp;
			if (List<T>::currentsiz % 2 != 0)
			{
				mid += 1;
			}
			temp = List<T>::arr[mid-1];
			for (int i = mid-1; i < List<T>::currentsiz - 1; i++)
			{
				List<T>::arr[i] = List<T>::arr[i + 1];
			}

			List<T>::arr[List<T>::currentsiz - 1] = temp;
		}
	}


};

