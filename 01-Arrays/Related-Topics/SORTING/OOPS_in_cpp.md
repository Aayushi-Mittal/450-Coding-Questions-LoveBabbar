# OOPs (Object Oriented Programming)

## Topics:
- What is OOPS.
- Classes and Objects, Analogy
- Important Keywords
	- Static
	- Virtual
	- Abstract
	- Final
	- Explicit
	- This
	- New
	- Const
	- Super
- Features of OOPs
	- Abstraction
	- Encapsulation
	- Inheritance
	- Polymorphism
- Dynamic Binding
- Message Passing
- Templates
- File Handling
- Error and exceptions

## What is OOP?
Object-Oriented Programming is a methodology or paradigm to design a
program using classes and objects. It simplifies the software development
and maintenance by providing some concepts defined below :


## What is a class?
Class is a user-defined data type which defines its properties and its
functions. Class is the only logical representation of the data. For
example, Human being is a class. The body parts of a human being are its
properties, and the actions performed by the body parts are known as
functions. The class does not occupy any memory space till the time an
object is instantiated.

C++ Syntax (for class):
```
class student{
public:			//access modifier
	int id; 	// data member
	int mobile;
	string name;
	int add(int x, int y){ // member functions
		return x + y;
	}
};
```

## What is an object?
Object is a run-time entity. It is an instance of the class. An object can
represent a person, place or any other item. An object can operate on
both data members and member functions.

C++ Syntax (for object):
```student s = new student();```

## Analogy
Object is a blue print of newly created things that contains variables for storing data (characteristics) & functions (behavior) which is applied on that data.

- It is a instance of class
- They are inherit from System.Object
- Object is an entity which has a well-defined structure & behavior.

Object has characteristics as :
- State
- Behavior
- Identity
- Responsibility
Example - a car, a person, etc.