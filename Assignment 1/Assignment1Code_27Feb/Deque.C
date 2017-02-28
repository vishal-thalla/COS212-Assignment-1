#include "Deque.h"

/*
Provide all of the implementation for the Deque
class in this file
*/

/*
The overloaded stream operator for the Deque class.
If a Deque object is printed and contains the elements 5,4,3 and 
2, in this order with 5 being the front element and 2 the last, the 
output MUST be in the following format: [5,4,3,2]
There are no white spaces in the string.  You will have to replace this 
operator with an appropriate equivalent in your Java code
*/
ostream& operator<<(ostream& os,Deque& c){
	return os << *(c.queue);
}

/*
The overloaded assignment operator.  You will have to replace this 
operator with an appropriate equivalent in your Java code
*/
Deque& Deque::operator=(const Deque& other){
	*queue = *(other.queue);
	return *this;
}

/*
The default constructor.
*/
Deque::Deque(){
	queue = new Queue();
}

/*
The destructor.
*/
Deque::~Deque(){
	delete queue;
}

/*
This function adds the element passed
as a parameter to the front of the queue.
Any attempt to insert anything invalid
should be ignored.
*/
void Deque::enqueueFront(int elem){
	if (elem > 0){
		Queue * temp = new Queue();
		*temp = *queue;
		delete queue;
		queue = new Queue();
		queue -> enqueue(elem);
		int curr = temp -> dequeue();
		while(curr != -1){
			queue -> enqueue(curr);
			curr = temp -> dequeue();
		}
		delete temp;
		/*
		CircularList * temp = new CircularList();
		curr = queue -> dequeue();
		while(curr != -1){
			temp -> addToFront(curr);
			curr = queue -> dequeue();
		}
		delete temp;
		*/
	}
}

/*
This function adds the element passed
as a parameter to the back of the queue.
Any attempt to insert anything invalid
should be ignored.
*/
void Deque::enqueueBack(int elem){
	queue -> enqueue(elem);
}

/*
This function removes and returns the
element at the front of the queue. If
there is no such element or the operation
is invalid, return -1 to serve as an
error code.
*/
int Deque::dequeueFront(){
	return queue -> dequeue();
}

/*
This function removes and returns the
element at the back of the queue. If
there is no such element or the operation
is invalid, return -1 to serve as an
error code.
*/
int Deque::dequeueBack(){
	CircularList * temp = new CircularList();
	int curr = queue -> dequeue(), prev = curr;
	while(curr != -1){
		prev = curr;
		curr = queue -> dequeue();
		if (curr != -1) // all but the last element
			temp -> addToFront(prev);
	}
	curr = temp -> deleteFromBack();
	while(curr != -1){
		queue -> enqueue(curr);
		curr = temp -> deleteFromBack();
	}
	delete temp;
	return prev;
}

/*
This function returns true if the queue is
empty, and false otherwise.
*/
bool Deque::isEmpty(){
	return queue -> isEmpty();
}