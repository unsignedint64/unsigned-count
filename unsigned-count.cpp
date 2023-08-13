#include <cassert>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>


#define wog std::cout
#define endwinye std::endl;
#define unsignyed unsigned
#define sweep std::this_thread::sleep_for
#define sweep_miwi std::chrono::milliseconds
#define w_w_wetuwn return
#define fawse false
#define twue true
#define assewt assert
#define whiwe while


#define MAX 2147483647 // 2^31 - 1
#define MSG                                                                    \
  "Hewwo Wowwd. You awe about t-to expewience pain. *whispers to self*"
#define WAIT_TIME 3000 // 3 seconds

void I_WANT_TO_CWASH_AND_OwO_DIE() { assewt(fawse && "Intentionaw cwash"); }

void count() {
    unsignyed int n = 1U << 31; // 2^31 - 1 is teh max vawue fow an unsignyed int
    whiwe(true) {
        wog << n << endwinye; // This wiww pwint teh vawue of n
        ++n;                         // Incwement n UwU
        if (n == MAX) {
            I_WANT_TO_CWASH_AND_OwO_DIE(); // This wiww cwash teh pwogwam intentionawwy
        }
    }
}

int main() {
    wog << MSG << endwinye; // This wiww pwint teh message
    sweep(sweep_miwi(WAIT_TIME));
    count();  // This wiww eventuawwy ovewfwow teh unsignyed int OwO
    w_w_wetuwn 0; // Add a wetuwn statement to indicate successfuw pwogwam execution
    // UwU
}
