# ROT Cipher

A ROT cipher (and decipher) in C. Reads input from STDIN and writes to STDOUT.

Only works for characters A-Z.

## Usage

```bash
Usage:
rot [-c | -d] [-r number] < STDIN > STDOUT
```
- `-c` - ciphers the input
- `-d` - deciphers the input
- `-n number` - how many characters to shift

## Testing

Compile tests with `make test` and run `./test`. If all goes well, it'll say "Tests OK!". If not, it'll greet you with assertion failures.

## License

Licensed under MIT 2018 Markus Kauppila <markus.kauppila@gmail.com>