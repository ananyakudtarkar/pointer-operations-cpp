## Pointer Operations in C++
# Aim
To study and implement pointer operations in C++ and understand the difference between call by value and call by reference parameter-passing methods.

# Theory
In C++, the way we pass parameters to functions determines whether changes inside the function affect the original variables.
# Call by Value:
Definition: A copy of the actual parameter is passed to the function.
Effect: Changes happen only on the copy → originals remain unchanged.
Working: Function operates in its own scope and does not affect caller variables.
# Call by Reference
Definition: The address or reference of actual parameters is passed, allowing direct modification of originals.
Effect: Changes done inside the function reflect in the caller variables.
Working: Function receives pointers (or references) → dereferences them to access and modify actual memory.


# Algorithms
Employee Salary Increment Check
Start
Input details: <br>
yearsCompleted → Number of years employee has worked <br>
hasResearchProjects → Worked on research projects (Yes/No) <br>
hasNewProjectPipeline → New research project in pipeline (Yes/No) <br>
profitGenerated → Profit generated in Rs <br>
currentSalary → Current salary of employee <br>
Call function checkIncrement() by passing addresses of above values. <br>
Inside function: <br>
Initialize conditionsMet = 0 <br>
If yearsCompleted >= 1, increment conditionsMet. <br>
If hasResearchProjects == true, increment conditionsMet. <br>
If hasNewProjectPipeline == true, increment conditionsMet. <br>
If profitGenerated > 100000, increment conditionsMet. <br>
If conditionsMet >= 3: <br>
Increase salary by 20% <br>
Print "Eligible for increment" and new salary <br>
Else: <br>
Print "Not eligible for increment" and unchanged salary <br>
End <br>


Reverse a String using Pointers<br>
Start<br>
Input a string str1.<br>
Find length of string → n = str1.length().<br>
Store base address of string in a pointer: ptr = &str1[0].<br>
Display message "Reversed String".<br>
Loop from i = n - 1 to 0:<br>
Print *(ptr + i)<br>
After loop ends, reversed string is displayed.<br>
End<br>

# Conclusion
This experiment demonstrates the difference between parameter-passing methods in C++.

