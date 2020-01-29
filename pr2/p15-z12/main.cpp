#include <iostream>
#include <cmath>
using namespace std;


void allWords ( string word, string alphabet, int K )
{
    if ( K < 1) {
        cout << word << endl;
        return;
    }
    for ( int i=0; i < alphabet.size(); i++ )
        allWords( word + alphabet[i], alphabet, K-1 );
}

int main()
{

    string letters = "ABC";
    int wordLenght = 3;
    allWords( "", letters, wordLenght);
    cin.get();
    cout << pow(wordLenght, wordLenght);
}
