// B. Making a String
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given an alphabet consisting of n letters, your task is to make a
// string of the maximum possible length so that the following conditions are
// satisfied:
//
// the i-th letter occurs in the string no more than ai times; // the number of
// occurrences of each letter in the string must be distinct for all the letters
// that occurred in the string at least once.
// Input
// The first line of the input contains a single integer n (2  ≤  n  ≤  26) —
// the number of letters in the alphabet.
// 
// The next line contains n integers ai (1 ≤ ai ≤ 109) — i-th of these integers
// gives the limitation on the number of occurrences of the i-th character in the
// string.
//
// Output
// Print a single integer — the maximum length of the string that meets all the
// requirements.


#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    size_t num_letters = 0;
    std::cin >> num_letters;

    std::vector<long long> occurrences;

    for(int i = 0; i < num_letters; ++i)
    {
        int value = 0;
        std::cin >> value;
        occurrences.push_back(value);
    }

    std::sort(occurrences.begin(), occurrences.end(), std::greater<long long>());

    long long max_length = 0;

    max_length += occurrences[0];
    long long prev = occurrences[0];

    for(int i = 1; i < occurrences.size(); ++i)
    {
        long long value = std::min(occurrences[i], prev-1);
        prev = value;
        if(!value) break;
        max_length += value;
    }

    std::cout << max_length;
    return 0;
}
