public class Tester{
	public static void main (String[] args){
		Deque l1 = new Deque(), l2 = new Deque();
		System.out.println("Creation OK!");

		// check enqueueFront and the dequeues with 1 element
		l1.enqueueFront(1);
		System.out.println(l1);
		l1.enqueueFront(0);
		System.out.println(l1);
		l1.dequeueFront();
		System.out.println(l1);
		System.out.println("Empty(true): "+ l1.isEmpty());
		l1.enqueueFront(1);
		System.out.println(l1);
		l1.dequeueBack();
		System.out.println(l1);
		System.out.println("Empty(true): "+ l1.isEmpty());
		// check enqueueFront and the dequeues with 3 elements
		l1.enqueueFront(1);
		System.out.println(l1);
		l1.enqueueFront(2);
		System.out.println(l1);
		l1.enqueueFront(3);
		System.out.println(l1);
		l1.dequeueFront();
		System.out.println(l1);
		System.out.println("Empty for 2 element(false): "+ l1.isEmpty());
		l1.enqueueFront(1);
		System.out.println(l1);
		l1.dequeueBack();
		System.out.println(l1);
		System.out.println("Empty for 2 element(false): "+ l1.isEmpty());
		//cout << "Invalid Value(1): "<< l1 << endl;
		//l1.push(1);
		l1.dequeueFront();
		l1.dequeueFront();
		// check enqueueBack and the dequeues
		l1.enqueueBack(1);
		System.out.println(l1);
		l1.enqueueBack(0);
		System.out.println(l1);
		l1.dequeueFront();
		System.out.println(l1);
		System.out.println("Empty(true): "+ l1.isEmpty());
		l1.enqueueBack(1);
		System.out.println(l1);
		l1.dequeueBack();
		System.out.println(l1);
		System.out.println("Empty(true): "+ l1.isEmpty());
		// check enqueueBack and the dequeues
		l1.enqueueBack(1);
		System.out.println(l1);
		l1.enqueueBack(2);
		System.out.println(l1);
		l1.enqueueBack(3);
		System.out.println(l1);
		l1.dequeueFront();
		System.out.println(l1);
		System.out.println("Empty for 2 element(false): "+ l1.isEmpty());
		l1.enqueueBack(1);
		System.out.println(l1);
		l1.dequeueBack();
		System.out.println(l1);
		System.out.println("Empty for 2 element(false): "+ l1.isEmpty());
		//cout << "Peeking with 1 element(1): "<<l1.front() << endl;
		//l1.dequeue();
		//cout <<"dequeue 1 element([]): " << l1 << endl;
		
		//l1.enqueue(1);
		//System.out.println(l1);
		//cout << "Empty for 1 element(false): " << l1.isEmpty() << endl;
		//l1.enqueue(6);
		//System.out.println(l1);
		//l1.enqueue(7);
		//System.out.println(l1);
		//cout << "Peeking with 3 elements(7): "<<l1.front() << endl;
		
		
		//cout << "dequeue with 3 elements: "<<l1.dequeue() << endl << l1 << endl;

		l2 = l1;
		System.out.println(l2);
		l1.dequeueBack();
		l2 = l1;
		System.out.println(l2);

		System.out.println("End testing!");
	}
}