#include <list>
#include <iostream>

using namespace std;

int main() {
    // Create a linked list of integers
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Display the elements in the list
    std::cout << "Elements in the linked list: ";
    for (const int& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Remove an element from the list
    myList.remove(20);

    // Display the elements after removal
    std::cout << "Elements after removing 20: ";
    for (const int& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}