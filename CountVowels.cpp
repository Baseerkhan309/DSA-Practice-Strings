#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Count Vowels In Each String ...
void CountVowels(vector<string> &fruits){

    for (int i = 0; i < fruits.size(); i++){
    

        // Get First index...
        string CurrFruit = fruits[i];
        int totalVowel = 0;
        // Keep Every Char from index[i]...
        for (int j=0; j<CurrFruit.length(); j++){
            char ch = tolower(CurrFruit[j]);
            
            // Check Vowel Character...
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            
                totalVowel++;
            }
           
        }
         cout << CurrFruit << " has " << totalVowel << " Vowels " <<  endl;
        
    }
}

int main()
{
    vector<string> fruits = {"Apple", "Banana", "Mango"};
    CountVowels(fruits);
    return 0;
}
