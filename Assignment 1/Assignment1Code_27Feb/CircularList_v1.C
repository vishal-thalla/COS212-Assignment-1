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

//!!!!!!!!!!!!!!!!!!!!!!!!
//!!FIGURE THIS SHIT OUT!!
//!!!!!!!!!!!!!!!!!!!!!!!!
// option1: iterate and get size. Store in array. addToFront from back of array(efficient for large lists)
// option2: addTail, then iterate through to tail-1 and add and iterate again till tail-2 and add and so on(inefficient for large lists)
// DONE!!
CircularList& CircularList::operator=(const CircularList& other){
	//Node* curr = other.tail;
	if (other.tail != 0){
		addToFront(other.tail->data);
		//cout << "tail added\n";	
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
	/* // failed option 1
		cout <<"Rest started\n";
		for(Node* temp = (other.tail)->next; temp->next != other.tail; temp = temp->next){
			//cout << temp << endl;
			Node* tmp = (other.tail)->next, *prev = 0;
			while(prev != curr){
				if (prev != 0 && prev->next == curr){
					//cout << "adding!\n";
					addToFront(prev->data);
					curr = prev;
				}
				prev = tmp;
				tmp = tmp -> next;				
			}
			/*
			for (Node* tmp = (other.tail)->next, *prev = 0; prev != curr; ){
				//cout << tmp << endl;
				//cout << prev << endl;
				if (prev != 0 && prev->next == curr){
					//cout << "adding!\n";
					addToFront(prev->data);
					curr = prev;
				}		
				//cout << "inloop end!\n";
			}
			
		}
		cout << "Rest ended\n"; 
	}
	*/
	return *this;
}
		
		
/*Default constructor*/
CircularList::CircularList(){
	tail = 0;	
}

/*Destructor*/
CircularList::~CircularList(){
	for (;deleteFromBack() != -1;);
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
	//cout << "tail = " << tail -> data << endl;
	if (tail == 0)
		return -1;
	else{
		Node* temp, *prev = 0;
		int data = tail -> data;
		for(temp = tail->next; temp != tail; prev = temp,temp = temp->next);
		/*{
			cout << temp -> data << endl;
		}
		cout << temp -> data << endl;
		*/

		if (prev == tail){
			prev = 0;
			//cout << "prev = 0\n";
		}
		else if (prev != 0){
			prev->next = tail->next;
			//cout << "deleted from tail\n";
		}

		delete tail;
		tail = prev;	
		/*
		if (tail != 0)
		cout << tail->data <<endl;	
		else cout << "no tail\n";
		*/
		return data;
	}

}
		