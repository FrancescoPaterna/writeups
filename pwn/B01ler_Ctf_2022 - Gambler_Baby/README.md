First pwn challenge in Bo1ler CTF 2022 

Nothing special, 
we have to pwn a roulette who give us 4 random letters.
We could easly see that every time we run the code, the output are always the same, so the random functon does not have the seed

I've used GHIDRA to reverse the code, inside that I have seen in the function 'casino' th lines
of code who generate the output. I rewrite the code to generate 100 correct output 
in a file called password.txt, and after that I've used a simple python instruction to 
inject the 100 correct input. 

eazy job