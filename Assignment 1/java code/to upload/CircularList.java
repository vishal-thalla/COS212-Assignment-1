public class CircularList implements Cloneable{
	private class Node{
		public int data;
		public Node next;

		public Node(int elem, Node node){
			data = elem;
			next = node;
		}
	}
	private Node tail;

	public CircularList(){
		tail = null;
	}

	public void addToFront(int elem){
		if (elem > 0)
			if (tail == null){
				tail = new Node(elem, null);
				tail.next = tail;
			}else{
				Node temp = tail.next;
				tail.next = new Node(elem, temp);
			}
		//System.out.println(elem);
	}

	public int deleteFromBack(){
		if (tail == null)
			return -1;
		else{
			Node temp, prev = null;
			int data = tail.data;
			for(temp = tail.next; temp != tail; prev = temp,temp = temp.next);

			if (prev == tail){
				prev = null;
			}
			else if (prev != null){
				prev.next = tail.next;
			}
			tail = prev;	
			return data;
		}

	}

	@Override
	public String toString(){
		String out = "[";
		
		if (tail != null){
			//System.out.println(tail.data);
			//System.out.println(tail.next.data);
			for(Node temp = tail.next; temp != tail; temp = temp.next){
				out += temp.data+ ",";
				//System.out.println(temp.data);
			}
			out += tail.data;
		}
		out += "]";
		return out;	
	}

	@Override
	public CircularList clone(){
		CircularList copy = new CircularList();
		//if (tail == null) System.out.println("tail is null");
		if (tail != null){
			copy.tail = new Node(tail.data, null);
			if (tail.next == tail)
				copy.tail.next = copy.tail;
			else{
				Node copytrav = copy.tail;
				for (Node temp = tail.next; temp != tail; temp = temp.next){
					copytrav.next = new Node(temp.data, null);
					copytrav = copytrav.next;
					//System.out.println(temp.data);
				}
				copytrav.next = copy.tail;
			}
		}
		//System.out.println(copy.tail.data);
		//System.out.println(copy.tail.next.data);
		//for (Node temp = copy.tail.next; temp != copy.tail; temp = temp.next){
			
		//}

		return copy;
	}

}