public class Deque{
	private Queue queue;
	/*
	The default constructor.
	*/
	public Deque(){
		queue = new Queue();
	}
	
	/*
	This function adds the element passed
	as a parameter to the front of the queue.
	Any attempt to insert anything invalid
	should be ignored.
	*/
	public void enqueueFront(int elem){
		if (elem > 0){
			Queue temp = new Queue();
			temp = queue.clone();//assignment operator
			queue = new Queue();
			queue.enqueue(elem);
			int curr = temp.dequeue();
			while(curr != -1){
				queue.enqueue(curr);
				curr = temp.dequeue();
			}			
		}
	}
	
	/*
	This function adds the element passed
	as a parameter to the back of the queue.
	Any attempt to insert anything invalid
	should be ignored.
	*/
	public void enqueueBack(int elem){
		queue.enqueue(elem);
	}
	
	/*
	This function removes and returns the
	element at the front of the queue. If
	there is no such element or the operation
	is invalid, return -1 to serve as an
	error code.
	*/
	public int dequeueFront(){
		return queue.dequeue();
	}
	
	/*
	This function removes and returns the
	element at the back of the queue. If
	there is no such element or the operation
	is invalid, return -1 to serve as an
	error code.
	*/
	public int dequeueBack(){
		CircularList temp = new CircularList();
		int curr = queue.dequeue(), prev = curr;
		while(curr != -1){
			prev = curr;
			curr = queue.dequeue();
			if (curr != -1) // all but the last element
				temp.addToFront(prev);
		}
		curr = temp.deleteFromBack();
		while(curr != -1){
			queue.enqueue(curr);
			curr = temp.deleteFromBack();
		}
		return prev;
	}
	
	/*
	This function returns true if the queue is
	empty, and false otherwise.
	*/
	public Boolean isEmpty(){
		return queue.isEmpty();
	}
	
	@Override
	public String toString(){
		return queue.toString();
	}

	@Override
	public Deque clone(){
		Deque copy = new Deque();
		copy.queue = queue.clone();
		return copy;
	}
}