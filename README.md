# 🎮 Tic Tac Toe in C

A simple yet fun command-line implementation of the classic **Tic Tac Toe** game, developed in the C programming language. This project demonstrates core programming concepts such as conditionals, loops, arrays, and user input handling.

---

## 📌 Features

- ✅ Two-player gameplay (Player 1 - `X`, Player 2 - `O`)
- 🧱 Interactive ASCII-based game board
- 🧠 Win and draw detection after each move
- 🧼 Clears and updates the screen on every turn using `system("cls")`
- 💬 Input prompts for user-friendly experience

---

## 🧠 Game Logic

The game is based on a 1D character array that represents a 3×3 board. Each player chooses a position between 1–9, and the program updates the array accordingly. After each move, the game checks for a winning condition (rows, columns, diagonals) or a draw.

```c
char b[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
