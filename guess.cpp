#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

srand(time(0));
int secretNumber = rand()%100 +1;
int guess;
int attempts = 0;
cout << "========NUMBER GUESSING GAME========\n";
cout << "I have chosen a number between 1 and 100.\n";
cout << "Guess the number!\n";

do{
    cout << "Enter Your Guess:";
    cin>>guess;
    attempts++;

    if (guess >secretNumber ){
        cout << "Your Guess is Too High,Try Again! \n";

    }
    else if (guess < secretNumber){
                cout << "Your Guess is Too Low,Try Again! \n";
    }
    else {
        cout << "Your Guess is Correct !! \n";
        cout << "You Guessed Number in " << attempts << " attempts\n";
    }
} while (guess != secretNumber);
cout << "Thanks for Playing\n";

return 0;






}



