/* You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x_1,x_2,...,x_n: the contents of the array.
Output
Print the minimum number of moves.
Constraints

1 <= n <= 2x10^5
1 <= x_i <= 10^9

Example
Input:
5
3 2 5 1 7

Output:
5 */

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }
    long long moves = 0;
    for(int i = 1; i < n; i++) {
        if ( nums[i] < nums[i-1] ) {
            moves += (nums[i-1] - nums[i]);
            nums[i] = nums[i-1];
        }
    }
    cout << moves;     
    return 0;
}