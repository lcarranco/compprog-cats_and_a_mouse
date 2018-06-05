# HackerRank - Cats and a Mouse

## Table of Contents
<!-- TOC -->

- [HackerRank - Cats and a Mouse](#hackerrank---cats-and-a-mouse)
    - [Table of Contents](#table-of-contents)
    - [Description](#description)
    - [Input Format](#input-format)
    - [Constraints](#constraints)
    - [Output Format](#output-format)
    - [Samples](#samples)
        - [Sample Input 0](#sample-input-0)
        - [Sample Output 0](#sample-output-0)
        - [Explanation 0](#explanation-0)
    - [Solving](#solving)
        - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* Two cats and a mouse are at various positions on a line
* will be given their starting positions
* Task is determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed
* If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight<br/><br/>
* Given **q** queries in the form of **x**, **y**, and **z** representing the respective positions for cats **A** and **B**, and for mouse **C**.
* If cat **A** catches the mouse first, print `Cat A`
* If cat **B** catches the mouse first, print `Cat B`
* If both cats reach the mouse at the same time, print `Mouse C` as the two cats fight and the mouse escapes

## Input Format
* The first line contains a single integer, **q**, denoting the number of queries
* Each of the **q** subsequent lines contains three space-separated integers describing the respective values of **x** (cat **A**'s location), **y** (cat **B**'s location), and **z** (mouse **C**'s location).

## Constraints
* **1 <= q <= 100**
* **1 <= x, y, z <= 100**

## Output Format
For each query, return `Cat A` if cat **A** catches the mouse first, `Cat B` if cat **B** catches the mouse first, or `Mouse C` if the mouse escapes.

## Samples

### Sample Input 0
```
2
1 2 3
1 3 2
```

### Sample Output 0
```
Cat B
Mouse C
```

### Explanation 0
* Query 0: The positions of the cats and mouse are shown below
```
              Cat B
0 ----- 1 ----- 2 ----- 3 ----- 4 ----->
      Cat A          Mouse C
```
* Cat **B** will catch the mouse first, print `Cat B` on a new line<br/><br/><br>
* Query 1: Cats **A** and **B** reach mouse **C** at the exact same time
```
             Mouse C
0 ----- 1 ----- 2 ----- 3 ----- 4 ----->
      Cat A           Cat B
```
* Because the mouse escapes, print `Mouse C` on a new line

## Solving
* Used vector for data structure

### Algorithm
1. Insert locations of Cat A, Cat B, and Mouse C as well as insert markers after each query
2. Compute the absolute value of the subtraction of Cat A and Mouse C
3. Compute the absolute value of the subtraction of Cat B and Mouse C
4. If the computation from steps 2 & 3 are equal then print `Mouse C`, else print either `Mouse A` or `Mouse B`, corresponding to the minimum absolute value afrom steps 2 & 3