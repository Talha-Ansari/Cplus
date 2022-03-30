#include"CustomList.h"

int main()
{
	CustomList<int> a(5,0,0);
	a.addElementAtFirstIndex(4);
	a.addElementAtFirstIndex(6);
	a.addElementAtFirstIndex(6);
	a.addElementAtFirstIndex(4);
	a.addElementAtFirstIndex(6);
	a.addElementAtLastIndex(3);
	a.addElementAtLastIndex(7);
	
	a.display();
	cout << endl;
	a.removeElementFromEnd();
	a.display();
	a.removeElementFromStart();
	cout << endl;
	a.display();

	if (a.full())
	{
		cout << "Yesh" << endl;
	}

	if (a.insertAt(2,5))
	{
		cout << "Done" << endl;
	}
	a.display();

	if (a.search(4))
	{
		cout << "avalible" << endl;
	}
	cout << endl;
	cout << "Last digit of the list : " << a.last() << endl;

	cout << a.sum_ofPrime() << endl;
	a.display();cout << endl;
	cout << "Second largest even number : "<<a.secondMaxEven() << endl;
	cout << "Second minimum odd number : " << a.secondMinOdd() << endl;
	cout << "Number repeat more than once : "; a.printDuplicates();
	cout << endl;
	cout << "Anti clock wise : ";
	a.rotateanitclockwaise(1);
	a.display();
	cout << "\nClock wise : "; a.rotateClockwaise(1);
	a.display();

}