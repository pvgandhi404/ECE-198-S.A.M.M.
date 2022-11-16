#include <iostream>

int main();
double calc_carbon_footprint();

int main() {
  double cf{calc_carbon_footprint()};
  std::cout << cf;

  return 0;
}

double calc_carbon_footprint() {
  double elec_bill{};
  double gas_bill{};
  double oil_bill{};
  double milage{};
  unsigned int small_flights{};
  unsigned int large_flights{};
  bool newspaper{false};
  bool alu_tin{false};

  double cf{};

  std::cout << "Enter your monthly electricity bill: ";
  std::cin >> elec_bill;

  std::cout << "Enter your monthly gas bill: ";
  std::cin >> gas_bill;

  std::cout << "Enter your monthly oil bill: ";
  std::cin >> oil_bill;

  std::cout << "Enter your yearly milage: ";
  std::cin >> milage;

  std::cout << "Enter your yearly number of "
            << "flights (< 4 hours): ";
  std::cin >> small_flights;

  std::cout << "Enter your yearly number of"
            << "flights (> 4 hours): ";
  std::cin >> large_flights;

  std::cout << "Do you recycle newspaper? (1 or 0): ";
  std::cin >> newspaper;

  std::cout << "Do you recycle aluminum and tin? (1 or 0): ";
  std::cin >> alu_tin;

  cf += (elec_bill + gas_bill) * 105;
  cf += oil_bill * 113;
  cf += milage * 0.79;
  cf += small_flights * 1100;
  cf += large_flights * 4400;
  if (!newspaper) {
    cf += 184;
  }

  if (!alu_tin) {
    cf += 166;
  }

  return cf;
}