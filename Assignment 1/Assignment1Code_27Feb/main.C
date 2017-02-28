#include <iostream>
#include "Deque.h"

using namespace std;


int main(){
	Deque l1, l2;
	cout << "Creation OK!\n";

	// check enqueueFront and the dequeues with 1 element
	l1.enqueueFront(1);
	cout << l1 << endl;
	l1.enqueueFront(0);
	cout << l1 << endl;
	l1.dequeueFront();
	cout << l1 << endl;
	cout << "Empty(true): " << l1.isEmpty() << endl;
	l1.enqueueFront(1);
	cout << l1 << endl;
	l1.dequeueBack();
	cout << l1 << endl;
	cout << "Empty(true): " << l1.isEmpty() << endl;
	// check enqueueFront and the dequeues with 3 elements
	l1.enqueueFront(1);
	cout << l1 << endl;
	l1.enqueueFront(2);
	cout << l1 << endl;
	l1.enqueueFront(3);
	cout << l1 << endl;
	l1.dequeueFront();
	cout << l1 << endl;
	cout << "Empty for 2 element(false): " << l1.isEmpty() << endl;
	l1.enqueueFront(1);
	cout << l1 << endl;
	l1.dequeueBack();
	cout << l1 << endl;
	cout << "Empty for 2 element(false): " << l1.isEmpty() << endl;
	//cout << "Invalid Value(1): "<< l1 << endl;
	//l1.push(1);
	l1.dequeueFront();
	l1.dequeueFront();
	// check enqueueBack and the dequeues
	l1.enqueueBack(1);
	cout << l1 << endl;
	l1.enqueueBack(0);
	cout << l1 << endl;
	l1.dequeueFront();
	cout << l1 << endl;
	cout << "Empty(true): " << l1.isEmpty() << endl;
	l1.enqueueBack(1);
	cout << l1 << endl;
	l1.dequeueBack();
	cout << l1 << endl;
	cout << "Empty(true): " << l1.isEmpty() << endl;
	// check enqueueBack and the dequeues
	l1.enqueueBack(1);
	cout << l1 << endl;
	l1.enqueueBack(2);
	cout << l1 << endl;
	l1.enqueueBack(3);
	cout << l1 << endl;
	l1.dequeueFront();
	cout << l1 << endl;
	cout << "Empty for 2 element(false): " << l1.isEmpty() << endl;
	l1.enqueueBack(1);
	cout << l1 << endl;
	l1.dequeueBack();
	cout << l1 << endl;
	cout << "Empty for 2 element(false): " << l1.isEmpty() << endl;
	//cout << "Peeking with 1 element(1): "<<l1.front() << endl;
	//l1.dequeue();
	//cout <<"dequeue 1 element([]): " << l1 << endl;
	
	//l1.enqueue(1);
	//cout << l1 << endl;
	//cout << "Empty for 1 element(false): " << l1.isEmpty() << endl;
	//l1.enqueue(6);
	//cout << l1 << endl;
	//l1.enqueue(7);
	//cout << l1 << endl;
	//cout << "Peeking with 3 elements(7): "<<l1.front() << endl;
	
	
	//cout << "dequeue with 3 elements: "<<l1.dequeue() << endl << l1 << endl;

	l2 = l1;
	cout << "l2: " << l2<< endl;
	l1.dequeueBack();
	l2 = l1;
	cout << "l2: " << l2<< endl;

	cout << "End Testing!\n";
	return 0;

}
