# AES and Operation Modes

```bash
./ executavel [options] input_file
```

Flag|Function
  -:|:---
-h  |show help
-k <key_file>| use key_file as key input
-r  | specify amount of rounds

## How AES Works

Get a 16 byte block
xor the round key
for each step:
  substitute bytes (s-box)
  shift rows
  mix columns
  add round key
on the last step:
  substitute bytes (s-box)
  shift rows
  add round key
