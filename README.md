# 30 day challange in C++

If you want to really learn a programming language, a good way is to do the 30 day 
challange on https://www.hackerrank.com.

Here are my solutions for the last 15 or so days. The first weeks are actually quite trivial.

## DAY 12: Inheritance
You are given two classes, Person and Student, where Person is the base class and Student 
is the derived class. Completed code for Person and a declaration for Student are provided 
for you in the editor. Observe that Student inherits all the properties of Person.

## DAY 13: Abstract Classes
Given a Book class and a Solution class, write a MyBook class that does the following:
* Inherits from Book
* Has a parameterized constructor taking these parameters: Title, Author, Price
* Implements the Book class' abstract display() method so it prints these lines: Title, Author, Price

## DAY 18: Stacks and Queues
Today we're learning about Stacks and Queues. A palindrome is a word, phrase, number, or other 
sequence of characters which reads the same backwards and forwards. Can you determine if a given string,

To solve this challenge, we must first take each character in, enqueue it in a queue, and also push that 
same character onto a stack. Once that's done, we must dequeue the first character from the queue and 
pop the top character off the stack, then compare the two characters to see if they are the same; as 
long as the characters match, we continue dequeueing, popping, and comparing each character until our 
containers are empty (a non-match means isn't a palindrome). Write:

A void pushCharacter(char ch) method that pushes a character onto a stack.
A void enqueueCharacter(char ch) method that enqueues a character in the instance variable.
A char popCharacter() method that pops and returns the character at the top of the instance variable.
A char dequeueCharacter() method that dequeues and returns the first character in the instance variable.

    18-queueAndStack.cpp

## DAY 21: C++ Generics
Today we're discussing Generics. Write a single generic function named *printArray*. This 
function must take an array of generic elements as a parameter (the exception to this 
is C++, which takes a vector). The locked Solution class in your editor tests your function.

    21-generics.cpp
    
## DAY 22: Binary Search Trees - Height
The height of a binary search tree is the number of edges between the tree's root 
and its furthest leaf. You are given a pointer, root, pointing to the root of a binary 
search tree. Complete the getHeight function provided in your editor so that it returns 
the height of the binary search tree.

    22-binarySearchTree-height.cpp

## DAY 23: Binary Search Trees - Travers
we're going further with Binary Search Trees. A level-order traversal, 
also known as a breadth-first search, visits each level of a tree's nodes from left to 
right, top to bottom. You are given a pointer, pointing to the root of a binary search 
tree. Complete the *levelOrder* function provided in your editor so that it prints the 
level-order traversal of the binary search tree.

    23-binarySearchTree-traversal.cpp
