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

## Problem 11
This is an incredibly annoying problem to set up. There's a 20x20 grid, which means I need to set up an array of size 20x20. Once I have that set up I don't think it's gonna be too difficult to solve.

Okay, so turns out it's actually a lot more difficult than I expected it to be, since I have to check if any adjacent values, in any direction, yield a higher maximum. My current plan is to check each direction around each element to find if there's a maximum in there somewhere.

I ended up finding an optimisation that could be good, where instead of checking all directions, I only check half of them. In my case, I'm only checking east, southeast, south and southwest. I imagine there's a better way to do it, but that's the best I could think of, and it seems to be reasonably quick.

My final solution runs in 8ms in TypeScript, and in about 200µs in C without any compiler optimisations (using default settings). I think I've successfully solved this problem as best I could.

## Problem 12

This was a relatively simple problem to solve in TypeScript, and I submitted my solution. But when it came time to implement the better algorithm in C, the algorithm provided in the overview didn't work. Turns out it's because the list of primes I had generated using the isPrime() function from Problem 7 was missing a 2. That might have been because I accidently deleted it. Anyway, my TypeScript solution runs in about 48ms, while my C solution runs in 1.3ms. All things considered, my TS solution isn't bad.

## Problem 13
This was a very fun problem to solve. For once, I can utilise the fact that large numbers tend to be inaccurate with the `int`/`number` data types.

## Problem 14
I've written a whole blog post about the Collatz Conjecture before, so it was quite a pleasant surprise to see it mentioned (the conjecture, not my blog post) in a Project Euler question. Anyway, this was a fairly simple problem to solve, and I'm quite proud of the optimisation that I made. I'm basically creating an array of Collatz sequence lengths, and if I encounter a number in my sequence that I've already found the sequence length for, then I'll simply add that length and break out of the loop. While the gains of using this method are small for small numbers, it means that I can save many steps. For example, here's the sequence for 13:

13, 40, 20, 10, 5, 16, 8, 4, 2, 1

Since while working my way up to 13, I've already encountered 5, I can simply add the sequence length for 5 instead of running those 6 steps again. In a case like 13, that's saved me nearly half the calculation!

My algorithm is still quite slow, running in ~150ms in TS, but I imagine the optimised algo in C will run much more quickly.

So it turns out that the "optimised" code might be too recursive, because it keeps throwing segfaults when I implement it in C. I've tried a bunch of methods and nothing seems to work, so I'll try implementing some of their optimisations into my original code, and write that out in C instead.

I have no clue how to implement this code in C, so I might just skip it and move on for now. I'll come back to it later when I have a bit more experience with how C works. Or I'll get bored of C and just move on with my life. Either one works, I suppose.

## Problem 15

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

## Problem 17

This was a fairly simple problem to solve with just a few loops. I imagine working with strings will be a pain in C, but if I can optimise the solution to just use numbers in TypeScript then that should be pretty easy to convert over to C code. For now, I'm just creating the entire string from "one" to "onethousand" and finding the length of that. So it's optimising time!

So I was able to convert my strings into numbers, but I had to keep the 1-99 function return as an array, since it was being iterated over in the 100-999 function. However, since the majority of the numbers were in that 100-999 function, this (probably) massively reduced the amount of computation and strings stuff I was doing. I'm sure there's a way to further optimise this solution so that it can get rid of arrays altogether. For example, I can multiply each "[x]hundredand" by 99 and then add on the result from `oneToNinetyNine()` to basically add the numbers from 100-199, 200-299, ...

I'm quite happy with this optimisation for now, but I'm interested to see what the overview document has to say about it.

## Problem 18

This is either a much harder problem than anything before it, or I'm really overthinking it. I'm tempted to brute-force it and just calculate all possible paths, but I want to find a better, faster algorithm that can do that more efficiently so that I can re-use it for the later problem.

Maybe it's because binary's been on my mind lately, especially after Problem 15 and watching a Computerphile video on binary search, but I'm thinking I could convert this into a binary tree and try traversing it that way.

I didn't end up using binary trees, and I basically brute-forced it anyway. I'm completely lost on what algorithm I'm supposed to be using here that can be more efficient than just trying all the paths. Maybe a more efficient traversal algorithm?

My final strategy was to start with simply following the leftmost path, and then working my way rightwards from there. For instance, if we take the example triangle:

```
   3
  7 4
 2 4 6
8 5 9 3
```

I'd start with 3 -> 7 -> 2 -> 8, which I wrote down as "000", where "0" would signify a step to the left, and "1" would signify a step to the right. I then increased my path number from `0b000` up until `0b111`, and checked every single path along the way. Extending this to the larger triangle gave me a range from 0 to 16383, and hence the 16384 paths that were specified in the question.

Some improvements I could think of:
- Perhaps there's a way to do a proper binary tree traversal, by starting from the bottom left corner and working upwards from there.
- Maybe there's a way to start from the top, test the next 2-3 rows instead of only testing the immediately following one, and follow it down that way. This would essentially break the problem up into smaller chunks rather than trying to solve for every single value.

I know I've been falling behind on implementing solutions in C, but right now I'm more focused on simply solving the problem. I will come back and write them at some point, though.

So going through the forums, I found a commenter from 2004 (mather) who suggested a pretty good algorithm. I've implemented it and it runs about 2.5x faster than my original code in TypeScript alone. I'll leave both implementations in TS for now, but when I write the solution in C, I'll remove the TS code.

I've finally written the older solutions in C. I have no clue how I'm supposed to write the solutions to 14 and 16, since they deal with arrays and strings, which are my weaknesses in C. I guess I'll just skip them and move on, and maybe come back to them later if I'm more comfortable with them. I don't really see why I would be, considering I barely use C for anything other than Project Euler, and I get very little practice in it. But I suppose we'll see how it goes.

## Problem 19

My solution to this problem feels a little bit like cheating since I have a book (_Secrets of Mental Math_ by Arthur Benjamin and Michael Shermer) that has a way to check the day of the week that every single day in the 20th and 21st centuries is on. It's a fairly simple calculation once you know the method, and I got the solution to it fairly easily.

## Problem 20

It was a pretty simple problem, so I don't really have much to say about it. However, I'm gonna be changing the way I do things now. I'll try to solve the problem in C, and if I can't do it for whatever reason, I'll switch over to TypeScript. If I can't do it there either, then I'll use Python.

This is so that I can get as much practice as possible in C, and only fall back to the languages I'm more comfortable in if I really need to, eg. if I have to deal with parsing strings, for example. This is one of those problems, so I used TypeScript for it.

Doing things this way solves 2 problems for me: I don't have to keep rewriting code in different languages and I can just focus on the problem, and I get to focus on actually working things out in C rather than just translating pseudocode from the overview documents.

## Problem 21

I changed my mind, it's time to get Swifty! I'll be doing the problems in Swift now, because it gives me the speed close to C (especially if I use `swiftc` compiler optimisation!), while still being easy to write. It has a type syntax similar to that of Python, but the types actually matter to the compiler, unlike in TypeScript or Python. Overall, it's a solid language and I really like it.

As for the problem, it wasn't too hard. I'm happy that I made the optimisation of only checking numbers up to the square root for the divisor sum. I wanted to use an array to check if I'd already checked a value before, but I figured that doing the check each time would probably slow my program down even more, so I just checked all 10000 numbers.

Also, wow, I have not been consistent with my headings in this notes file. Some of them are `h1`s while others are `h2`s. I think I've fixed them all for now but I'll keep an eye out for if I find any others. And another thing, I'm no longer writing out the original question in comments at the top of each file. It's way too much work trying to format it correctly, for basically no reason. I'll keep the answer in a comment at the bottom, though.

## Problem 22

These problems aren't that difficult and I'm getting kind of worried that something really hard is gonna show up soon.

I solved this problem by sorting the list first, then just using the sorted list directly, rather than sorting every time I run the code. I initially created a new array with the alphabetical values for each name, and then looped through them to multiply each value by its position to get an array of name scores, while I then added up.

However, I figured doing that many loops would probably not be very efficient, and so I shortened it to looping through all of the names, calculating the alphabetical score for each name, then multiplying that by the position in the list to get the name score, and adding it to the sum. I'm not sure if this is actually faster or not, but the code runs in about 600ms on my computer. It also takes a long time to compile, which I'm assuming is because of the huge list of names, but runs extremely fast once it's compiled.

## Problem 23

How did I speak a difficult problem into existence? Well it's not really difficult as much as it is slow. I'm pretty sure there's a way faster way to solve it but I really can't think of much else right now.

Never mind, the solution was just to create an array of `true` values, and change them to `false` as they were verified to be incorrect. Then loop over the boolean array and add up the indices that were true. It still takes a while and I have no clue how to optimise it further, but that's about how far I've gotten so far. Maybe I'll come back to this in the future and try to speed it up, but for now I'm done.

Looking through the discussion threads for the problem, I found a solution that uses booleans for everything: to store the abundant values as well as the sums of abundants. And it ran way faster than my code! That's probably because booleans are faster than integers, which makes sense since it's literally just a 1 and a 0, but still.

Looking a bit further ahead, I found an even faster solution in Julia. Instead of creating an array of booleans where the abundant sums are `true`, it simply uses a function that returns whether or not a value is an abundant sum. Less loops means more speed. My compiled program now runs in around 16ms and I'm pretty happy with that.

## Problem 24

This was also a really difficult problem. I solved it by generating a bunch of random numbers that had all of the digits from 0 to 9, and putting them in a `Set`. This would prevent duplicates from forming. I then sorted the set and returned the millionth index. I don't really see how there's a way to do it other than pure brute force like I've done here. Although I bet someone smarter than me has probably figured it out already.

Well, I was right. Someone smarter than me came up with a much better solution. I'll just quote them:

> It uses the fact that permutations are lexicographically ordered. We have 9! of them starting with 0, then 9! of them starting with 1, and so on. Given that you can fit 9! about 2.8 times in 1,000,000 the first digit is a 2 and you're left with 9 more digits and you're looking for the 1,000,000 - 2*9!=274,240th permutation among them. Rinse and repeat.

Thanks kazi123_ on the Project Euler forum!

## Problem 25

It's a Fibonacci sequence problem, and the numbers to go 1000 digits! That means I get to use my super special array numbers technique! Yay!

That was sarcasm, if you couldn't tell. While I'm very happy with my array method of getting around trying to work out really really big numbers, it's a pain to implement and usually has bugs, and so I don't really like using it. Anyway, I implemented a Fibonacci algorithm with my array numbers, and got an answer. It's still running slightly slower than I'd like it to, but it's fast enough that I don't feel the need to go hunting for a faster algorithm.

I wish the Project Euler forum had more Swift answers. Everyone seems to be solving the problems in Python, C++, Java, Assembly, Julia and other languages. I haven't really seen much JS/TS or Swift.

## Problem 26

I can't believe that my 05:00 brain was able to come up with this solution. I basically used the method of division that we did in school, where we'd keep going to the next digit in the dividend to see if the divisor could go into it, and then keep track of all the remainders. Except, I did that with the whole number all at once, and just kept dividing and dividing until I either ecountered a remainder that I'd already seen before, or I simply ran out of numbers to divide. After that it was as simple as finding the longest chain, which was basically the most number of remainders I got through before enountering something that I'd already seen.

My program runs in around 8ms, and I'm pretty happy with it. I realise that I never actually bothered to check if the remainder chain I got was from a recurring cycle or not, but I got the answer and it's not that likely that I'd actually get a non-recurring chain that long anyways. Or something like that I don't really have a logical reason for why it would work right now, I'm just glad that it did.

Also, I leveled up on completing level 25, which means I'm level 1 now. Yay!

## Problem 27

This was strangely simple but also kind of hard. There's quite a lot of steps you have to think through and I'm surprised I got it as quickly as I did. It's also funny to me that I've basically memorised the `isPrime()` function after having used it so many times for Project Euler.

I'm also getting fewer errors when I write code in Swift, and I think I'm understanding the language more, so at the very least I'm making progress with that.

Anyway, code runs too slow, I'll have to find some optimisations. Actually, never mind. Compiling it with optimisations made it way faster. I keep forgetting that the `swift` command doesn't compile with optimisations on by default. I'm not too fussed about the unoptimised performance since most programs that I write in Swift (if I continue using it in the future) are gonna be compiled with optimisations. I'm only really concerned when the code takes a while to run even when compiled with optimisations on.

Basically I'm just chasing the dopamine hit I get from seeing performant code, and `swiftc -O` gives me that.

## Problem 28

This problem looked a lot harder than it was. Once I figured out a pattern for generating the numbers, getting their sequence was pretty easy, and making the sum was even easier. And since I'm only keeping track of the current position, and not worrying about the entire sequence as I'm adding the value to the sum immediately, the program runs extremely quickly, even though it's dealing with pretty large values.

## Problem 29

This feels like one of those problems that's a lot harder than it looks. Conceptually, it's pretty simple: just go through the numbers and work out the powers, removing the repeated ones. The issue arises when you end up having to deal with numbers past the integer limit of the system. I mean, sure you could solve the problem with Python or some other language that doesn't have the integer limit, but that ruins all the fun.

I have some ideas with factorisation but I'm not quite sure what they are yet, or how I'm going to implement them. Even coming back after a long break from Project Euler hasn't really given me any new ideas.

Well, I solved it using my "infinite number" array method. There was a bug where I was restructuring the array too early and it was causing issues, but I eventually managed to fix it, by moving the line calling the `restructure()` function down a line. Also, my solution is fairly quick to return a value, so I"m fairly happy with it.
