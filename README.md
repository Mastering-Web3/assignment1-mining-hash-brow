[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/6xOl-Y1Q)

# Assignment 1

Write a program that takes some data as string input. Then it tries to find a positive number x such that when x is appended to the end of the string, the SHA256 hash of this new string is less than the target, which is

0x00000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF

Also print the time it takes to get this nonce value.

## Instructions to Run
1. Clone the repository
2. Compile and run (in Linux) : `g++ sha256.cpp mine.cpp -o nonce_finder && ./nonce_finder`

Sample Input and Output
```
Enter the input string: sadfalsfjklasjf
Achieved hash: 0000004A7EE1BDD17BDD83C1BD7CB788CFD3D5EA730D47385273168AB2F5A357
Nonce: 468920
Execution Time: 2.859217seconds
```
```
Enter the input string: asdlkfasfjlaskjf
Achieved hash: 00000CC340C935CC931ADFDB99BB9EAB77CEDC4CF32557192E13E07B2CADFE26
Nonce: 559952
Execution Time: 3.588365seconds
```

## Credits

The SHA256 implementation (sha256.cpp and sha256.h) were taken from [here](http://www.zedwood.com/article/cpp-sha256-function)
