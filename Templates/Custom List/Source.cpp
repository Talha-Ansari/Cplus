#include"CustomList.h"

int main()
{
	CustomList<int> a('5',0,0);
	a.addElementAtFirstIndex('a');
	a.addElementAtFirstIndex('6');
	a.addElementAtLastIndex('3');
	a.addElementAtLastIndex('7');
	
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

	if (a.search(97))
	{
		cout << "avalible" << endl;
	}

	cout << a.last() << endl;

	cout<<a.sum_ofPrime();
}