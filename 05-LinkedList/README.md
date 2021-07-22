# Linked Lists
A linked list is a sequence of data structures, which are connected together via links.
Linked list can be visualized as a chain of nodes, where every node points to the next node.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list.jpg">

A node comprises of following:
- Data − Each node of a linked list can store a data called an element.
- Next − Each node of a linked list contains a pointer to the next node called Next.

The first node is always used as a reference to traverse the list and is called HEAD. The last node points to NULL.

Some important applications of Linked Lists include:

- Implementing HashMaps, File System and Adjacency Lists, Graphs
- Implemented in stack and queue
- In undo functionality of softwares
- Dynamic memory allocation: use linked lists of free blocks
- Performing arithmetic operations on long integers
- Maintaining a directory of names

## Structure of a Linked List

### Simple Implementation
Try here: https://ide.geeksforgeeks.org/CS6UOkaZm0
```cpp
#include <iostream>
using namespace std;

// Creating a node
class Node {
public:
	int data;		//stores data/value.
	Node* next;		//pointer to next node (so data type will be 'node')
};

int main() 
{
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node four;
    Node five;
    
    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();
    
    // Assign value values
    //accessing data using '->' (arrow operator).
    one->data = 1;
    two->data = 2;
    three->data = 3;
    //accessing data using '.' (dot operator).
    four.data=4;
    five.data=6;
    
    // Connect nodes
    //accessing address of next node using '->' (arrow operator).
    one->next = two;
    two->next = three;
    three->next = &four;
    //accessing address of next node using '.' (dot operator).
    four.next = &five;
    five.next = NULL;
    
    // Traversing the linked list values
    cout<<"Traversing the Linked List: \n";
    cout<<"data - pointer(address of next node)"<<endl;
    head = one;
    while (head != NULL) 
    {
      cout << head->data <<" - "<< head->next <<endl;
      head = head->next;
    }
}
```

### By using Constructor for initialization
Try Here : https://ide.geeksforgeeks.org/JSZ5VghVlb
```cpp
#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;		//stores data/value.
	node* next;		//pointer to next node (so datatype will be 'node')

	//constructor for initializing the node with data and next pointer to NULL.
	node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

int main()
{
	// Dynamic Allocation of Node in a linked list by calling constructor.
	node *n = new node(10);
	cout<<"Value of n: "<<n->data<<"\nAddress of n: "<<n->next<<endl;
}
```
### By using Templates and Constructor.
Try Here: https://ide.geeksforgeeks.org/udJsBEyHLj
```cpp
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class node{
public:
	T data;		//stores data
	node<T> *next;		//pointer to next node (so data type will be 'node')

	//constructor for initializing the node with data and next pointer to NULL.
	node(T data){
		this->data = data;
		next = NULL;
	}
};

int main()
{
	// Dynamic Allocation of Node in a linked list with different data types.
    node<int> *n1 = new node<int>(10);
    node<char> *n2 = new node<char>('a');
    node<float> *n3 = new node<float>(0.240);
    cout<<"Data in node n1: "<<n1->data<<endl;
    cout<<"Data in node n2: "<<n2->data<<endl;
    cout<<"Data in node n3: "<<n3->data<<endl;
}
```

## Related Topics:

- Operations on a Linked List
	- Insertion
	- Deletion
	- Searching
	-  