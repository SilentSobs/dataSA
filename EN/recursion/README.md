# Recursion in Programming

Recursion is a programming technique in which a function calls itself. It is a powerful technique that can be used to solve complex problems.

## How to use recursion to add two numbers?

To use recursion to add two numbers, we can follow these steps:

1. Create a function named "Sum" that accepts two numbers.
2. Create a base case. The base case is the condition where the problem is solved. In this case, the base case occurs when one or both numbers are zero.
3. Create a recursive case. The recursive case is the condition where we call the function on itself to solve the problem. In this case, the recursive case occurs when both numbers are not zero.

## Example

Here is an example of how we can use recursion to add two numbers:

```cpp
#include <iostream>
using namespace std;

// Sum function definition
int Sum(int a, int b)
{
  // If 'a' is zero, return 'b'
  if (a == 0)
    return b;
  // If 'b' is zero, return 'a'
  else if (b == 0)
    return a;

  // Otherwise, return the sum of a and b
  else
    return a + b;
}

int main()
{
  // Initialize numbers
  int x, y, Result;

  // Get input from user
  cout << "\nEnter 2 numbers:";
  cin >> x >> y;

  // Call Sum and print the result
  Result = Sum(x, y);
  cout << "\nSum = " << Result;

  return 0;
}

How it works?
When we call Sum(x, y), the function checks for a == 0 and b == 0. If a == 0, the function returns b. If b == 0, the function returns a. Otherwise, the function returns a + b.

Example
For example, let's say that x = 2 and y = 3. When we call Sum(x, y), the function checks for a == 0 and b == 0. Both numbers are not zero, so the function returns a + b, which is 2 + 3 = 5.

How to get started?
If you are a beginner, it can be difficult to start with recursion. Here are some tips on how you can get started:

First, understand the principles of recursion. You can find many resources online or in books.
Once you understand the principles, start small. Create a function that solves a simple problem with a base case and a recursive case.
Once you solve a simple problem, gradually work on more complex problems.