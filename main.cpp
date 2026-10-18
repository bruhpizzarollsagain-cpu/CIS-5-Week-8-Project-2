#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 70;

// Project 2 — Mason Ayala
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
    const int N = 30;
    int scores[N];
    const int scoreAt10 = 80; // change this number

    // Do not edit this boilerplate. It randomly generates 30 elements into the array.
    srand(static_cast<unsigned>(time(nullptr)));

    const int scoreAt20 = 60; // change this number

    for (int i = 0; i < N; ++i) {
        scores[i] = rand() % 100;
    }

    scores[0] = scoreAt0;
    const int scoreAt27 = 40; // change this number
    scores[10] = scoreAt10;
    scores[20] = scoreAt20;
    scores[27] = scoreAt27;

    // TODO: print each index and scores[i]
    for (int i = 0; i < N; ++i) {
        std::cout << "[" << i << "] " << scores[i] << "\n";
    }
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    for (int i = 0; i < N; ++i) {
        if (scores[i] >= 90) {
            ++aCount;
        }
        else if (scores[i] >= 80) {
            ++bCount;
        }
        else if (scores[i] >= 70) {
            ++cCount;
        }
        else if (scores[i] >= 60) {
            ++dCount;
        }
        else {
            ++fCount;
        }
    }
    std::cout << "A: " << aCount << "\n";
    std::cout << "B: " << bCount << "\n";
    std::cout << "C: " << cCount << "\n";
    std::cout << "D: " << dCount << "\n";
    std::cout << "F: " << fCount << "\n";
    int i = 0;

    while (i < N) {
        if (scores[i] < 60) {
            std::cout << "Student at index " << i
                << " needs to come to office hours.\n";
        }

        ++i;
    }
    return 0;
}
