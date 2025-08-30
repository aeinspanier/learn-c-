#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

  srand(time(0));
  int number = rand() % 100 + 1;
  int guess;


  cout << "Guess a number between 1 and 100: ";

  do {
    cin >> guess;
    if (guess > number) cout << "Too high, try again: ";
    else if (guess < number) cout << "Too low, try again: ";
  } while (guess != number);

  cout << "Correct! number was " << number;

  }

