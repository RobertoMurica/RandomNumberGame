#include <iostream>
#include <ctime>

int checkUserGuess(int guess);
int main(){
    int userGuess = 0;
    int numTries = 0;
    srand(time(0));
    int computerNum = rand() % 100 + 1;
    std::cout << "Welcome to the number guesser!\n";
    do{
        numTries++;
        std::cout << "Guess a number between 1-100:\n";
        std::cin >> userGuess;
        if(std::cin.fail()){
            std::cout << "Guess is not a number\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
        else if(userGuess < computerNum){
            std::cout << "Guess is too low\n";
        }
        else if(userGuess > computerNum){
            std::cout << "Guess is too high\n";
        }
        else{
            std::cout << "Your guess is correct! The computer chose: " << computerNum << " you guessed this in " << numTries << " attempts.\n";
        }
    }while(userGuess != computerNum);
    return 0;
}