#include <iostream>
#include "CircularList.h"

using namespace std;

int main(){
	CircularList l1, l2;
	cout << "Creation OK!\n";

	l1.addToFront(0);
	cout << l1 << endl;
	l1.addToFront(3);
	cout << l1 << endl; 
	l1.deleteFromBack();
	//cout << "deleteFromBack done!\n";
	cout << l1 << endl;
	l1.addToFront(2);
	cout << l1 << endl;
	l1.addToFront(5);
	cout << l1 << endl;
	l1.addToFront(11);
	cout << l1 << endl;
	l1.addToFront(10);
	cout << l1 << endl;
	l1.deleteFromBack();
	l1.deleteFromBack();
	l1.deleteFromBack();
	//l1.deleteFromBack();
	cout << l1<< endl;
	l2 = l1;
	cout << l2 << endl;

	cout << "End Testing!\n";
	return 0;

}