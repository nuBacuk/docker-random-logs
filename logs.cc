#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;

int main () {
    while (true){
        time_t now_time = time(NULL); 
        printf ("%s: This is a test journal.\n", ctime(&now_time));
        sleep (1);
    }
}