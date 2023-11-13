#include <iostream>
#include "ttt_functions.hpp"


int main() {

  //Variable initializations
    std::vector<char> game = {'-' ,'-', '-', 
  '-', '-', '-',
  '-', '-', '-'};

    std::vector<std::string> inputs = {};
    std::vector<std::string> valid_inputs = {"A1", "A2", "A3", "B1", "B2", "B3", "C1", "C2", "C3" };

    int turns = 0;
    std::string input1;
    std::string input2;
    int check = inputcheck(input1, inputs, valid_inputs);
    int checkwin = wincheck(game);

    std::cout<<"======================\n";
    std::cout<<"     Tic Tac Toe!     \n";
    std::cout<<"======================\n\n";

  //Function calls

    while (checkwin == 0) {

    jump1:
    board(game);
    std::cout <<"\nPlayer 1, enter the name of a space to place an X: ";
    std::cin >> input1;
    check = inputcheck(input1, inputs, valid_inputs);
    
    if (check == 0) {
      if (input1 == "A1") {
            game[0] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "A2") {
            game[3] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "A3") {
            game[6] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "B1") {
            game[1] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "B2") {
            game[4] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "B3") {
            game[7] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "C1") {
            game[2] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "C2") {
            game[5] = 'X';
            inputs.push_back(input1);
            turns ++;
        } else if (input1 == "C3") {
            game[8] = 'X';
            inputs.push_back(input1);
            turns ++;
        }
  } else if (check == 1){
        std::cout<<"Invalid input!\n";
        std::cout<<"Try again!\n";
        goto jump1;
        break;
    }

    checkwin = wincheck(game);
    if (checkwin == 1 || checkwin == 2) {
        goto jump3;
    } else if (turns == 9) {
        goto jump3;
    }

    jump2:
    board(game);
    std::cout <<"\nPlayer 2, enter the name of a space to place an O: ";
    std::cin >> input2;
    check = inputcheck(input2, inputs, valid_inputs);

    if (check == 0) {
        if (input2 == "A1") {
            game[0] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "A2") {
            game[3] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "A3") {
            game[6] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "B1") {
            game[1] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "B2") {
            game[4] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "B3") {
            game[7] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "C1") {
            game[2] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "C2") {
            game[5] = 'O';
            inputs.push_back(input2);
            turns ++;
        } else if (input2 == "C3") {
            game[8] = 'O';
            inputs.push_back(input2);
            turns ++;
        }

    } else if (check == 1) {
        std::cout<<"Invalid input!\n";
        std::cout<<"Try again!\n";
        goto jump2;
    }

    checkwin = wincheck(game);
    if (checkwin == 1 || checkwin == 2) {
        goto jump3;
    } 
  }


  jump3: 
  if (checkwin == 1) {
    board(game);
    std::cout<<"\nPlayer 1 wins! Game Over!\n";
  } else if (checkwin == 2) {
    board(game);
    std::cout<<"\nPlayer 2 wins! Game Over!\n";
  } else if (turns == 9 && checkwin == 0) {
    std::cout<<"\nCat's game!\n";
  }

}