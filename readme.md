# Sudoku Solver in C++

## 🧩 Overview

This project is a C++ implementation of a Sudoku solver using the backtracking algorithm. It efficiently solves 9x9 Sudoku puzzles by filling empty cells while ensuring that each number from 1 to 9 appears only once in each row, column, and 3x3 subgrid.

## ⚙️ Features

- **Backtracking Algorithm**: Utilizes a depth-first search approach to explore possible solutions.
- **Formatted Output**: Displays the solved Sudoku grid with clear separation between 3x3 subgrids for easy visualization.
- **No External Dependencies**: Pure C++ code with no need for additional libraries or frameworks.

## 📦 Prerequisites

- C++ compiler (e.g., g++, clang++)
- Basic understanding of the Sudoku puzzle and backtracking algorithm

## 🛠️ How to Use

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/Priyanshu-310704/Sudoku-Solver.git
   cd Sudoku-Solver
2. **Compile the Code**:
   ```bash
    g++ -o sudoku_solver main.cpp

3. **Run the Executable**:
    ```bash
    ./sudoku_solver


4. **Input Format**:

   Enter the Sudoku puzzle as a 9x9 grid, using . for empty cells. For example:
   ```
    5 3 . . 7 . . . .
    6 . . 1 9 5 . . .
    . 9 8 . . . . 6 .
    8 . . . 6 . . . 3
    4 . . 8 . 3 . . 1
    7 . . . 2 . . . 6
    . 6 . . . . 2 8 .
    . . . 4 1 9 . . 5
    . . . . 8 . . 7 9


5. **The program will output the solved Sudoku grid or indicate if no solution exists.**

      ##🎨 Sample Output
      ```
      5 3 4 | 6 7 8 | 9 1 2
      6 7 2 | 1 9 5 | 3 4 8
      1 9 8 | 3 4 2 | 5 6 7
      ------+-------+------
      8 5 9 | 7 6 1 | 4 2 3
      4 2 6 | 8 5 3 | 7 9 1
      7 1 3 | 9 2 4 | 8 5 6
      ------+-------+------
      9 6 1 | 5 3 7 | 2 8 4
      2 8 7 | 4 1 9 | 6 3 5
      3 4 5 | 2 8 6 | 1 7 9
