#include <queue>    // for std::priority_queue
#include <vector>   // for std::vector

int kth_largest(std::vector<int> values, int k) {
  std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

  // Insert the first k elements into the min heap
  for (int i = 0; i < k; i++) {
    minHeap.push(values[i]);
  }

  // Compare the remaining elements with the top element of the min heap
  for (int i = k; i < values.size(); i++) {
    if (values[i] > minHeap.top()) {
      minHeap.pop();
      minHeap.push(values[i]);
    }
  }

  // The top element of the min heap will be the kth largest
  return minHeap.top();
}
