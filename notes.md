# My notes on solutions in different languages

My main language is TypeScript and I know Python too, but I'm basically just messing around and trying to learn the other languages like C. There's probably some optimisations to be made everywhere, but I'm just trying my best.

Also none of them are general solutions, and work only for the specific problem.

For benchmarking purposes, I'm using Bun for TypeScript, the version of Clang that comes with a MacBook's XCode tools without any extra flags (I just run `clang [filename].c`). I have a MacBook Air M2 with 16GB RAM. The versions are latest as of whenever I post the solutions, so look at the commit history for that I suppose.

## Problem 1
A pretty simple solution, I got it fairly quickly in all languages.

## Problem 2
Similarly easy solution, got it in all langs.

## Problem 3
My first introduction to `long` in C, since the numbers were exceeding the integer limit. Otherwise a fairly simple solution.

## Problem 4
Working with strings in C is hell. I got the solution very quickly everywhere else, but I have no clue how to reverse a string in C. I eventually got the solution by simply looking up how to reverse a string in C, and copying the answer. I kind of get it, but I'll definitely need someone to explain exactly what it's doing.

It kinda makes me wanna stay away from working with strings in C, and just stick to numbers. But at the same time, I really do want to learn how C works for _everything_, not just the easy stuff. I'm addicted to the speed. Might end up returning to C for strings once I'm more comfortable with the other concepts of C.

## Problem 5
I did manage to solve this one initially myself, but I found a more efficient way to do it online, so I ended up implementing that instead. It uses the fact that the least common multiple of all numbers up to a certain number is the product of all of the primes, each to the power of the fraction log(20) / log(prime).

The math behind it seems pretty complicated, and even reading through the overview on the Project Euler website, I don't fully get it yet.

## Problem 6
Super easy problem, solved in all languages without much issue.

## Problem 7
I wrote my own prime checker function for this one in C, and I'm very proud of it. At first it was running pretty slowly, but after getting help from @MesterMan03, I got it running really quickly.

I haven't really talked about the other languages so far, so here's a small update I suppose. This was the last problem I did in Python, and it was really easy in both TS and Py. Pretty much all of them have been really easy problems so far, it's just C that's been giving me issues since I'm not nearly as comfortable in it.

## Problem 8
Had to work with strings again in C, but I've come to realise that as long as I'm not writing a function that has to return a string it's all fine and easy. Pretty easy solution to do otherwise.

## Problem 9
My initial C code was running slower than my TS code, even though they were both running the exact same code. I'm not fully sure why C was taking a longer time to run the same thing.

New plan: Solve the problem in TypeScript, read the overview to find a better algorithm or way of doing it, and attempt to implement that in C. This will kill two birds with one stone, since I'll be solving the problems, as well as implementing an algorithm (usually a more complex one) in the language I'm trying to learn.

Doing that got my C code to run 40 times faster than TS. The combination of using a faster algorithm with a compiled language means stupidly quick speeds. I love programming.

## Problem 10
The TypeScript code that I came up with seemed to be pretty good, but of course there's a far more optimised way to do it. Turns out that optimised way returns the correct value about 10 times faster in C than my original code did in TS. In my eyes, that probably means I wrote some decent TS.

I've gone ahead and replaced all of my C code with the optimised algorithms from the Project Euler overviews. I'll be leaving my TypeScript code alone.

# Problem 11
This is an incredibly annoying problem to set up. There's a 20x20 grid, which means I need to set up an array of size 20x20. Once I have that set up I don't think it's gonna be too difficult to solve.

Okay, so turns out it's actually a lot more difficult than I expected it to be, since I have to check if any adjacent values, in any direction, yield a higher maximum. My current plan is to check each direction around each element to find if there's a maximum in there somewhere.

I ended up finding an optimisation that could be good, where instead of checking all directions, I only check half of them. In my case, I'm only checking east, southeast, south and southwest. I imagine there's a better way to do it, but that's the best I could think of, and it seems to be reasonably quick.

My final solution runs in 8ms in TypeScript, and in about 200µs in C without any compiler optimisations (using default settings). I think I've successfully solved this problem as best I could.

# Problem 12

This was a relatively simple problem to solve in TypeScript, and I submitted my solution. But when it came time to implement the better algorithm in C, the algorithm provided in the overview didn't work. Turns out it's because the list of primes I had generated using the isPrime() function from Problem 7 was missing a 2. That might have been because I accidently deleted it. Anyway, my TypeScript solution runs in about 48ms, while my C solution runs in 1.3ms. All things considered, my TS solution isn't bad.

# Problem 13
This was a very fun problem to solve. For once, I can utilise the fact that large numbers tend to be inaccurate with the `int`/`number` data types.

# Problem 14
I've written a whole blog post about the Collatz Conjecture before, so it was quite a pleasant surprise to see it mentioned (the conjecture, not my blog post) in a Project Euler question. Anyway, this was a fairly simple problem to solve, and I'm quite proud of the optimisation that I made. I'm basically creating an array of Collatz sequence lengths, and if I encounter a number in my sequence that I've already found the sequence length for, then I'll simply add that length and break out of the loop. While the gains of using this method are small for small numbers, it means that I can save many steps. For example, here's the sequence for 13:

13, 40, 20, 10, 5, 16, 8, 4, 2, 1

Since while working my way up to 13, I've already encountered 5, I can simply add the sequence length for 5 instead of running those 6 steps again. In a case like 13, that's saved me nearly half the calculation!

My algorithm is still quite slow, running in ~150ms in TS, but I imagine the optimised algo in C will run much more quickly.

So it turns out that the "optimised" code might be too recursive, because it keeps throwing segfaults when I implement it in C. I've tried a bunch of methods and nothing seems to work, so I'll try implementing some of their optimisations into my original code, and write that out in C instead.

I have no clue how to implement this code in C, so I might just skip it and move on for now. I'll come back to it later when I have a bit more experience with how C works. Or I'll get bored of C and just move on with my life. Either one works, I suppose.

# Problem 15

This is proving to be quite an annoying problem to solve. I have an algorithm that goes through and generates all possible paths, but seeing how slow it is to generate stuff up to a 20 x 20 grid, I imagine there's a faster algorithm. I almost tried simulating the movement manually, but stopped when I realised how silly that was.

My main idea at the moment is that the numbers have something to do with binary, since the movement can be represented using either a 1 or a 0. I'm thinking there's a pattern or formula that relates the binary representation to the number of paths, or at the very least, will massively simplify my calculation. Currently I need a way to move individual bits around without moving the other ones.

Actually, never mind. Although the binary representation did help, it turns out the answer was in Pascal's triangle all along. Here's a brief explanation:

Let's say we're talking about a 2x2 grid. Let's assign a right movement to 1 and a down movement to 0. This means our possible movements are:

```
0011
0101
0110
1001
1010
1100
```

If we then arrange this according to the position of the left-most bit, we get:

```
0011    0101    1001
        0110    1010
                1100
```

You can see that the 1st column has 1 element, the 2nd has 2, and the 3rd has 3. I wish this pattern continued on for larger grids but unfortunately it doesn't. For example, here's the table for a 3x3 grid:

```
000111  001011  010011  100011
        001101  010101  100101
        001110  010110  100110
                011001  101001
                011010  101100
                011100  110001
                        110010
                        110100
                        111000
```

Now the 1st column has 1, 2nd has 3, 3rd has 6 and 4th has 10.

While I was trying to mess around with different things, I found that the numbers seemed to resemble polynomials of different orders, so I decided to check out Pascal's triangle to see if there was anything there. For context, here's what Pascal's triangle looks like:

```
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
       ...
```

I immediately spotted the numbers I was looking for, they were in the diagonals! The 2x2 grid path starts from the 2nd row and goes diagonally downwards and to the right with 1, 2, 3. You can see the same with the 3x3 starting from the leftmost 1 on the 3rd row and going downwards through 1, 3, 6, 10.

So it was obvious to me that the number of rows of Pascal's triangle that I'd need to generate was going to be $2*n-3$. After generating my triangle and doing some array indexing magic (C-style for loops are the best), I was able to generate my answer for this question in around 6.5ms with TypeScript. I imagine it'll be even faster with C.

I feel so smart right now.

## Problem 16

This is a problem that pushes the integer limit of programming languages. It's an easy problem to solve in Python since the default integer limit depends on the size of memory, so Python doesn't necessarily have an integer limit. In other languages like C or TypeScript, the integer limit is more strictly defined. Using the normal `number` type in TypeScript will cause the number to be rounded, so the `BigInt` type is needed. I imagine C would need to use the `long int` type, or perhaps even `long long int`.
