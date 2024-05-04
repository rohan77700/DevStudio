# Linked List

A **linked list** is a consists of a series of nodes connected by pointers. Each node contains **data** and a **reference** to the next node in the list. Unlike **arrays, linked lists** allow for efficient **insertion** or **removal** of elements from any position in the list, as the nodes are not stored contiguously in memory.

### Linked List:
- Data Structure: Non-contiguous
- Memory Allocation: Dynamic
- Insertion/Deletion: Efficient
- Access: Sequential

### Array:
- Data Structure: Contiguous
- Memory Allocation: Static
- Insertion/Deletion: Inefficient
- Access: Random

### Types of Linked List

- Singly Linked List
- Doubly Linked List
- Circular Linked List
- Circular Doubly Linked List

### Operations of Linked List

- Linked List Insertion
- Linked List Deletion
- Search an element in a Linked List
- Find Length of a Linked List
- Reverse a Linked List

### Time Complexity

Best-case:

|                    | Accessing | Search    | Insertion | Deletion  |
| :-----------------:| :-------: | :-------: | :-------: | :-------: |
| Singly Linked List | O(1)      | O(1)      | O(1)      | O(1)      |
| Doubly Linked List | O(1)      | O(1)      | O(1)      | O(1)      |  

Worst-case:

|                    | Accessing | Search    | Insertion | Deletion  |
| :-----------------:| :-------: | :-------: | :-------: | :-------: |
| Singly Linked List | O(n)      | O(n)      | O(n)      | O(n)      |
| Doubly Linked List | O(n)      | O(n)      | O(1)      | O(1)      |

### Space Complexity

| Best-case | Worst-case |
| :-------: | :--------: |
| O(n)      | O(n)       |