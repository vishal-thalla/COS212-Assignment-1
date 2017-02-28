#include "Stack.h"
//#include "CircularList.h"
 
 /*
Provide all of the implementation for the Stack
class in this file
 */

ostream& operator<<(ostream& os,Stack& c){
	return os << *(c.list);
}

/*
The overloaded assignment operator.  You will have to replace this 
operator with an appropriate equivalent in your Java code
*/ 
Stack& Stack::operator=(const Stack& other){
	*list = *(other.list);
	return *this;
}


/*
The default construcor.
*/
Stack::Stack(){
	list = new CircularList();
}

/*
The destructor.
*/
Stack::~Stack(){
	while(list -> deleteFromBack() != -1);
	delete list;
}

/*
The push function pushes an element onto the stack. 
Any attempt to push anything other than a positive
integer should be ignored.
*/
void Stack::push(int elem){
	if (elem > 0)
		list -> addToFront(elem);
}

/*
The pop function removes and returns the element at
the top of the stack.  If for whatever reason a
request for the pop function is invalid, return -1
as an error code.
*/
int Stack::pop(){
	CircularList* temp = new CircularList();
	int curr = list -> deleteFromBack(), prev = 0;
	//bool first = true;
	// copy all elements to temp
	if (curr != -1){
		//temp -> addToFront(curr);
		while(curr != -1){
			prev = curr;
			curr = list -> deleteFromBack();
			if (curr != -1)// stops top element from being added to temp
				temp -> addToFront(prev);
			
		}
	}else{
		delete temp;
		return curr;// empty list - returns -1
	}
	//now copy back the elements so the order is preserved e
	*list = *temp;
	delete temp;
	return prev;
}

/*
The peek function returns the element at
the top of the stack without removing it.  
If for whatever reason a request for the 
peek function is invalid, return -1 as an 
error code.
*/
int Stack::peek(){
	/* simpler code:
		int top = pop();
		list -> addToFront(top);
		return top;
	*/
	CircularList* temp = new CircularList();
	int curr = list -> deleteFromBack(), prev = -1;
	while(curr != -1){
		prev = curr;
		curr = list -> deleteFromBack();
		temp-> addToFront(prev);
	}
	curr = temp -> deleteFromBack();
	while(curr != -1){
		list -> addToFront(curr);
		curr = temp -> deleteFromBack();		
	}
	delete temp;
	return prev;
}

/*
The isEmpty function returns true if the stack
is empty and false otherwise.
*/
bool Stack::isEmpty(){
	CircularList * temp = new CircularList();
	*temp = *list;//operator=
	if (temp -> deleteFromBack() ==-1)
		return true;
	delete temp;
	return false;
}