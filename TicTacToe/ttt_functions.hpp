#include <vector>
#include <string>

void board(std::vector<char> game);
int inputcheck(std::string input, std::vector<std::string> prev_inputs, std::vector<std::string> valid_inputs);
int wincheck(std::vector<char> game);
