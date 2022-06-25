#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 5; i++)
        v.push_back(i);

    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;

    // Original order
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;

    // reverse order
    for (auto ir = v.rbegin(); ir != v.rend(); ir++)
        cout << *ir << " ";
    cout << endl;

    cout << v.size() << endl; // Size of an array
    int n = v.size();
    cout << v.max_size() << endl; // max. no. of elements array can hold
    cout << v.capacity() << endl; // Size of storage allocated
    v.resize(n);                  // Resize the container to n `O(n)`
    if (v.empty() == true)
        cout << "empty" << endl; // to check if vector is empty or not

    vector<int>::iterator it; // declaring an iterator

    it = v.begin();
    cout << v.front() << endl; // first element  `O(1)`
    cout << v.back() << endl;  // last element  `O(1)`
    cout << v.at(2) << endl;   // ith element  `O(1)`
    cout << v[2] << endl;      // ith element  `O(1)`

    v.push_back(8);          // push an element to back
    v.pop_back();            // removes an element from back
    v.insert(it + 2, 20);    // vector_name.insert (position, val) `O(n)`
    v.insert(it + 3, 3, 20); // vector_name.insert(position, size, val) - inserts 20 3 times
    v.erase(v.begin() + 2);  // erases 2nd element from the beggining. `O(n)`
    v.clear();               // removes all the elements from the vector

    int to_find = 5;
    if (find(v.begin(), v.end(), to_find) != v.end())
        cout << "found!" << endl; // returns and iterator if found else v.end()

    return 0;
}
