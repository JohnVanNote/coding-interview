/*
 * ackermann.cpp
 *
 * John Van Note
 * 2012-05-04
 *
 * Ackermann function IRL.
 * I don't rememeber why I did this.
 *
 */

#include <ctime>
#include <iostream>
using namespace std ;

unsigned int ackermann(unsigned int m, unsigned int n);
double time(int time1, int time2);
void special_print(int result, double time);

int main(int argc, const char * argv[]) {
    int t0 = clock();
    
    int a1 = ackermann(0, 0);
    int t1 = clock();
    special_print(a1, time(t1, t0));

    int a2 = ackermann(1, 0);
    int t2 = clock();
    special_print(a2, time(t2, t1));

    int a3 = ackermann(0, 1);
    int t3 = clock();
    special_print(a3, time(t3, t2));

    int a4 = ackermann(2, 2);
    int t4 = clock();
    special_print(a4, time(t4, t3));

    int a5 = ackermann(3, 4);
    int t5 = clock();
    special_print(a5, time(t5, t4));

    int a6 = ackermann(4, 1);
    int t6 = clock();
    special_print(a6, time(t6, t5));
    
    return 0;
}

unsigned int ackermann(unsigned int m, unsigned int n) {
    if(m==0)
        return n+1;
    if(m>0 && n==0)
        return ackermann(m-1,1);
    if(m>0 && n>0)
        return ackermann(m-1,ackermann(m, n-1));
    return 0;
}

double time(int time1, int time2) {
    return (time1 - time2) / double(CLOCKS_PER_SEC) * 1000;
}

void special_print(int result, double time) {
    cout << result << " printed in " << time << " milliseconds." << endl;
}
