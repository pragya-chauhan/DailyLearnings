
# DSA @ UC SanDiego


## How to solve Algorithms?
Reading problem statement: 

 - Input format
 - Output format
 - Constraints
 - Sample

Designing an algorithm:

 - Write Pseudocode
 ```
	SumOfTwoDigits(a,b)
	return(a+b)
```

Implementing an algorithm:
Testing and debugging your program
Submitting your program to the grading system.
## Examples and key concepts
 1. Sum of Two Numbers
 2. MaxPairwiseSum
 3. Fibonacci Series
 	- NAIVE ALGORITHM
 	- So if n is 0, we're supposed to return 0. And if n is 1, we're supposed to return 1. So we could just start with a case that says if n is at most 1, we're going to return n. Otherwise, we're supposed to return the sum of the n- 1, and n- 2 Fibonacci numbers. So we can just compute those two recursively, add them together, and return them. So, this gives us a very simple algorithm four lines long that basically took the definition of our problem and turned it into an algorithm that correctly computes the thing it's supposed to.
 	- We're going to let T(n) denote the number of lines of code that are executed by this algorithm on input n.  So if n is at most one, the algorithm checks the if case, goes to the return statement, and that's two lines of code. If n is at least two, we go to the if case. We go to the else condition, and then run a return statement. That's three lines of code. However ,in this case we also need to recursively compute the n-1, and n-2 Fibonacci numbers. So we need to add to that however many lines of code those recursive calls take. it's equal to T(n) minus one plus T(n) minus two plus three. So a nice recursive formula.
 	- T(100) is already 1.77 times 10 to the 21. 1.77 sextillion. This is a huge number. Now, suppose we were running this program on a computer that executed a billion lines of code a second. It ran it at a gigahertz. It would still take us about 56,000 years to complete this computation.
 	- So, if we want to compute the n'th Fibonacci number, we need to make recursive calls to compute the n-1,and n-2 Fibonacci numbers. To compute the n-1, we need the n-2 to the n-3. To compute the n-2, we need the n-3, and n-4, and it just keeps going on and on. From there we get this big tree of recursive calls.
 	- We're computing Fn-3, three separate times in this tree. And it's this computing the same thing over and over again that's really slowing us down. And to make it even more extreme, let's blow up the tree a little bit more. Fn-4 actually gets computed these five separate times by the algorithm.
 	- ![image](https://user-images.githubusercontent.com/47843009/117183698-d8984900-ada5-11eb-88fc-b04b4d47c118.png)
	- EFFICIENT ALGORITHM
	- You start off by writing zero and one because those are the first two. The next one going to be zero plus one, which is one. The next one is one plus one which is two, and one plus two, which is three, and two plus three, which is five. And at each step, all I need to do is look at the last two elements of the list and add them together. So, three and five are the last two, I add them together, and I get eight. And, this way, since I have all of the previous numbers written down, I don't need to do these recursive calls that I was making in the last lecture, that were really slowing us down. So, let's see how this algorithm works. What I need to do is I need to create an array in order to store all the numbers in this list that I'm writing down. The zeroth element of the array gets set to zero, the first element gets set to one, that's to set our initial conditions. Then as i runs from two to n, we need to set the ith element to be the sum of the i minus first and i minus second elements. That correctly computes the ith Fibonacci number.
	- *NOTE:* Design an algorithm to solve a problem by solving a smaller instance of the same problem, unless the problem is so small that we can just solve it directly. We call this technique **recursion**.
		- Each recursive call should be on a smaller instance of the same problem, that is, a smaller subproblem.
		- The recursive calls must eventually reach a base case, which is solved without further recursion.
		- **Memoization**: We can use a technique called **memoization** to save the computer time when making identical function calls. Memoization (a form of caching) remembers the result of a function call with particular inputs in a lookup table (the "memo") and returns that result when the function is called again with the same inputs.
		- Memoization and bottom-up are both parts of Dynamic Programming.
	-	Ex: Palindrome, Fibonacci, Factorial, 
 4. Greatest Common Divisor: It is the largest common integer that divides num and den of a fraction. Efficient algo: Euclidean algo
 
 ## Big O Notation
 - Asymptotic Notation
	-	computing runtimes is hard, in that if you really, really want to know how long a particular program will take to run on a particular computer, it's a huge mess. It depends on knowing all kinds of fine details about how the program works. And all kinds of fine details about how the computer works, how fast it is, what kind of system architecture it is. It's a huge mess. And we don't want to go through this huge mess every single time we try to analyze an algorithm. So, we need something that's maybe a little bit less precise but much easier to work with.
	-	we come up with a measure of runtime complexity that ignores all of these constant multiples, where running in time n and in running in time 100 times n are sort of considered to be the same thing, then we don't have to worry about all of these little, bitty details that affect runtime.
	-	there's a problem with this idea, if you look at it sort of by itself, that if you have runtimes of one second or one hour or one year, these only differ by constant multiples. A year is just something like 30 million seconds.
	-	We're going to look at what are known as asymptotic runtimes. These ask, how does the runtime scale with input size? As the input size n gets larger, does the output scale proportional to n, maybe proportional to n squared? Is it exponential in n? All these things are different. And in fact they're sort of so different that as long as n is sufficiently large, the difference between n runtime and n squared runtime is going to be worse than any constant multiple.
	-	The first thing that it does for us is it clarifies growth rate. As I've said before, often what we care about is how does our runtime scale with the input size. And this is sort of an artifact to the fact that we often really care about what happens when we put really, really, really big inputs to our algorithm. How big can we deal with, before it starts breaking down? The second thing it does for us is that it cleans up notation.
	-	Big-O is incredibly useful, we are going to be using it for basically everything in this course, but it does lose a lot of information about your runtime. It forgets about any constant multiples. So, if you have two algorithms, and one of them's a hundred times faster, they have the same Big-O But, in practice, if you want to make things fast, a factor of 100 is a big deal. Even a factor of two is a big deal. And so, if you really want to make things fast, once you have a good asymptotic runtime, you then want to look into the nitty-gritty details. Can I save a factor of two here? Can I rearrange things to make things run a little bit smoother? Can I make it interact better with the memory hierarchy?
### Common Rules:

