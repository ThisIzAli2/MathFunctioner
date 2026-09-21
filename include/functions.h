#include <stdio.h>
#include <math.h>


#define EM_CONSTANT 0.577

#define MUL(x,y) x*y
#define ADD(x,y) x+y
#define SUB(x,y) x-y
#define DIV(x,y) x/y

static inline unsigned long long fact(unsigned int n){
    unsigned long long res = 1;
    for (unsigned int i =2;i <=n ;i++){
        res *= i;
    }
    return res;
}



static inline double sine_calc(int angle){
    return angle - DIV(pow(angle,3),6) + DIV(pow(angle,5),120);
}