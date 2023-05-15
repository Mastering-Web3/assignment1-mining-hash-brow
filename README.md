[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/6xOl-Y1Q)

# Assignment 1

Write a program that takes some data as string input. Then it tries to find a positive number x such that when x is appended to the end of the string, the SHA256 hash of this new string is less than the target, which is

0x00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF

Also print the time it takes to get this nonce value.

Compile and run (in Linux) : `g++ sha256.cpp mine.cpp -o nonce_finder && ./nonce_finder`

Sample Input

`sadfalsfjklasjf`

Sample Output

```
0000004A7EE1BDD17BDD83C1BD7CB788CFD3D5EA730D47385273168AB2F5A357 468920
Execution Time: 2.954565seconds
```
