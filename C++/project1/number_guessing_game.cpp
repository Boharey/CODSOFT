// TASK 
// Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.

#include<bits/stdc++.h>
using namespace std;


int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min; // [min,max] --> including both min and max
  }



int main(){
  int min_num, max_num;
  int guessed_number = -1;
  cout << "Welcome to the Number Guessing Game : " << endl ;
  cout << "Enter the range under which the number should be [min,max] : "  << endl ;

  cout << "min val : ";
  cin >> min_num;

  cout << "max val : ";
  cin >> max_num;

  cout << "I have selected a random number between " << min_num << " and " << max_num << endl;
  cout << "Try to guess the number!" << endl;

  // 1. generate a random number
  int random_number = generateRandomNumber(min_num, max_num);

  // 2. ask user for number until his/her guess is correct
  while(random_number != guessed_number){
    cout << "\nenter your guess : ";
    cin >> guessed_number ; 
    if(guessed_number > max_num || guessed_number < min_num){
      cout << "number out of range. select number in range " << min_num << "-" << max_num << endl ;
      continue;
    }
    
    if (guessed_number < random_number) {
      cout << "Too low! Try again." << endl;
    } 
    else if (guessed_number > random_number) {
        cout << "Too high! Try again." << endl;
    } 
    else {
      cout << "Congratulations! You guessed the correct number!" << endl;
    }
  }
  return 0 ;
}
