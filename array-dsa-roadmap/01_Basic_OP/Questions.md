# 🌟 Level 1: Fundamentals - Array Problems

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)](https://github.com/your-repo/array-dsa)
[![Problems](https://img.shields.io/badge/Problems-12-blue)](https://github.com/your-repo/array-dsa)
[![Pattern](https://img.shields.io/badge/Pattern-Basic%20Operations-orange)](https://github.com/your-repo/array-dsa)

> **Foundation problems for mastering basic array operations and traversals**

## 📋 Table of Contents

- [🎯 Overview](#-overview)
- [📚 Problem List](#-problem-list)
- [🚀 Getting Started](#-getting-started)
- [💡 Learning Objectives](#-learning-objectives)
- [📖 Problem Statements](#-problem-statements)
- [🔑 Key Concepts](#-key-concepts)
- [⏰ Time Estimates](#-time-estimates)

## 🎯 Overview

Level 1 contains **12 fundamental array problems** designed to build your foundation in:
- Basic array traversal techniques
- Element finding and searching
- Simple mathematical operations on arrays
- Index-based operations

**Prerequisites:** Basic understanding of arrays and loops  
**Target Time:** 1-2 weeks (2-3 problems per day)

## 📚 Problem List

| # | Problem Name | Difficulty | Time Complexity | Key Concept |
|---|--------------|------------|-----------------|-------------|
| 1 | Find Maximum Element | 🟢 Easy | O(n) | Single traversal |
| 2 | Find Minimum Element | 🟢 Easy | O(n) | Single traversal |
| 3 | Second Largest Element | 🟢 Easy | O(n) | Tracking multiple values |
| 4 | Third Largest Element | 🟢 Easy | O(n) | Tracking multiple values |
| 5 | Count Even and Odd Numbers | 🟢 Easy | O(n) | Conditional counting |
| 6 | Sum of All Elements | 🟢 Easy | O(n) | Accumulation |
| 7 | Average of Array Elements | 🟢 Easy | O(n) | Mathematical operations |
| 8 | Find Element at Given Index | 🟢 Easy | O(1) | Direct access |
| 9 | Linear Search | 🟢 Easy | O(n) | Sequential search |
| 10 | Count Occurrences of Element | 🟢 Easy | O(n) | Search with counting |
| 11 | Check if Element Exists | 🟢 Easy | O(n) | Boolean search |
| 12 | Find Index of Element | 🟢 Easy | O(n) | Position finding |

## 🚀 Getting Started


### 💻 How to Practice
1. **Read** the problem statement carefully
2. **Think** about the approach before coding
3. **Implement** your solution
4. **Test** with provided test cases
5. **Optimize** if possible
6. **Move** to next problem

## 💡 Learning Objectives

By completing Level 1, you will master:
- ✅ **Array traversal** using loops
- ✅ **Conditional logic** within loops  
- ✅ **Variable tracking** for multiple values
- ✅ **Mathematical operations** on arrays
- ✅ **Index validation** and bounds checking
- ✅ **Search techniques** in unsorted arrays
- ✅ **Edge case handling** in array problems

## 📖 Problem Statements

## **Problem 1: Find Maximum Element**

**Problem Statement:**
Given an array of integers, find and return the maximum (largest) element in the array.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return the maximum element in the array

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [3, 7, 1, 9, 2]
Output: 9
Explanation: 9 is the largest element in the array
```

**Test Case 2:**
```
Input: arr = [-5, -2, -10, -1]
Output: -1
Explanation: Among all negative numbers, -1 is the largest
```

---

## **Problem 2: Find Minimum Element**

**Problem Statement:**
Given an array of integers, find and return the minimum (smallest) element in the array.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return the minimum element in the array

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [8, 3, 6, 1, 9]
Output: 1
Explanation: 1 is the smallest element in the array
```

**Test Case 2:**
```
Input: arr = [15, 22, 8, 12]
Output: 8
Explanation: 8 is the smallest among all positive numbers
```

---

## **Problem 3: Second Largest Element**

**Problem Statement:**
Given an array of integers, find and return the second largest element in the array. If there is no second largest element (all elements are same or array has only one element), return -1.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return the second largest element, or -1 if it doesn't exist

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [5, 2, 8, 1, 9]
Output: 8
Explanation: 9 is largest, 8 is second largest
```

**Test Case 2:**
```
Input: arr = [7, 7, 7, 7]
Output: -1
Explanation: All elements are same, no second largest exists
```

---

## **Problem 4: Third Largest Element**

**Problem Statement:**
Given an array of integers, find and return the third largest element in the array. If there is no third largest element, return -1.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return the third largest element, or -1 if it doesn't exist

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [3, 1, 4, 1, 5, 9, 2]
Output: 4
Explanation: Distinct elements in desc order: 9, 5, 4. Third largest is 4
```

**Test Case 2:**
```
Input: arr = [10, 20]
Output: -1
Explanation: Only 2 distinct elements, no third largest exists
```

---

## **Problem 5: Count Even and Odd Numbers**

**Problem Statement:**
Given an array of integers, count how many numbers are even and how many are odd. Return both counts.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return a pair/array [evenCount, oddCount]

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [1, 2, 3, 4, 5, 6]
Output: [3, 3]
Explanation: Even numbers: 2, 4, 6 (count = 3), Odd numbers: 1, 3, 5 (count = 3)
```

**Test Case 2:**
```
Input: arr = [0, -2, 7, 11]
Output: [2, 2]
Explanation: Even numbers: 0, -2 (count = 2), Odd numbers: 7, 11 (count = 2)
```

---

## **Problem 6: Sum of All Elements**

**Problem Statement:**
Given an array of integers, calculate and return the sum of all elements in the array.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return the sum of all elements

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [1, 2, 3, 4, 5]
Output: 15
Explanation: 1 + 2 + 3 + 4 + 5 = 15
```

**Test Case 2:**
```
Input: arr = [-3, 5, -1, 8]
Output: 9
Explanation: -3 + 5 + (-1) + 8 = 9
```

---

## **Problem 7: Average of Array Elements**

**Problem Statement:**
Given an array of integers, calculate and return the average of all elements in the array. Return the result as a floating-point number.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- Array elements can be positive, negative, or zero

**Output:**
- Return the average as a double/float

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [2, 4, 6, 8]
Output: 5.0
Explanation: (2 + 4 + 6 + 8) / 4 = 20 / 4 = 5.0
```

**Test Case 2:**
```
Input: arr = [1, 2, 3]
Output: 2.0
Explanation: (1 + 2 + 3) / 3 = 6 / 3 = 2.0
```

---

## **Problem 8: Find Element at Given Index**

**Problem Statement:**
Given an array and an index, return the element at that index. If the index is out of bounds, return -1.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- An integer `index` (can be any value)

**Output:**
- Return the element at given index, or -1 if index is invalid

**Time Complexity:** O(1)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [10, 20, 30, 40, 50], index = 2
Output: 30
Explanation: Element at index 2 is 30 (0-based indexing)
```

**Test Case 2:**
```
Input: arr = [5, 15, 25], index = 5
Output: -1
Explanation: Index 5 is out of bounds for array of size 3
```

---

## **Problem 9: Linear Search**

**Problem Statement:**
Given an array and a target element, search for the target element in the array using linear search. Return true if found, false otherwise.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- An integer `target` to search for

**Output:**
- Return true if target is found, false otherwise

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [4, 7, 1, 9, 3], target = 9
Output: true
Explanation: 9 is present in the array at index 3
```

**Test Case 2:**
```
Input: arr = [2, 5, 8, 12], target = 6
Output: false
Explanation: 6 is not present in the array
```

---

## **Problem 10: Count Occurrences of Element**

**Problem Statement:**
Given an array and a target element, count how many times the target element appears in the array.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- An integer `target` to count

**Output:**
- Return the count of occurrences of target element

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [1, 3, 2, 3, 3, 5], target = 3
Output: 3
Explanation: Element 3 appears 3 times in the array
```

**Test Case 2:**
```
Input: arr = [7, 8, 9, 10], target = 6
Output: 0
Explanation: Element 6 doesn't appear in the array
```

---

## **Problem 11: Check if Element Exists**

**Problem Statement:**
Given an array and a target element, check if the target element exists in the array. Return true if it exists, false otherwise.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- An integer `target` to search for

**Output:**
- Return true if target exists, false otherwise

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [12, 5, 8, 21, 16], target = 8
Output: true
Explanation: Element 8 exists in the array
```

**Test Case 2:**
```
Input: arr = [1, 4, 7, 9], target = 3
Output: false
Explanation: Element 3 does not exist in the array
```

---

## **Problem 12: Find Index of Element**

**Problem Statement:**
Given an array and a target element, find and return the first index where the target element appears. If the element is not found, return -1.

**Input:**
- An integer array `arr` of size `n` (1 ≤ n ≤ 10^5)
- An integer `target` to search for

**Output:**
- Return the first index of target element, or -1 if not found

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Test Cases:**

**Test Case 1:**
```
Input: arr = [6, 2, 4, 2, 8], target = 2
Output: 1
Explanation: First occurrence of 2 is at index 1
```

**Test Case 2:**
```
Input: arr = [10, 20, 30], target = 25
Output: -1
Explanation: Element 25 is not found in the array
```

---

## 💡 **Hints for Implementation:**

### **General Approach:**
1. **Single Pass Problems** (Max, Min, Sum, Count): Use one loop to traverse array
2. **Search Problems**: Linear scan until element found or array exhausted
3. **Kth Largest Problems**: Track top K elements while traversing
4. **Index Problems**: Validate bounds before accessing array elements

### **Edge Cases to Consider:**
- Empty arrays
- Single element arrays  
- All elements are same
- Negative numbers
- Out of bounds indices
- Target element not present

### **Optimization Tips:**
- Use early termination in search problems
- Handle edge cases first
- Consider integer overflow for sum operations
- Use appropriate data types for results