#include <iostream>
#include <list>

int main() {
    // Create a std::list and initialize it with some values
    std::list<int> myList = {10, 20, 30, 40, 50};

    // Iterating through the list using a range-based for loop
    std::cout << "Elements in the list are: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Adding elements to the front and back of the list
    myList.push_front(5);
    myList.push_back(60);

    std::cout << "After adding elements to front and back: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Removing the first and last elements
    myList.pop_front();
    myList.pop_back();

    std::cout << "After removing the first and last elements: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Inserting and erasing elements
    auto it = myList.begin();
    std::advance(it, 2); // Move iterator to the third position
    myList.insert(it, 25);
    std::cout << "After inserting 25 at the third position: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    myList.erase(it); // Erase the same position
    std::cout << "After erasing the third element: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
