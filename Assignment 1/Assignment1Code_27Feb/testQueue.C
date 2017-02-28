#include <iostream>
#include "Queue.h"

using namespace std;


int main(){
	Queue l1, l2;
	cout << "Creation OK!\n";

	l1.enqueue(1);
	cout << l1 << endl;
	l1.enqueue(0);
	cout << "Invalid Value(1): "<< l1 << endl;
	//l1.push(1);
	cout << "Peeking with 1 element(1): "<<l1.front() << endl;
	l1.dequeue();
	cout <<"dequeue 1 element([]): " << l1 << endl;
	cout << "Empty(true): " << l1.isEmpty() << endl;
	l1.enqueue(1);
	cout << l1 << endl;
	cout << "Empty for 1 element(false): " << l1.isEmpty() << endl;
	l1.enqueue(6);
	cout << l1 << endl;
	l1.enqueue(7);
	cout << l1 << endl;
	cout << "Peeking with 3 elements(7): "<<l1.front() << endl;
	cout << "Empty for 3 element(false): " << l1.isEmpty() << endl;
	
	cout << "dequeue with 3 elements: "<<l1.dequeue() << endl << l1 << endl;

	l2 = l1;
	cout << "l2: " << l2<< endl;

	cout << "End Testing!\n";
	return 0;

}