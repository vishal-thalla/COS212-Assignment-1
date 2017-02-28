run: main
	java main

main: CircularList Stack Queue Deque Tester.java
	javac Tester.java

clist: testCircular
	java testCircular

testCircular: CircularList testCircular.java
	javac testCircular.java

CircularList: CircularList.java
	javac CircularList.java
	
slist: testStack
	java testStack
	
testStack: CircularList Stack testStack.java
	javac testStack.java

Stack: Stack.java
	javac Stack.java
	
qlist: testQueue
	java testQueue
	
testQueue: CircularList Stack Queue testQueue.java
	javac testQueue.java

Queue: Queue.java
	javac Queue.java
	
dlist: testDeque
	java testDeque
	
testDeque: CircularList Stack Queue Deque testStack.java
	javac testDeque.java

Deque: Deque.java
	javac Deque.java	