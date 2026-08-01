# COS214 Practical 1

Data pipeline engine (connectors, transformations, batch/streaming pipelines, checkpoints).

## Requirements

- `g++` with C++11 support
- `make`
- `valgrind` (for memory checks; typically on Linux / WSL)

## Build and run

From the project directory (`COS214_Prac1`):

```bash
make run
```

This builds the `engine` executable and runs it.

| Command | What it does |
|---------|--------------|
| `make` / `make all` | Build `engine` only |
| `make run` | Build and run `./engine` |
| `make clean` | Remove object files and binaries |

## Memory management check (Valgrind)

```bash
make mem
```

Runs Valgrind on `./engine` with full leak checking. The report is written to `valgrind_report.txt`.

View it with:

```bash
cat valgrind_report.txt
```