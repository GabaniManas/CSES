/* You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 <= n <= 10^6

Example
Input:
ATTCGGGA

Output:
3*/

#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int max_length = 0;
    int running_length = 0;
    char check = 'Z';
    for(int i = 0; i < n; i++) {
        if ( s[i] == check ) {
            running_length += 1;
        } else {
            max_length = max(max_length, running_length);
            running_length = 1;
            check = s[i];
        }
    }
    max_length = max(max_length, running_length);
    cout << max_length;
    return 0;
}