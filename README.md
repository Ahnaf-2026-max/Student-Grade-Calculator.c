# C Grade Calculator

## About the Project
A simple C program that calculates a student's average marks, assigns a grade from A+ to F, and displays pass or fail status based on the average.

## Features
- Takes the student's name as input.
- Accepts marks for three subjects.
- Calculates average marks.
- Assigns a grade based on the average.
- Displays the student's name, average, grade, and result status.

## Grading System

| Average Marks | Grade | Status |
|---|---|---|
| 80–100 | A+ | Pass |
| 70–79.99 | A | Pass |
| 60–69.99 | B | Pass |
| 50–59.99 | C | Pass |
| Above 40 but below 50 | D | Pass |
| 0–40 | F | Fail |

## How the Code Works
1. The program asks for the student's name.
2. It accepts marks for three subjects.
3. It adds the three marks and divides the total by 3 to calculate the average.
4. It uses `if-else` statements to determine the grade.
5. It displays the student's name, average, grade, and pass/fail status.

## Example Output

```text
Enter student name: John Smith
Enter marks for 3 subjects: 80 70 90

--- Student Result ---
Name: John Smith
Average: 80.00
Grade: A+
Status: Pass
```

## Concepts Used
- Variables and data types
- `printf()` and `scanf()`
- Arithmetic operations
- `if-else` statements
- Basic input and output

## How to Run
1. Install Code::Blocks or another C compiler.
2. Open the C source file (`main.c`).
3. Build and run the program.
4. Enter the student's name and marks for three subjects.

## Limitations
- Calculates results for one student at a time.
- Does not save results to a file.
- Uses a predefined grading system.
- Does not currently validate whether marks are between 0 and 100.

## Future Improvements
- Add input validation.
- Support more subjects.
- Manage multiple student records.
- Save results to a file.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Author
Created as a beginner C programming project for learning and practice.

