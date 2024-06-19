<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <header>
        <h1><code>push_swap</code></h1>
        <p>A project to sort data on a stack using a limited set of instructions with the fewest possible operations.</p>
    </header>
    <section>
        <h2>Introduction</h2>
        <p>The <code>push_swap</code> project is a simple and efficient algorithm exercise: sorting data. You have a set of integers, two stacks, and a set of instructions to manipulate them. Your goal is to write a program in C named <code>push_swap</code> that calculates and prints the shortest possible sequence of instructions to sort the integers passed as parameters.</p>
    </section>
    <section>
        <h2>Common Instructions</h2>
        <ul>
            <li>The project must be coded in C.</li>
            <li>Code must adhere to the coding norm.</li>
            <li>Functions should not stop unexpectedly (segmentation fault, bus error, etc.) except for undefined behaviors.</li>
            <li>All heap allocated memory must be properly freed when necessary. No leaks will be tolerated.</li>
            <li>A Makefile must be provided, compiling the source files with appropriate flags and not relinking.</li>
            <li>The Makefile must contain at least the rules: <code>$(NAME)</code>, <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code>.</li>
        </ul>
    </section>
    <section>
        <h2>Mandatory Part</h2>
        <h3>Rules</h3>
        <p>The game consists of 2 stacks named <code>a</code> and <code>b</code>:</p>
        <ul>
            <li>Initially, stack <code>a</code> contains a random quantity of positive and/or negative numbers, which cannot be duplicated.</li>
            <li>Stack <code>b</code> is empty.</li>
        </ul>
        <p>The goal is to sort the numbers in stack <code>a</code> in ascending order using the following instructions:</p>
        <ul>
            <li><code>sa</code>: Swap the first two elements at the top of stack <code>a</code>.</li>
            <li><code>sb</code>: Swap the first two elements at the top of stack <code>b</code>.</li>
            <li><code>ss</code>: <code>sa</code> and <code>sb</code> at the same time.</li>
            <li><code>pa</code>: Take the first element at the top of <code>b</code> and put it on <code>a</code>.</li>
            <li><code>pb</code>: Take the first element at the top of <code>a</code> and put it on <code>b</code>.</li>
            <li><code>ra</code>: Rotate stack <code>a</code> up by one position.</li>
            <li><code>rb</code>: Rotate stack <code>b</code> up by one position.</li>
            <li><code>rr</code>: <code>ra</code> and <code>rb</code> at the same time.</li>
            <li><code>rra</code>: Reverse rotate stack <code>a</code> down by one position.</li>
            <li><code>rrb</code>: Reverse rotate stack <code>b</code> down by one position.</li>
            <li><code>rrr</code>: <code>rra</code> and <code>rrb</code> at the same time.</li>
        </ul>
    </section>
    <section>
        <h3>Example</h3>
        <p>To illustrate the effect of these instructions, let's sort a list of integers. In this example, we consider the two stacks growing from right to left.</p>
        <pre>
Init a and b:
2
1
3
6
5
8
_ _
a b

Exec sa:
1
2
3
6
5
8
_ _
a b

Exec pb pb pb:
6 3
5 2
8 1
_ _
a b

Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b

Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b

Exec sa:
5 3
6 2
8 1
_ _
a b

Exec pa pa pa:
1
2
3
5
6
8
_ _
a b
        </pre>
        <p>This example sorts the integers in <code>a</code> in 12 instructions. Can you do better?</p>
    </section>
    <section>
        <h3>Program: <code>push_swap</code></h3>
        <ul>
            <li><strong>Program name:</strong> <code>push_swap</code></li>
            <li><strong>Files to turn in:</strong> <code>Makefile</code>, <code>*.h</code>, <code>*.c</code></li>
            <li><strong>Makefile:</strong> <code>NAME</code>, <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>re</code></li>
            <li><strong>Arguments:</strong> <code>a stack</code> - a list of integers</li>
            <li><strong>External functions allowed:</strong> <code>read</code>, <code>write</code>, <code>malloc</code>, <code>free</code>, <code>exit</code>, <code>ft_printf</code>, or equivalent functions you have coded</li>
            <li><strong>Libft authorized:</strong> Yes</li>
            <li><strong>Description:</strong> Sort the stacks</li>
        </ul>
        <p>Your program must follow these rules:</p>
        <ul>
            <li>The program must print the shortest sequence of instructions to sort stack <code>a</code>.</li>
            <li>Instructions must be separated by a newline <code>'\n'</code> and nothing else.</li>
            <li>If no parameters are specified, the program should not display anything and return the command prompt.</li>
            <li>In case of an error, display "Error" followed by a newline <code>'\n'</code> on the error output.</li>
        </ul>
        <pre>
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>
        </pre>
    </section>
    <section>
        <h2>Compilation</h2>
        <p>Compile the library using the Makefile provided, ensuring all rules like <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code> are present to manage the library properly.</p>
    </section>
    <section>
        <h2>Submission and Evaluation</h2>
        <p>Submit your work on your assigned Git repository. Only the work present on the Git repository will be evaluated during the defense. Ensure all file and folder names conform to the project requirements.</p>
        <p>Prepare a wide range of tests to verify your work, considering different stack sizes and orders.</p>
    </section>
</body>
</html>
