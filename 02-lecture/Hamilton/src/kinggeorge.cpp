/* kinggeorge.cpp
 *
 * @author Cynthia Lee
 * @version 1920-Aut
 *
 * Prints out lyrics for the "da-dat-da" part of King George's
 * "You'll Be Back" song from Hamilton. This lyrics generator
 * allows the actor to customize the amount of "da"-ing to the
 * enthusiasm level of that particular performance's audience.
 *
 */
#include <iostream>   // StanDard C++ I/O library
#include "console.h"  // StanFord library basic setup thing
#include "simpio.h"   // StanFord library I/O helpers
using namespace std;

const int DAT_FREQ = 3;
const int  YA_FREQ = 8;

void generateLyrics(int daAmount);

int main() {
    int crowdEnthusiasmLevel = getInteger("How much enthusiasm? ");
    generateLyrics(crowdEnthusiasmLevel);

    return 0;
}

void generateLyrics(int daAmount) {
    for (int i = 0; i < daAmount; i ++) {
        if (i % DAT_FREQ == 0) {
            cout << "Dat ";
        } else if (i % YA_FREQ == 0) {
            cout << "Ya Da ";
        } else {
            cout << "Da ";
        }
    }
    cout << endl;
}

