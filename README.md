# Simple Shell Project

## Project Overview

+ Project Name: Binary trees
+ Language: C
+ Group Project: Yes
+ Project has been done in teams of 2 people (**Mustapha El Alamy**, **Omar Driouch**)

## Project Description
This project aims to deepen your understanding of binary trees and related concepts in data structures and algorithms. By exploring topics such as binary trees, binary search trees, tree traversal, and associated terminology, you will gain a comprehensive grasp of these fundamental structures. 

Key learning objectives include distinguishing between a binary tree and a Binary Search Tree, understanding the potential time complexity benefits compared to linked lists, and grasping concepts like depth, height, and size of a binary tree. 

Additionally, you will explore different traversal methods and become familiar with the characteristics of complete, full, perfect, and balanced binary trees. 

Upon completion, you should be able to articulate these concepts confidently without relying on external resources like Google.

## Learning Objectives
At the end of this project, you should be able to:

Learning Objectives:

**Binary Tree Understanding:**
   - Define what a binary tree is and understand its basic structure.
   - Differentiate between binary trees and other tree structures, especially Binary Search Trees (BST).

**Time Complexity Comparison:**
   - Analyze and articulate the potential gains in terms of time complexity when using binary trees compared to linked lists.

**Binary Tree Characteristics:**
   - Explain the concepts of depth, height, and size in the context of a binary tree.
   - Understand how these characteristics contribute to the efficiency and performance of operations on binary trees.

**Tree Traversal Methods:**
   - Explore and describe different methods of traversing a binary tree, such as in-order, pre-order, and post-order traversal.
   - Understand the applications and implications of each traversal method.

**Binary Search Trees (BST):**
   - Define what a Binary Search Tree is and how it maintains the order of elements.
   - Highlight the advantages and use cases of BSTs in comparison to other types of binary trees.

**Binary Tree Types:**
   - Define and differentiate between a complete, full, perfect, and balanced binary tree.
   - Understand the characteristics and potential use cases for each type of binary tree.

**Independent Articulation:**
   - Demonstrate the ability to explain the above concepts without relying on external sources like Google.
   - Develop confidence in discussing binary trees, their properties, and related algorithms.


  
## Usage
+ Clone the project to your local machine

```
git clone https://github.com/alamy2711/binary_trees.git

```


+ Run this command to compile the project
 
```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o Output
```

## Project Data structures
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

```

**Binary Search Tree**
```
typedef struct binary_tree_s bst_t;

```
**AVL Tree**
```
typedef struct binary_tree_s avl_t;

```
**Max Binary Heap**
```
typedef struct binary_tree_s heap_t;


```

## Contributors
+ Mustapha El Alamy - [Github Profile](https://github.com/alamy2711/)
+ Omar Driouch - [LinkedIn Profile](https://www.linkedin.com/in/omar-driouch/)

