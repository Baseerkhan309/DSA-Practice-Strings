#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}

int maxVowels(string s, int k) {
    int count = 0;

    // Count vowels in the first window
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            count++;
        }
    }

    int maxCount = count;

    // Slide the window
    for (int i = k; i < s.length(); i++) {

        // Remove character leaving the window
        if (isVowel(s[i - k])) {
            count--;
        }

        // Add character entering the window
        if (isVowel(s[i])) {
            count++;
        }

        maxCount = max(maxCount, count);
    }

    return maxCount;
}

int main() {
    string s = "abciiidef";
    int k = 3;

    cout << "Maximum vowels in any substring of length "
         << k << " = " << maxVowels(s, k) << endl;

    return 0;
}