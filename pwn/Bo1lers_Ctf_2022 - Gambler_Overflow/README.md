# Bo1lers CTF 2022 - Gambler_Baby


<img src="https://github.com/FrancescoPaterna/writeups/blob/a59a729114cd43306fca8e131cde191ebe7ef42c/pwn/Bo1lers_Ctf_2022%20-%20Gambler_Overflow/Screenshots/gambler_overflow.png" align="left" width="50%" />

### Challenge Description
Nothing special, 
we have to pwn a roulette who give us 4 random letters.
Unlike gambler_baby, this time the random function is seeded, but due to the title of the challenge, we could think it's a buffer 
overflow challenge
<br><br><br><br><br><br><br><br>




### Solution

I've used GHIDRA to reverse the code, inside that I have seen in the function 'casino' that the strcmp variables
could be pwned with a buffer overflow. We just need to put inside the two variables 2 same word of eight letter
(I choose the word 'jackpot'). 
I make a bash script who gives me 100 output formed by 'jackpot' + \x00 + 'jacpot' 
\x00 is the String terminator in hex. 
The bash release the string with the interpretation of the following backslash escapes enabled

<img src="https://github.com/FrancescoPaterna/writeups/blob/a59a729114cd43306fca8e131cde191ebe7ef42c/pwn/Bo1lers_Ctf_2022%20-%20Gambler_Overflow/Screenshots/ghidra.png"/>



at the end i call the gambler_overflow.sh and put the output in the stdin with the code

```bash
./gambler_overflow < <(./gambler_destroyer2.sh)
```

<img src="https://github.com/FrancescoPaterna/writeups/blob/a59a729114cd43306fca8e131cde191ebe7ef42c/pwn/Bo1lers_Ctf_2022%20-%20Gambler_Overflow/Screenshots/gambler_overflow_pwned.png" width="50%" />

<br><br>
eazy job
