public class testQueue{
	public static void main (String[] args){
		
		Queue l1 = new Queue(), l2 = new Queue();
		System.out.println("Creation OK!");

		l1.enqueue(1);
		System.out.println(l1);
		l1.enqueue(0);
		System.out.println("Invalid Value(1): "+ l1);
		//l1.enqueue(1);
		System.out.println("Peeking with 1 element(1): "+l1.front());
		l1.dequeue();
		System.out.println("dequeue 1 element([]): " + l1);
		System.out.println("Empty(true): " + l1.isEmpty());
		l1.enqueue(2);
		System.out.println(l1);
		System.out.println("Empty for 1 element(false): " +l1.isEmpty());
		l1.enqueue(6);
		System.out.println(l1);
		l1.enqueue(7);
		System.out.println(l1);
		System.out.println("Peeking with 3 elements(7): "+l1.front());
		System.out.println("Empty for 3 element(false): " +l1.isEmpty());
		
		System.out.println("dequeue with 3 elements: "+l1.dequeue());
		System.out.println(l1);
		
		l2 = l1;
		System.out.println("l2: "+l2);

		System.out.println("End Testing!");

	}
}