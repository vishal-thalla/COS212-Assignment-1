public class testCircular{
	public static void main (String[] args){
		CircularList l1 = new CircularList();
		System.out.println("Creation OK!");

		l1.addToFront(0);
		System.out.println(l1);
		l1.addToFront(3);
		System.out.println(l1); 
		l1.deleteFromBack();
		//System.out.println( << "deleteFromBack done!\n";
		System.out.println(l1);
		l1.addToFront(2);
		System.out.println(l1);
		l1.addToFront(5);
		System.out.println(l1);
		l1.addToFront(11);
		System.out.println(l1);
		l1.addToFront(10);
		System.out.println(l1);
		l1.deleteFromBack();
		l1.deleteFromBack();
		l1.deleteFromBack();
		//l1.deleteFromBack();
		System.out.println(l1);
		CircularList l2 = new CircularList();
		l2 = l1.clone();
		System.out.println("clone successful");
		System.out.println(l2);

		System.out.println("End Testing!");
	}
}