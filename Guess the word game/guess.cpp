#include <iostream>
#include <string>
#include<array>
#include<ctime>


using namespace std;

int main() {
 // Set up the list of words using arrays
  string words[]={"mohamed","ayman","marc","abdelrahman"};
 // Generate a random index for the word
  srand(time(0));
  int index = rand() % size(words);
  string word = words[index];
// get the length of the word
int lengthletter= word.length(); 
  string gussedword (lengthletter ,' _');
 // Set up the game variables, max_guesses, remaining_guesses, guessed_letters, 
int max_guessed =lengthletter+1;
string guessed_letters;
int remaining_guesses=max_guessed;
char guess;
 // Start the game
  cout << "Welcome to The Game!" << endl;
// provide the user with the length of the word

 // create a loop that only terminates if either the user runs out of guesses or the 

  while (remaining_guesses>0 && gussedword!=word) {
 // inform the user of the remaining guesses, the guessed letters, and the hidden word
cout<<"the word has "<< lengthletter<<" letter"<<endl;
cout<<"You have "<<remaining_guesses<<" guesses left."<<endl;
cout<<"Current word:"<<gussedword<<endl;

 // prompt the user to enter a letter
  cout<<"Enter a letter: ";
  cin>>guess;
  

bool g=false;
for(int i=0;i<lengthletter;i++)
  {
    if(word[i]==guess)
    {
        gussedword[i]=guess;
        g=true;
    }
  }
  for (int i=0;i<lengthletter;i++)
{
  guessed_letters[i]=guess;
}
if (guessed_letters.find(guess) != string::npos) {
  cout << "You already guessed that letter. Try again." << endl;
  }
  else {
    cout <<"the wrong gusse"<<endl;
  }
if (g) {
  cout << "Great guess! The letter is in the word."<<gussedword << endl;
  
}
  else {
  cout << "Sorry, the letter is not in the word." << endl;
  remaining_guesses--;
  }
  }
//check the cause of the loop termination and print the corresponding message
//add the guess to the guessed_letters
  if(remaining_guesses==0)
  
{
    cout << "Sorry, you ran out of guesses. The word was " << word << "." << endl;
}
else
{
    cout << "Congratulations! You guessed the word!" <<endl;
    cout<< " word : "<<word<<endl;
}
  return 0;
}