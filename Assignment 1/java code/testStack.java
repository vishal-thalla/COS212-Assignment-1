public class testStack{
	public static void main (String[] args){
		
		Stack l1 = new Stack(), l2 = new Stack();
		System.out.println("Creation OK!");

		l1.push(1);
		System.out.println(l1);
		l1.push(0);
		System.out.println("Invalid Value(1): "+ l1);
		//l1.push(1);
		System.out.println("Peeking with 1 element(1): "+l1.peek());
		l1.pop();
		System.out.println("Pop 1 element([]): " + l1);
		System.out.println("Empty(true): " + l1.isEmpty());
		l1.push(2);
		System.out.println(l1);
		System.out.println("Empty for 1 element(false): " +l1.isEmpty());
		l1.push(6);
		System.out.println(l1);
		l1.push(7);
		System.out.println(l1);
		System.out.println("Peeking with 3 elements(7): "+l1.peek());
		System.out.println("Empty for 3 element(false): " +l1.isEmpty());
		
		System.out.println("Popping with 3 elements: "+l1.pop());
		System.out.println(l1);
		
		l2 = l1;
		System.out.println("l2: "+l2);

		System.out.println("End Testing!");

	}
}