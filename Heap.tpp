#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <cmath> // for floor()

template <typename T>
class Heap {
 private:
  std::vector<T> values;
  void heapify(int);

 public:
  Heap();  // constructs an empty heap

  // constructs a heap with the values from the given vector
  // the type T MUST provide comparison operators <, >, ==
  Heap(std::vector<T>);

  void insert(T);
  void remove(T);
  T getMin();
};

/*******************************/
// default constructor
/*******************************/

template <typename T>
Heap<T>::Heap() {}

/*******************************/
// constructs a heap with the values in the given vector
// the type T MUST provide comparison operators <, >, ==
/*******************************/

template <typename T>
Heap<T>::Heap(std::vector<T> start_values) {
  // copy the values into our heap vector
  for (int i = 0; i < start_values.size(); i++) {
    values.push_back(start_values.at(i));
  }

  // starting from last non-leaf node (last parent), heapify each
  // of the parents
  int initial_parent_index = floor((values.size()-1) / 2);
  for (int parent_index = initial_parent_index; parent_index >= 0;
       parent_index--) {
    heapify(parent_index);
  }
}

/*******************************/
// add values to the heap
/*******************************/

template <typename T>
void Heap<T>::insert(T value) {
   values.push_back(value); // Insert the new value at the end of the vector
  int inserted_index = values.size() - 1; // Index of the inserted value

  // Move the inserted value up the heap while it's smaller than its parent
  while (inserted_index > 0 && values[inserted_index] < values[(inserted_index - 1) / 2]) {
    // Swap the inserted value with its parent
    std::swap(values[inserted_index], values[(inserted_index - 1) / 2]);
    inserted_index = (inserted_index - 1) / 2; // Update the inserted index
  }
}

/*******************************/
/* delete values from the heap */
/*******************************/

template <typename T>
void Heap<T>::remove(T value) {
   // Find the index of the value to remove
  auto it = std::find(values.begin(), values.end(), value);

  if (it == values.end()) {
    // Value not found in the heap
    return;
  }
   // Swap the value with the last element in the heap
  std::swap(*it, values.back());
  values.pop_back(); // Remove the value from the end

  // Heapify the swapped element
  heapify(std::distance(values.begin(), it));
}
/*******************************/
// find the smallest value in the heap
/*******************************/

template <typename T>
T Heap<T>::getMin() {
  // TO BE IMPLEMENTED
   if (values.empty()) {
    throw std::out_of_range("Heap is empty");
  }

  return values[0]
}

/*******************************/
// private function to heapify a given 'node'
/*******************************/

template <typename T>
void Heap<T>::heapify(int parent_index) {
  // if we're outside the index range, return
  if (parent_index < 0 || parent_index >= values.size()) return;

  // find children indexes
  int left_child_index = parent_index * 2 + 1;
  int right_child_index = parent_index * 2 + 2;

  // if parent is larger than child, swap with smallest child
  int index_of_smallest = parent_index;

  // check if left child exists and if exists, is smallest value there
  if (left_child_index < values.size() &&
      values.at(left_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = left_child_index;
  }

  // check if left child exists and if exists, is smallest value there
  if (right_child_index < values.size() &&
      values.at(right_child_index) < values.at(index_of_smallest)) {
    // make this index the current smallest
    index_of_smallest = right_child_index;
  }

  // if parent is not smallest, swap with smallest child
  if (index_of_smallest != parent_index) {
    T temp = values.at(parent_index);
    values.at(parent_index) = values.at(index_of_smallest);
    values.at(index_of_smallest) = temp;

    // heapify the swapped index - it may need to move
    // further down the 'tree'
    heapify(index_of_smallest);
  }
}

#endif