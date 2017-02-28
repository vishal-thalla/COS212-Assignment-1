#include "Queue.h"
 
 /*
Provide all of the implementation for the Queue
class in this file
 */

/*
The overloaded stream operator for the Queue class.
If a Queue object is printed and contains the elements 5,4,3 and 
2, in this order with 5 being the front element and 2 the last, the 
output MUST be in the following format: [5,4,3,2]
There are no white spaces in the string.  You will have to replace this 
operator with an appropriate equivalent in your Java code
*/
ostream& operator<<(ostream& os,Queue& c){
	return os << *(c.stack);
}

/*
The overloaded assignment operator.  You will have to replace this 
operator with an appropriate equivalent in your Java code
*/
Queue& Queue::operator=(const Queue& other){
	*stack = *(other.stack);
}


/*
The default constructor.
*/
Queue::Queue(){
	stack = new Stack();
}

/*
The destructor.
*/
Queue::~Queue(){
	delete stack;// calls destructor of stack which will clear the circular list of stack
}

/*
The enqueue function places the element
passed in as a parameter into the queue.
Any attempts to insert anything other than
a positive integer should be ignored.
*/
void Queue::enqueue(int elem){
	if (elem > 0){// don't waste processing power
		Stack * temp = new Stack();
		//temp-> push(elem);
		int curr = stack -> pop();
		while(curr != -1){// temp gets stack in reverse order
			temp -> push(curr);
			curr = stack -> pop();
		}
		stack -> push(elem);
		curr = temp -> pop(); // last element
		while(curr != -1){// stack gets temp in reverse order to restore original order
			stack -> push(curr);
			curr = temp-> pop();
		}
	}
}

/*
The dequeue function removes and returns the
appropriate element from the queue.  If for
whatever reason an attempt is made to perform
an invalid operation, return -1 to serve as 
an error code.
*/
int Queue::dequeue(){
	return stack -> pop();
	/*
	Stack * temp = new Stack();
	int curr = stack -> pop(), prev = curr;
	while(curr!=-1){//temp gets stack from top to bottom without last elem
		prev = curr;
		curr = stack -> pop();
		if (curr != -1)
			temp -> push(prev);
	}
	curr = temp -> pop();
	while(curr != -1){//reverses temp into stack so stack order is preserved with last removed
		stack-> push(curr);
		curr = temp -> pop();
	}
	delete temp;
	return prev;
	*/
}

/*
The isEmpty function returns true if the queue
is empty and false otherwise.
*/
bool Queue::isEmpty(){
	return stack -> isEmpty();
}

/*
This function returns but does not remove the
element at the front of the queue.  Return -1
to indicate any errors.
*/
int Queue::front(){
	return stack -> peek();
}