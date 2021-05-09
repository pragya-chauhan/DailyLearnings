# DATA STRUCTURES

## ARRAY

Contiguous area of memory containing elements of the same type. 
Constant-time Access to read and write
access its elements by their positions in O(1)O(1) time (this is called random access)


![image](https://user-images.githubusercontent.com/47843009/117512756-3d969f00-af5e-11eb-96e7-465a28532ef7.png)
![image](https://user-images.githubusercontent.com/47843009/117522531-fde1ae80-af81-11eb-9168-58597a4cc5fb.png)

## MULTI-DIMENSIONAL ARRAY

## SINGLY-LINKED LIST

Node Contains
- key
- next pointer

![image](https://user-images.githubusercontent.com/47843009/117522632-87917c00-af82-11eb-85e5-45e19ebe081b.png)

Functions you can perform on a singly-linked list

![image](https://user-images.githubusercontent.com/47843009/117522754-2027fc00-af83-11eb-9633-903e65e1cd99.png)

Runtime of all the functions

![image](https://user-images.githubusercontent.com/47843009/117522941-16eb5f00-af84-11eb-8b81-cd95fdffde76.png)

## DOUBLY LINKED LIST

We can go forward and backward.

Node Contains
- key
- next pointer
- previous pointer

![image](https://user-images.githubusercontent.com/47843009/117523252-d391f000-af85-11eb-9f8f-089a21dc8cb0.png)

Runtime of all the functions:

![image](https://user-images.githubusercontent.com/47843009/117523287-06d47f00-af86-11eb-869b-7439cd34e217.png)

## STACKS

Ex- Balanced Brackets
LIFO

![image](https://user-images.githubusercontent.com/47843009/117546863-9fa4e200-affa-11eb-8037-3a754b73c010.png)


### Stack implementation with Array

You might have over allocated
but constant time

### Stack implementation with Linked List

Additional memory for pointer
constant time

## Queue

![image](https://user-images.githubusercontent.com/47843009/117546938-f14d6c80-affa-11eb-9571-f467b932808a.png)

each operation O(1)

### Queue with Linked list with tail pointer

![image](https://user-images.githubusercontent.com/47843009/117547011-45f0e780-affb-11eb-9904-d253932dc977.png)


### Implementation with Array


## TREES

Ex- syntax tree of a sentence, BODMAS, hierarchy

only immediate nodes are children the rest a few level down are descendents but not children

Node contains
- key
- children: list of children nodes


![image](https://user-images.githubusercontent.com/47843009/117547371-44c0ba00-affd-11eb-8926-f08cc7a295f7.png)


### BINARY SEARCH TREE

BT contains:
- key
- left node
- right node

### TREE TRAVERSAL

## DYNAMIC ARRAYS

*Read again

## PRIORITY QUEUE

Generalization of a queue, queue has a begin and end for popback and pushfront. 
But in PQ there is no begin and end but a bag of values with priority

When a new element arrives we just insert(p) and if we want to withdraw we do ExtractMax() with max priority

![image](https://user-images.githubusercontent.com/47843009/117550691-95411300-b00f-11eb-9cae-5964a523d766.png)

![image](https://user-images.githubusercontent.com/47843009/117550882-c1a95f00-b010-11eb-81a4-d41ab14293c6.png)

![image](https://user-images.githubusercontent.com/47843009/117550909-e30a4b00-b010-11eb-9aac-54f454a71a60.png)


Prim: set of comp connect by wires minimize cost/legth of wire

### Naive implementation

![image](https://user-images.githubusercontent.com/47843009/117551021-89565080-b011-11eb-96ee-171f0c72f779.png)


## Efficient Implementation

![image](https://user-images.githubusercontent.com/47843009/117551163-5f515e00-b012-11eb-9f72-9f5f833adcbf.png)


