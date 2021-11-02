# Monty Hall Simulation

A simulation for the famous [Monty Hall Problem](https://en.wikipedia.org/wiki/Monty_Hall_problem). This program has been compiled and tested on Linux, Mac, and Windows environments

## Building from Source

Build the program from source with the following command:

```bash
g++ -o monty_hall_simulation monty_hall_simulation.cpp
```

## Usage

Execute the compiled program and observe the output stream in the terminal.

```bash
./monty_hall_simulation
```

By default, the program runs 5000 trials of contestants who keep their first choice among the three doors and another 5000 trials of contestants who change their decision to the remaining unopened door. To adjust the number of trials, change the value of `trials` in the source program.