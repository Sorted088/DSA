# DSA Lab Practicals

**College:** Amrutvahini College of Engineering, Sangamner  
**Department:** Electronics and Computer Engineering  
**Class:** S.Y. B.Tech, Semester III  
**Subject:** Data Structures and Algorithms  
**Language:** C++  
**Academic Year:** 2026–27

## Objective
Implement and study fundamental data structures and algorithms using C++, including searching, sorting, hashing, linked lists, stacks and queues.

## List of programs

| No. | Practical | File | Description |
| --- | --- | --- | --- |
| 1 | Linear Search | [linear_search.cpp](linear_search.cpp) | Sequentially search an array |
| 2 | Binary Search | [binary_search.cpp](binary_search.cpp) | Search a sorted array by halving the search interval |
| 3 | Bubble Sort | [bubble_sort.cpp](bubble_sort.cpp) | Sort an array by comparing adjacent elements |
| 4 | Hash Table | [hash_table.cpp](hash_table.cpp) | Hash integer keys using modulo 7 and linear probing |
| 5 | Doubly Linked List | [double_linklist.cpp](double_linklist.cpp) | Insert, remove and traverse forward/backward |
| 6 | Stack using Array | [stack_array.cpp](stack_array.cpp) | LIFO operations with a fixed-size array |
| 7 | Stack using Linked List | [stack_linklist.cpp](stack_linklist.cpp) | LIFO operations with linked nodes |
| 8 | Queue using Array | [queue_array.cpp](queue_array.cpp) | FIFO operations with a fixed-size array |
| 9 | Queue using Linked List | [queue_linklist.cpp](queue_linklist.cpp) | FIFO operations with linked nodes |

## Compilation and execution
Use a C++ compiler such as `g++`:

```bash
g++ -std=c++17 linear_search.cpp -o linear_search
./linear_search
```

On Windows PowerShell, execute the resulting program with `.\linear_search.exe`. Replace the filename to run another practical.

## Notes
- These are separate programs, each with its own `main()`; compile and run one at a time.
- Terminal output pasted after `//output` in the submitted files was removed. The duplicate source block in the submitted queue-array file was also removed.
- Binary search expects **sorted** input.
- Linear search uses an array of capacity 20, binary search 20 and bubble sort 10. The source programs do not validate input sizes.
- The doubly linked list program demonstrates deleting a middle node, but its `remove()` implementation needs additional safeguards for an empty list or deleting first/last/only nodes.
- The linked-list stack's `pop()` and `peek()` must not be called when empty.
- Compilation was checked; not all edge cases have been tested.

## Conclusion
These practical programs demonstrate key concepts of searching, sorting and dynamic data structures and organize the implementations in a version-controlled GitHub repository.
