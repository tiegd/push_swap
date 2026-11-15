*This project has been created as part of the 42 curriculum by gaducurt.*

# push_swap

## Description

**push_swap** is an algorithmic project from the 42 curriculum. The goal is to sort a list of unique integers using two stacks, **a** and **b**, and a limited set of instructions, while producing the smallest possible number of operations.

At the start, stack **a** contains the integers given as arguments (the first argument is at the top) and stack **b** is empty. The program prints, one per line, the instructions that sort stack **a** in ascending order (smallest number at the top).

### Allowed instructions

| Instruction | Effect |
|---|---|
| `sa` / `sb` / `ss` | Swap the first 2 elements of stack a / b / both |
| `pa` / `pb` | Push the top of b onto a / the top of a onto b |
| `ra` / `rb` / `rr` | Rotate stack a / b / both (top element becomes the last) |
| `rra` / `rrb` / `rrr` | Reverse rotate stack a / b / both (last element becomes the top) |

### Algorithm: radix sort

I chose a **radix sort** (LSD, base 2), which works naturally with two stacks by using **bitwise operations and bit shifting**:

1. Each number is replaced by its rank in the sorted list (0 to n-1), so that negative values are handled and only the minimum number of bits is needed.
2. For each bit, from the least significant to the most significant, every element of stack a is examined:
   - if the current bit is `0`, the element is pushed to stack b (`pb`);
   - if the bit is `1`, the element stays in a and is rotated (`ra`).
3. Once stack a has been fully processed, everything in b is pushed back to a (`pa`).
4. After the last bit, stack a is sorted.

Small stacks (2, 3 and 5 elements) are handled by dedicated hard-coded cases to respect the strict limits of the subject.

### Complexity

- **Time:** O(w · n), where n is the number of elements and w the number of bits needed to represent the largest rank (w = ⌈log₂ n⌉).
- **Space:** O(n) for the two stacks (the ranking step also uses O(n)).

### Benchmarks required by the subject

| Size | Limit for full validation |
|---|---|
| 3 numbers | ≤ 3 instructions |
| 5 numbers | ≤ 12 instructions |
| 100 numbers | < 700 instructions |
| 500 numbers | ≤ 5500 instructions |

## Instructions

### Compilation

```bash
make        # builds push_swap
make clean  # removes object files
make fclean # removes object files and the binary
make re     # rebuilds everything
```

The project is compiled with `cc -Wall -Wextra -Werror`.

### Execution

```bash
./push_swap 2 1 3 6 5 8
```

Output:

```
sa
pb
pb
pb
sa
pa
pa
pa
```

### Error handling

If no argument is given, nothing is displayed. In case of error (non-integer argument, value outside the `int` range, duplicates), the program prints `Error` followed by a newline on the standard error.

```bash
./push_swap 0 one 2 3
Error
```

### Testing

Count the instructions:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```

Verify the result with the checker provided by the school:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
```

Test on random inputs (for example 100 and 500 numbers):

```bash
ARG=$(shuf -i 0-9999 -n 500 | tr '\n' ' '); ./push_swap $ARG | wc -l
```

## Resources

- [Radix sort — Wikipedia](https://en.wikipedia.org/wiki/Radix_sort)
- [Time complexity / Big O notation — Wikipedia](https://en.wikipedia.org/wiki/Big_O_notation)
- [Bitwise operation — Wikipedia](https://en.wikipedia.org/wiki/Bitwise_operation)
- Project subject: *Push_swap — Because Swap_push doesn't feel as natural* (42 curriculum)

### Use of AI

AI was used for the following tasks:

- <describe the tasks, e.g. writing this README, explaining complexity notions, suggesting test ideas>

All AI-generated content was reviewed, tested and fully understood before being used.
