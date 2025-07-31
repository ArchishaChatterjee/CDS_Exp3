# EXPERIMENT 3: Conditional Statements in C++

## Aim
- To study and implement conditional statements in C++.
- To use `if`, `else if`, and `else` to control the flow of a program based on logical conditions.

## Software
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Conditional Statements in C++
Conditional statements are used to perform different actions based on different conditions. These are essential for making decisions within a program.

C++ provides the following conditional constructs:
- `if` statement
- `if...else` statement
- `else if` ladder
- Nested `if` statements
- `switch` statement (for multi-way branching)

These allow programmers to control which blocks of code get executed depending on the outcome of a condition.

---

## Program 1: Check Whether a Number is Positive or Not

### Algorithm
1. Start  
2. Declare an integer variable `num`  
3. Read the value of `num` from the user  
4. If `num > 0`, print "Positive"  
5. Else if `num < 0`, print "Negative"  
6. Else, print "Zero"  
7. End

---

## Program 2: Find the Average of 5 Subject Marks and Print Result

### Algorithm
1. Start  
2. Declare five variables to store marks and a variable for average  
3. Read marks for all five subjects from the user  
4. Calculate total by adding all marks  
5. Compute average as `total / 5`  
6. If average ≥ 50, print "Pass"  
7. Else, print "Fail"  
8. End

---

## Program 3: Determine the Quadrant of a Point Based on Coordinates

### Algorithm
1. Start  
2. Declare two variables `x` and `y` for coordinates  
3. Read values of `x` and `y` from the user  
4. Use conditional checks:  
   - If `x > 0` and `y > 0`, print "Quadrant I"  
   - Else if `x < 0` and `y > 0`, print "Quadrant II"  
   - Else if `x < 0` and `y < 0`, print "Quadrant III"  
   - Else if `x > 0` and `y < 0`, print "Quadrant IV"  
   - Else if `x == 0` and `y == 0`, print "Origin"  
   - Else if `x == 0`, print "On Y-axis"  
   - Else if `y == 0`, print "On X-axis"  
5. End

---

## Functions

- Use conditional logic to compare values and make decisions.
- Apply multiple `if-else` statements to handle more than two conditions.
- Handle input-based decisions like checking sign, calculating pass/fail, and identifying position.

## Conclusion
Through this lab, I learned how to use conditional statements in C++ to make decisions based on user input. I implemented conditions to check whether a number is positive, determine pass/fail status from marks, and locate a poi
