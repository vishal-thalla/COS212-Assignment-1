public class Stack{
	private CircularList list;
	
	public Stack(){
		list = new CircularList();
	}
	
	/*
	The push function pushes an element onto the stack. 
	Any attempt to push anything other than a positive
	integer should be ignored.
	*/
	public void push(int elem){
		if (elem > 0)
			list.addToFront(elem);
	}
	
	/*
	The pop function removes and returns the element at
	the top of the stack.  If for whatever reason a
	request for the pop function is invalid, return -1
	as an error code.
	*/
	public int pop(){
		CircularList temp = new CircularList();
		int curr = list.deleteFromBack(), prev = 0;	
		if (curr == -1)
			return curr;// empty list
		
		while(curr != -1){
			prev = curr;
			curr = list.deleteFromBack();
			if (curr != -1)// stops top element from being added to temp
				temp.addToFront(prev);				
		}
		
		//now copy back the elements so the order is preserved e
		list = temp.clone();
		return prev;
	}
	
	/*
	The peek function returns the element at
	the top of the stack without removing it.  
	If for whatever reason a request for the 
	peek function is invalid, return -1 as an 
	error code.
	*/
	public int peek(){
		int top = pop();
		list.addToFront(top);
		return top;
	}
	
	/*
	The isEmpty function returns true if the stack
	is empty and false otherwise.
	*/
	public Boolean isEmpty(){
		return (peek()== -1) ? true : false;
	}
	
	@Override
	public String toString(){
		return list.toString();
	}

	@Override
	public Stack clone(){
		Stack copy = new Stack();
		copy.list = list.clone();
		return copy;
	}
}