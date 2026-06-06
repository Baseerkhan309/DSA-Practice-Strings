#include <iostream>
#include <vector>
#include <string>
using namespace std;

void CountVowels(vector<string> &Fruits){
    for(int i=0; i<Fruits.size(); i++){

        // Count the Vowels...
        int CountVowels = 0;
        string CurrFruit = Fruits[i];
         


        for(int j=0; j<CurrFruit.length(); j++){
          char ch = tolower(CurrFruit[j]);
           if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            CountVowels++;
           }
        }

        cout << CurrFruit << " has " << CountVowels << " Vowels " << endl;
    }
}


int main(){
   vector<string> Fruits = {"Apple", "Mango", "Banana"};
   CountVowels(Fruits);

    return 0;
}