# Bo1lers CTF 2022 - Gambler_Baby


<img src="https://github.com/FrancescoPaterna/writeups/blob/e03c88ad5927fc6094807f7763001b29163e6cb5/pwn/B01ler_Ctf_2022%20-%20Gambler_Baby/Screenshots/gambler_baby%20_screenshot.png" align="left" width="50%" />

### Challenge Description
Nothing special, 
we have to pwn a roulette who give us 4 random letters.
We could easly see that every time we run the code, the output are always the same, so the random functon does not have the seed
<br><br><br><br><br><br><br><br>

### Solution

I've used GHIDRA to reverse the code, inside that I have seen in the function 'casino' the lines
of code who generate the output. I rewrite the code in [password_generator.c](https://github.com/FrancescoPaterna/writeups/blob/e03c88ad5927fc6094807f7763001b29163e6cb5/pwn/B01ler_Ctf_2022%20-%20Gambler_Baby/password_generator.c) to generate 100 correct output 
in a file called password.txt <br><br>
<img src="https://github.com/FrancescoPaterna/writeups/blob/e03c88ad5927fc6094807f7763001b29163e6cb5/pwn/B01ler_Ctf_2022%20-%20Gambler_Baby/Screenshots/ghidra_screenshot.png"/>
<br><br>
after that I've used a simple python instruction [gambler_destroyer](https://github.com/FrancescoPaterna/writeups/blob/e03c88ad5927fc6094807f7763001b29163e6cb5/pwn/B01ler_Ctf_2022%20-%20Gambler_Baby/Gambler%20Destroyer.ipynb).  to 
inject the 100 correct input. <br><br>
<img src="https://github.com/FrancescoPaterna/writeups/blob/6caa751d3d302a39da2b9aa9ad18c33ff1cf16f3/pwn/B01lers_Ctf_2022%20-%20Gambler_Baby/Screenshots/gambler_baby_pwned.png" width="50%"/>
<br><br>
eazy job
