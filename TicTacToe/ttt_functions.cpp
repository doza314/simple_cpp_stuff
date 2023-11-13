#include <iostream>
#include <vector>
#include <string>


//Prints game
void board(std::vector<char> game) {

  std::cout<<"\n  A  B  C\n";
  std::cout<<"1 ";
  std::cout<<game[0]<<"  ";
  std::cout<<game[1]<<"  ";
  std::cout<<game[2]<<"\n";

  std::cout<<"2 ";
  std::cout<<game[3]<<"  ";
  std::cout<<game[4]<<"  ";
  std::cout<<game[5]<<"\n";

  std::cout<<"3 ";
  std::cout<<game[6]<<"  ";
  std::cout<<game[7]<<"  ";
  std::cout<<game[8]<<"\n";

}

//Checks if input is equal to any previous inputs
int inputcheck(std::string input, std::vector<std::string> prev_inputs, std::vector<std::string> valid_inputs) {
  int n = 0;
  int m = 0;

    for (int j = 0; j < valid_inputs.size(); j++) {
      if (input == valid_inputs[j]) {
          m = 1;
        } 
    }

    for (int i = 0; i < prev_inputs.size(); i++) {
        if (input == prev_inputs[i]) {
          n = 1;
        } 
    }

    if (n == 1 || m == 0) { 
      return 1;
    } else if (n == 0 && m == 1) {
      return 0;
    }
}

//Checks for a winner
int wincheck (std::vector<char> game) {

  //X wins
    if (game[0] == 'X' && game[1] == 'X' && game[2] == 'X') {
    return 1;
  } else if (game[3] == 'X' && game[4] == 'X' && game[5] == 'X'){
    return 1;
  } else if (game[6] == 'X' && game[7] == 'X' && game[8] == 'X'){
    return 1;
  } else if (game[0] == 'X' && game[3] == 'X' && game[6] == 'X'){
    return 1;
  } else if (game[1] == 'X' && game[4] == 'X' && game[7] == 'X'){
    return 1;
  } else if (game[2] == 'X' && game[5] == 'X' && game[8] == 'X'){  
    return 1;
  } else if (game[0] == 'X' && game[4] == 'X' && game[8] == 'X'){
    return 1;
  } else if (game[6] == 'X' && game[4] == 'X' && game[2] == 'X'){
    return 1;
  } else if (game[0] == 'O' && game[1] == 'O' && game[2] == 'O') {
    return 2;
  } else if (game[3] == 'O' && game[4] == 'O' && game[5] == 'O'){
    return 2;
  } else if (game[6] == 'O' && game[7] == 'O' && game[8] == 'O'){
    return 2;
  } else if (game[0] == 'O' && game[3] == 'O' && game[6] == 'O'){
    return 2;
  } else if (game[1] == 'O' && game[4] == 'O' && game[7] == 'O') {
    return 2;
  } else if (game[2] == 'O' && game[5] == 'O' && game[8] == 'O'){
    return 2;
  } else if (game[0] == 'O' && game[4] == 'O' && game[8] == 'O'){
    return 2;
  } else if (game[6] == 'O' && game[4] == 'O' && game[2] == 'O'){
    return 2;
  } else {
    return 0;
  }

}
