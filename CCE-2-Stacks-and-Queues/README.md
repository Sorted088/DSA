# DSA CCE II — Stacks and Queues

Amrutvahini College of Engineering, Sangamner  
S.Y. B.Tech — Electronics and Computer Engineering, Semester III  
Subject: Data Structures and Algorithms (R25-EC-PCC-202)  
Academic Year: 2026–27

## Objective
Implement stacks and queues using arrays and linked lists, and maintain the source code with Git and GitHub.

## Programs
| Program | File | Operations |
| --- | --- | --- |
| Stack using array | `stack_array.cpp` | push, pop, peek, display |
| Queue using array | `queue_array.cpp` | enqueue, dequeue, peek, display |
| Stack using linked list | `stack_linklist.cpp` | push, pop, peek, display |
| Queue using linked list | `queue_linklist.cpp` | enqueue, dequeue, peek, display |

## Language
**C++**. These programs use `iostream` and classes, so compile with `g++`, not `gcc` as C source.

## How to run
From this folder, for example:

```bash
g++ -std=c++17 stack_array.cpp -o stack_array
./stack_array
```

On Windows PowerShell, use `.\stack_array.exe` to run the compiled program. Repeat with each file.

## Notes
The original implementations were retained; duplicate pasted source and terminal transcripts were removed. Programs use fixed demonstration inputs. The array examples have capacity 5; the linked-list stack assumes a nonempty stack when accessing the top.

## Conclusion
This activity demonstrates the LIFO behavior of stacks and FIFO behavior of queues, implemented with arrays and linked lists. GitHub provides a repository for organizing and versioning the programs.
