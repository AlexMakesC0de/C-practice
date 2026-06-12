# Calculator

A small command line calculator written in C, made as proof of work for my
personal development plan. It runs either with arguments or in an interactive
mode.

## Build

```
make
```

This produces a `calc` binary. Run `make clean` to remove the build files.

## Usage

Single calculation from the command line:

```
./calc 3 + 4        # 7
./calc 10 / 4       # 2.5
./calc 2 ^ 10       # 1024
./calc sqrt 9       # 3
```

Interactive mode (run with no arguments):

```
./calc
> 5 * 6
30
> sqrt 144
12
> quit
```

Type `help` inside interactive mode, or run `./calc --help`, to see the usage.

## Operators

| Operator | Meaning        |
| -------- | -------------- |
| `+`      | addition       |
| `-`      | subtraction    |
| `*`      | multiplication |
| `/`      | division       |
| `%`      | modulo         |
| `^`      | power          |
| `sqrt`   | square root    |

Note: in your shell, quote `*` (for example `./calc 6 '*' 7`) so it is not
expanded into file names.
