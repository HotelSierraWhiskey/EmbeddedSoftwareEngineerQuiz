# Q1.

File: `q1.c`

Function: 
```c
uint32_t *get_perfect_squares(uint32_t N, uint32_t M)
```

Requirements were to write a function that takes unsigned integer inputs N and M and returns the series of squares that can be made out of an N * M piece of paper. In my solution, if N or M collapse to 0, the final 1x1 square has been created and it's time to dynamically allocate our series to the `perfect_squares` array and return it. In any other case, we find the `small` and `large` dimensions of the current piece of paper and add the value of `small` to our static `squares` array. We then return the result of calling `get_perfect_squares` with the dimensions of our new piece of paper, which will always be small * (large - small).




# Q2

File: `q2.py`

Unfortunately, I have not yet solved this problem. I wrote some notes and python code and - hopefully - made some minor progress.

Entries in column B appear to be encoded in lowercase and capital letters, as well as in integers from 0-9 - Maybe in some sort of base-62/64 cipher. 
The difference between Tn2 and Tx2 (the only two entries with all but their middle characters the same) is 1054, 
which happens to be divisible by 62.
I briefly considered trying to brute force a number by finding the permutation of of a base-62 key that would yield the correct numerical value of a given column B entry. I figured that this would determine whether my intuition was correct, if not solve the problem outright. But brute forcing a base-62 key isn't feasible. 

At this point I figured the best way forward would be some manual analysis.
It could be a coincidence that there are 26 examples of consecutive numbers, but probably not.

The (seemingly) most significant encoded characters seem to span at least a little over 3000 numbers.
Entries in column B that map to consecutive numbers have all but one character in common. 

I figured that there might be a set of three tumbling keys: the second character of an entry being determined by the value the first,
and the third character being determined by the second. Just a thought, given that the value of the "least significant" 
character doesn't remain consistent across column A entries. The least significant character does, however, remain consistently even/ odd.

I do believe if I hammered on this problem long enough I might be able to solve it. And I regret not having the time to work on it any longer, as it's been fun. I hope I was on the right track.

