# Strings
Strings are defined as a stream of characters. Strings are used to represent text and are generally represented by enclosing text within double quotes as: "This is a sample string!".

### Using Character Array
```
char str_name[size];
char str[] = "GeeksforGeeks";
char str[50] = "GeeksforGeeks";
char str[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

// Here \0 is a single character in memory, though represented by two symbols, and it indicates the end of the string. 
//To check for where a string stored in an array of characters ends, you just need to check where the NULL character occurs. “\0” is the null termination character.
```

### Using String class
The String class stores the characters as a sequence of bytes with functionality of allowing access to single byte character. Here, memory is allocated dynamically. Strings are slower when compared to implementation than character array.
```
string string_name = "Sample String";
```

## Operations on strings

### Input Functions
- **getline (cin, string str, char delim)** :- This function is used to extract characters entered by user and stores them into str until the delimitation character delim is found.
- **push_back()** :- This function is used to input a character at the end of the string.
- **pop_back()** :- Introduced from C++11(for strings), this function is used to delete the last character from the string.
- **insert()** :- Insert into string 

### Capacity Functions
- **capacity()** :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
- **resize()** :- This function changes the size of string, the size can be increased or decreased.
- **length()**:-This function finds the length of the string
- **shrink_to_fit()** :- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.
- **clear()** :- Clear string.
- **empty** :- Test if string is empty. 

### Element Access
- **operator[]** :- Get character of string 
- **at** :- Get character in string 
- **back** :- Access last character 
- **front** :- Access first character

### Iterator Functions
- **begin()** :- This function returns an iterator to beginning of the string.
- **end()** :- This function returns an iterator to end of the string.
- **rbegin()** :- This function returns a reverse iterator pointing at the end of string.
- **rend()** :- This function returns a reverse iterator pointing at beginning of string.

### Manipulating Functions
- **copy(“char array”, len, pos)** :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
- **swap()** :- This function swaps one string with other.
- **erase()** :- Erase characters from string.
- **find** :- Find content in string 
- **rfind** :- Find last occurrence of content in string
- **substr** :- Generate substring
- **compare** :- Compare strings
- **operator+** :- Concatenate strings

## Related Topics:
- Insertion and Deletion. 
- Searching a Pattern/ String hashing algorithms
	- Naiive Pattern searching
	- Rabin and Karp Algorithm
	- KMP Algorithm
	- Using STL function

## References
- https://www.geeksforgeeks.org/stdstring-class-in-c/
- https://www.cplusplus.com/reference/string/string/
