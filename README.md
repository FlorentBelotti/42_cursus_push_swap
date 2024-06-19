<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <header>
        <h1>push_swap</h1>
        <p>A project to sort data on a stack using a limited set of instructions with the fewest possible operations.</p>
    </header>
    <section>
        <h2>Introduction</h2>
        <p>The <code>push_swap</code> project is designed to test and improve your algorithmic skills by sorting data using stacks. You will implement a program that sorts a stack of integers using a defined set of operations. The goal is to achieve this with the minimum number of operations.</p>
    </section>
    <section>
        <h2>Common Instructions</h2>
        <ul>
            <li>The project must be coded in C and adhere to the coding norm.</li>
            <li>Functions must handle errors gracefully without causing unexpected termination (e.g., segmentation faults).</li>
            <li>All allocated memory must be properly freed to avoid leaks.</li>
            <li>A Makefile must be provided to compile the project with the necessary flags.</li>
            <li>The Makefile should include at least the rules: <code>$(NAME)</code>, <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code>.</li>
        </ul>
    </section>
    <section>
        <h2>Mandatory Part</h2>
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
    </section>
    <section>
        <h2>Program Overview</h2>
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
    </section>
    <section>
        <h2>Compilation</h2>
        <p>To compile the project, use the provided Makefile. Ensure it includes the rules <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code> to manage the compilation process. The Makefile will compile the source files and generate the executable <code>push_swap</code>.</p>
    </section>
    <section>
        <h2>Submission and Evaluation</h2>
        <p>Submit your work on your assigned Git repository. Only the work present on the Git repository will be evaluated during the defense. Ensure all file and folder names conform to the project requirements.</p>
        <p>Prepare a wide range of tests to verify your work, considering different stack sizes and orders. The number of operations produced by your program will be compared to a maximum allowed number of operations to ensure efficiency.</p>
    </section>
</body>
</html>

