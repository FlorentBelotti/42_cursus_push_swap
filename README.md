<div align="left">

### 42_cursus_push_swap![---------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<div align="left">
    
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

<nav>
    
### Table of Contents![---------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#mandatory-part">Mandatory Part</a></li>
    <li><a href="#program-overview">Program Overview</a></li>
    <li><a href="#compilation">Compilation</a></li>
</ul>
</nav>

### Introduction![---------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
<section id="introduction">

<div align="justify">

The <code>push_swap</code> project is designed to test and improve your algorithmic skills by sorting data using stacks. You will implement a program that sorts a stack of integers using a defined set of operations. The goal is to achieve this with the minimum number of operations.

<div align="left">

### Mandatory Part![---------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
<section id="mandatory-part">

<h3>Rules</h3>
<p>The <code>push_swap</code> program must sort a list of integers passed as arguments using two stacks named <code>a</code> and <code>b</code>. Initially, stack <code>a</code> contains the integers, and stack <code>b</code> is empty. The program must produce the shortest sequence of operations to sort the integers in ascending order in stack <code>a</code>.</p>
<p>The allowed operations are:</p>
<ul>
    <li><code>sa</code>: Swap the first two elements at the top of stack <code>a</code>.</li>
    <li><code>sb</code>: Swap the first two elements at the top of stack <code>b</code>.</li>
    <li><code>ss</code>: <code>sa</code> and <code>sb</code> simultaneously.</li>
    <li><code>pa</code>: Push the top element of stack <code>b</code> onto stack <code>a</code>.</li>
    <li><code>pb</code>: Push the top element of stack <code>a</code> onto stack <code>b</code>.</li>
    <li><code>ra</code>: Rotate stack <code>a</code> upwards (top element becomes the last).</li>
    <li><code>rb</code>: Rotate stack <code>b</code> upwards (top element becomes the last).</li>
    <li><code>rr</code>: <code>ra</code> and <code>rb</code> simultaneously.</li>
    <li><code>rra</code>: Reverse rotate stack <code>a</code> (bottom element becomes the first).</li>
    <li><code>rrb</code>: Reverse rotate stack <code>b</code> (bottom element becomes the first).</li>
    <li><code>rrr</code>: <code>rra</code> and <code>rrb</code> simultaneously.</li>
</ul>

<div align="left">

### Program Overview![---------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
<section id="program-overview">

<p>The <code>push_swap</code> program consists of several key components:</p>
<ul>
    <li><code>error_check.c</code>: Validates the input arguments to ensure they are integers and there are no duplicates.</li>
    <li><code>pile_operations.c</code>: Contains the implementation of stack operations such as push, swap, rotate, and reverse rotate.</li>
    <li><code>pile_memory_management.c</code>: Manages the memory allocation and deallocation for the stacks.</li>
    <li><code>pile_interchanger.c</code>: Manages the transfer of elements between stacks <code>a</code> and <code>b</code>.</li>
    <li><code>sort_pile.c</code>: Implements the sorting algorithm to determine the sequence of operations needed to sort the stack.</li>
    <li><code>tiny_sort.c</code>: Provides optimized sorting methods for small sets of integers.</li>
    <li><code>sort_group.c</code> and <code>sort_rotation.c</code>: Implement advanced sorting strategies and rotations to minimize the number of operations.</li>
    <li><code>push_swap_main.c</code>: The main entry point of the program, which initializes the stacks, processes input, and invokes the sorting algorithm.</li>
</ul>

<div align="left">

### Compilation![---------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
<section id="compilation">

<p>To compile the project, use the provided Makefile. Ensure it includes the rules <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code> to manage the compilation process. The Makefile will compile the source files and generate the executable <code>push_swap</code>.</p>
</section>

