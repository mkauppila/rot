# ROT Cipher

A ROT cipher (and decipher) in C. Reads input from STDIN and writes to STDOUT.

Only works for characters A-Z.

## Usage

```bash
Usage:
rot [-cd] < STDIN > STDOUT
```
- `-c` option ciphers the input
- `-d` option deciphers the input

## Testing

Compile tests with `make test` and run `./test`. If all goes well, it'll say "Tests OK!". If not it'll greet you with assertion failures.

## License

Licensed under MIT 2018 Markus Kauppila <markus.kauppila@gmail.com>