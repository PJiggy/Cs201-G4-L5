# Cs201-G4-L5
Cs 201 Group 4 Lab 5

Checklist:
1. Create your C++ file in VS Code.
2. Compile and run it in VS Code.
3. Take a screenshot of the output window/terminal.
4. Paste your code and the screenshot into one document (Word or PDF) and upload
it.
5. Push your completed code to your C++ lab GitHub repository. Include the
repository URL in your submission document.
Program 1 — Daily Sales Analyzer
Write a program that repeatedly reads a day’s sales (non-negative double). Use a do-while
loop so the prompt appears at least once. Use -1 as an exit value to end input.
When finished, display and also save to sales_report.txt:
- Number of days entered
- Total sales (running total)
- Average sales per day
- Highest and lowest day’s sales
Requirements:
- Reject negative inputs other than -1 (the exit value)
- Keep a running total and track min/max
- Use <fstream> to write a neatly formatted report (fixed, 2 decimals)
- Handle the case where no valid day was entered before -1
Sample Input / Output
Input:
100
200
300
-1
Output:
--- Sales Report ---
Days recorded : 3
Total sales : $600.00
Average/day : $200.00
Lowest day : $100.00
Highest day : $300.00
Program 2 — Filtered Multiplication Grid
Generate a multiplication table from 1..12 using nested for loops.
- Skip (with continue) printing any product divisible by 5 or 7.
- If any product exceeds 90, print a message and break out of the outer loop.
Output format:
a x b = product on one line per value you keep. After a row finishes, print a newline.
Optionally, also write the same output to table.txt.
Requirements:
- Use only for loops for the table
- Demonstrate both continue (to skip) and break (to stop early)
- Make the upper bound (12) a named constant
- Clean, aligned output (use setw)
Sample Input / Output
Input:
(no input, program runs automatically)
Output (excerpt):
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
...
2 x 2 = 4
2 x 3 = 6
(multiples of 5 or 7 are skipped)
...
Program ended because product exceeded 90.