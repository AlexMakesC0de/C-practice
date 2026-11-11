<div align="center">

# C-practice

**Small programs I write to practice C.**

![C11](https://img.shields.io/badge/C-C11-A8B9CC?logo=c&logoColor=white)
![Build: make](https://img.shields.io/badge/build-make-555)

</div>

This repository is where I practice C. Each program lives in its own folder with its own Makefile and README.

## Programs

| Folder | What it is |
| --- | --- |
| [`calculator/`](calculator/) | A command line calculator with a one-shot mode and an interactive mode. Supports `+ - * / % ^` and `sqrt`, and reports division by zero and negative square roots as errors. Made as proof of work for my personal development plan. |

## Getting started

You need a C compiler (`cc`, for example GCC or Clang) and `make`. On Windows, use WSL or MSYS2.

```bash
git clone https://github.com/AlexMakesC0de/C-practice.git
cd C-practice/calculator
make
./calc 3 + 4        # 7
./calc sqrt 9       # 3
./calc              # interactive mode, type 'quit' to exit
```

The code is compiled with `-Wall -Wextra -std=c11`. Run `make clean` to remove the build output. See [`calculator/README.md`](calculator/README.md) for every operator and example.

## License

This repository has no license file, so all rights are reserved by its authors.
