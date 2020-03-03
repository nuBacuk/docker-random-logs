#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int main () {
    while (true){
        time_t now_time = time(NULL); 
        printf ("This is a test journal: %s", ctime(&now_time));
        usleep(100000);
    }
}