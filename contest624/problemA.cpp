// A. Save Luke
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Luke Skywalker got locked up in a rubbish shredder between two presses. R2D2
// is already working on his rescue, but Luke needs to stay alive as long as
// possible. For simplicity we will assume that everything happens on a straight
// line, the presses are initially at coordinates 0 and L, and they move towards
// each other with speed v1 and v2, respectively. Luke has width d and is able to
// choose any position between the presses. Luke dies as soon as the distance
// between the presses is less than his width. Your task is to determine for how
// long Luke can stay alive.
//
// Input
// The first line of the input contains four integers d, L, v1, v2
// (1 ≤ d, L, v1, v2 ≤ 10 000, d < L) — Luke's width, the initial position of the
// second press and the speed of the first and second presses, respectively.
//
// Output
// Print a single real value — the maximum period of time Luke can stay alive
// for. Your answer will be considered correct if its absolute or relative error
// does not exceed 10^-6.


#include <iostream>

int main()
{
    double d, L, v1, v2;
    std::cin >> d >> L >> v1 >> v2;

    double distance = L - d;
    double full_velocity = v1 + v2;
    std::cout << std::fixed << distance / full_velocity << std::endl;

    return 0;
}
