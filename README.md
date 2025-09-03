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
Input details:
yearsCompleted → Number of years employee has worked
hasResearchProjects → Worked on research projects (Yes/No)
hasNewProjectPipeline → New research project in pipeline (Yes/No)
profitGenerated → Profit generated in Rs
currentSalary → Current salary of employee
Call function checkIncrement() by passing addresses of above values.
Inside function:
Initialize conditionsMet = 0
If yearsCompleted >= 1, increment conditionsMet.
If hasResearchProjects == true, increment conditionsMet.
If hasNewProjectPipeline == true, increment conditionsMet.
If profitGenerated > 100000, increment conditionsMet.
If conditionsMet >= 3:
Increase salary by 20%
Print "Eligible for increment" and new salary
Else:
Print "Not eligible for increment" and unchanged salary
End


Reverse a String using Pointers
Start
Input a string str1.
Find length of string → n = str1.length().
Store base address of string in a pointer: ptr = &str1[0].
Display message "Reversed String".
Loop from i = n - 1 to 0:
Print *(ptr + i)
After loop ends, reversed string is displayed.
End

# Conclusion
This experiment demonstrates the difference between parameter-passing methods in C++.

📦 Call by Value → Works on copies, originals remain safe.
🔗 Call by Reference → Works directly on real data, originals are modified.
✅ Key Insight:
Use Call by Value for safety (read-only operations).
Use Call by Reference for in-place updates and efficiency.
