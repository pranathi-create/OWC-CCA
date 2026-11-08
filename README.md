# OWC CCA - C++ Open Ended Experiments

This folder contains 15 separate C++ programs based on the supplied OWC CCA PDF.

## Requirements
- Visual Studio Code
- A C++ compiler (g++ / MinGW-w64 on Windows)

## Compile and run (Windows PowerShell / VS Code terminal)
Open this folder in VS Code. For example, to run Question 1:

```powershell
g++ Q01_Shape_Area_Virtual_Function.cpp -o q1.exe
.\q1.exe
```

Repeat with the matching filename and executable name for each question.

## Input formats
1. Shape: `Circle` then radius, OR `Rectangle` then length and breadth.
2. Employee: `Developer` or `Manager`, then basic salary and bonus/allowance.
3. Vehicle: `Bike` / `Car` / `Bus`, then brand and model (single words).
4. Sorting: first n, then choice (1 integer / 2 floating point), then n values.
5. Calculator: two numbers.
6. Payment: `UPI`, `CreditCard`, or `Cash`, then amount.
7. Banking: `Savings` / `Current` / `FixedDeposit`, then balance and interest rate.
8. Online payment: `UPI` then amount; `Card` or `NetBanking` then amount and charge percentage.
9. Two integers.
10. One index (array is prefilled with 10 20 30 40 50).
11. Balance then withdrawal amount.
12. Enter PIN up to three times (correct PIN is 1234).
13. Five subject marks.
14. Price, quantity, stock.
15. Age, consultation charge, lab charge, medicine unit price, medicine quantity.

## Important notes
- The PDF gives sample test cases, but some implementation details are not specified (for example Manager allowance, Current Account interest, UPI/NetBanking transaction rates, and hospital medicine quantity). These programs use straightforward assumptions and keep the values/input format easy to test.
- Question 13 uses a simple grade scale: A >= 80, B >= 70, C >= 60, D >= 40, otherwise F.
- Question 15 takes medicine unit price and quantity separately so invalid quantity can be checked. To reproduce the PDF's sample bill of 4000, enter age 45, consultation 500, lab 1500, medicine unit price 2000, quantity 1.
