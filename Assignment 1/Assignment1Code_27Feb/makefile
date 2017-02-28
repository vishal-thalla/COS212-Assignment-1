run: main
	./main

main: CircularList.o Stack.o Queue.o Deque.o
	g++ -static -std=c++11 CircularList.o Stack.o Queue.o Deque.o main.C -o main

clist: CircularList
	./clist

CircularList: CircularList.o
	g++ -static -std=c++11 CircularList.o testCircular.C -o clist

CircularList.o: CircularList.h CircularList.C
	g++ -c -static -std=c++11 CircularList.C

slist: Stack
	./slist

Stack: CircularList.o Stack.o
	g++ -static -std=c++11 CircularList.o Stack.o testStack.C -o slist

Stack.o: Stack.h Stack.C
	g++ -c -static -std=c++11 Stack.C

qlist: Queue
	./qlist

Queue: CircularList.o Stack.o Queue.o
	g++ -static -std=c++11 CircularList.o Stack.o Queue.o testQueue.C -o qlist

Queue.o: Queue.h Queue.C
	g++ -c -static -std=c++11 Queue.C 

dlist: Deque
	./dlist

Deque: CircularList.o Stack.o Queue.o Deque.o
	g++ -static -std=c++11 CircularList.o Stack.o Queue.o Deque.o testDeque.C -o dlist

Deque.o: Deque.h Deque.C
	g++ -c -static -std=c++11 Deque.C 

clean:
	rm *.o main *~