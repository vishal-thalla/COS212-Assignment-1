public class Queue{
	private Stack stack;
	/*
	The default constructor.
	*/
	public Queue(){
		stack = new Stack();
	}
	
	
	/*
	The enqueue function places the element
	passed in as a parameter into the queue.
	Any attempts to insert anything other than
	a positive integer should be ignored.
	*/
	public void enqueue(int elem){
		if (elem > 0){// don't waste processing power
			Stack temp = new Stack();
			int curr = stack.pop();
			while(curr != -1){// temp gets stack in reverse order
				temp.push(curr);
				curr = stack.pop();
			}
			stack.push(elem);
			curr = temp.pop(); // last element
			while(curr != -1){// stack gets temp in reverse order to restore original order
				stack.push(curr);
				curr = temp.pop();
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
	public int dequeue(){
		return stack.pop();
	}
	
	/*
	The isEmpty function returns true if the queue
	is empty and false otherwise.
	*/
	public Boolean isEmpty(){
		return stack.isEmpty();
	}
	
	/*
	This function returns but does not remove the
	element at the front of the queue.  Return -1
	to indicate any errors.
	*/
	public int front(){
		return stack.peek();
	}
	
	@Override
	public String toString(){
		return stack.toString();
	}

	@Override
	public Queue clone(){
		Queue copy = new Queue();
		copy.stack = stack.clone();
		return copy;
	}
}