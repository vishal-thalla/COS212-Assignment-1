#include "CircularList.h"
 
/*
Provide all of the implementation for the CircularList
class in this file
*/

ostream& operator<<(ostream& os,CircularList& c){
	os << "[";
	if (c.tail != 0){
		if ((c.tail) -> next != c.tail)
			for(CircularList::Node* temp = (c.tail)->next; temp != (c.tail); temp = temp->next)
				os << temp->data << ",";
		os << (c.tail)-> data;
	}
	return os << "]";

}


CircularList& CircularList::operator=(const CircularList& other){
	for (;deleteFromBack() != -1;);
	if (other.tail != 0){
		addToFront(other.tail->data);	
		if ((other.tail)->next != other.tail){
			// store in array and addToFront method
			Node * temp = other.tail->next;
			int count = 0, i = 0;
			for (;temp != other.tail; temp = temp->next, count++);
			int arrtemp[count];
			for (temp = other.tail->next;temp != other.tail; temp = temp->next)
				arrtemp[i++] = temp->data;
			for (i = count -1; i >= 0; i--)
				addToFront(arrtemp[i]);
		}
	}
	return *this;
}
		
		
/*Default constructor*/
CircularList::CircularList(){
	tail = 0;	
}

/*Destructor*/
CircularList::~CircularList(){
	
}

/*
The function should add the element passed 
in as a parameter to the front of the list.
Any attempts to insert anything other than
a positive integer into the list should be
ignored.
*/
void CircularList::addToFront(int elem){
	if (elem > 0)
		if (tail == 0){
			tail = new Node(elem, 0);
			tail->next = tail;
		}else{
			Node *temp = tail->next;
			tail->next = new Node(elem, temp);
		}
}

/*
This function should remove and return the
element at the back of the list.  If there
is no such element or it is an ivalid delete
for whatever reason, then return -1 to serve
as an "error code".
*/
int CircularList::deleteFromBack(){
	if (tail == 0)
		return -1;
	else{
		Node* temp, *prev = 0;
		int data = tail -> data;
		for(temp = tail->next; temp != tail; prev = temp,temp = temp->next);

		if (prev == tail){
			prev = 0;
		}
		else if (prev != 0){
			prev->next = tail->next;
		}

		delete tail;
		tail = prev;	
		return data;
	}

}
		