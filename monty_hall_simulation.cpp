#include <cstdlib>
#include <iostream>

/**
    Runs simulation of the Monty Hall problem.

    @param trials	number of trials for simulation
    @param switch_choice contestants change their selection after one door with
    a goat is revealed
    @return proportion of contestants that win a car
*/
double simulate_monty_hall(std::size_t trials, bool switch_choice) {
  unsigned long wins = 0;
  for (std::size_t i = 0; i < trials; i++) {
    short car_idx = std::rand() % 3;
    short choice_idx = std::rand() % 3;

    if (switch_choice) {
      wins += int(choice_idx != car_idx);
    } else {
      wins += int(choice_idx == car_idx);
    }
  }
  return wins / static_cast<double>(trials);
}

int main() {
  size_t trials = 5000;

  std::cout << "Starting Monty Hall Simulation" << std::endl;
  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "One car and two goats are randomly assigned behind three\n"
               "closed doors. A contestant randomly chooses one door with\n"
               "hopes of getting their dream car. Monty Hall reveals one of\n"
               "the doors that has a goat behind it. The contestant has the\n"
               "choice to switch their choice to the other door."
            << std::endl;
  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "Simulation A: Contestant keeps their initial choice"
            << std::endl;
  std::cout << "Proportion of contestants that won the car (5000 trials): ";
  std::cout << simulate_monty_hall(trials, false) << std::endl;
  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "Simulation B: Contestant chooses the other door" << std::endl;
  std::cout << "Proportion of contestants that won the car (5000 trials): ";
  std::cout << simulate_monty_hall(trials, true) << std::endl;
  return 0;
}