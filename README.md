# Queue Data Structures Implementation in C

This repository contains C language implementations of various Queue data structures, including Linear Queue, Circular Queue, Double-Ended Queue (Deque), and Priority Queue, completed as part of academic coursework.

---

## 👤 Author Information

* **Name:** Aditi
* **Role:** Student, Bachelor of Computer Applications (BCA)

---

## 📌 Features & Implementations

### 1. Linear Queue (`1_linear_queue.c`)
- Implements standard First-In-First-Out (FIFO) logic using an array.
- **Operations executed:**
  - Insert elements `10`, `20`, and `30`
  - Delete two elements from the front
  - Insert element `40` at the rear
  - Display the remaining elements

### 2. Circular Queue (`2_circular_queue.c`)
- Implements circular array indexing to optimize memory usage.
- **Operations executed:**
  - Insert elements `10`, `20`, `30`, and `40` (Queue Size = 5)
  - Delete two elements from the front
  - Insert elements `50` and `60`
  - Display all elements in the circular queue

### 3. Double-Ended Queue - Deque (`3_deque.c`)
- Allows insertion and deletion operations from both Front and Rear ends.
- **Operations executed:**
  - Insert `10` from Front
  - Insert `20` from Rear
  - Insert `30` from Front
  - Delete one element from Front
  - Delete one element from Rear
  - Display remaining elements

### 4. Priority Queue (`4_priority_queue.c`)
- Elements are processed based on assigned priorities (lower numeric value = higher priority rank).
- **Operations executed:**
  - Insert `10` with Priority `2`
  - Insert `20` with Priority `1`
  - Insert `30` with Priority `3`
  - Delete the element with the highest priority
  - Display remaining elements with their assigned priorities

---

## 🛠️ How to Run

### Prerequisites
Make sure you have `gcc` compiler installed on your system.

### Steps
1. Clone the repository:
   ```bash
   git clone [https://github.com/](https://github.com/)<YOUR_USERNAME>/<REPOSITORY_NAME>.git
   cd <REPOSITORY_NAME>
