#include <iostream>

#include <stdbool.h>

typedef struct {
    int numerator;
    unsigned int denominator;
} Rational;



void outputRational(Rational x) {
    printf("%d/%u\n", x.numerator, x.denominator);

}


int inputRational(Rational* x) {
    printf("Num:");
    scanf_s("%d", &x->numerator);
    printf("Den:");
    scanf_s("%u", &x->denominator);
    if (x->denominator == 0) return 0;
    return 2;

}


Rational addRational(Rational x, Rational y) {
    Rational z;
    z.numerator = x.numerator * y.denominator + y.numerator * x.denominator;
    z.denominator = x.denominator * y.denominator;
    return z;

}


Rational multRational(Rational x, Rational y) {
    Rational z;
    z.numerator = x.numerator * y.numerator;
    z.denominator = x.denominator * y.denominator;
    return z;

}


bool greaterRational(Rational x, Rational y) {
    return (x.numerator * y.denominator > y.numerator * x.denominator);

}


bool cmpRational(Rational x, Rational y) {
    return (x.numerator * y.denominator == y.numerator * x.denominator);

}


unsigned gcd(unsigned x, unsigned y) {
    if (y > x) return gcd(x, y);
    if (y == 0) return x;
    return gcd(y, x % y);

}


void reduce(Rational* x) {
    unsigned d = gcd(x->numerator, x->denominator);
    x->numerator /= d;
    x->denominator /= d;

}


int main() {
    Rational r1, r2, r3;
    inputRational(&r1);
    inputRational(&r2);
    r3 = addRational(r1, r2);
    outputRational(r3);
    r3 = multRational(r1, r2);
    outputRational(r3);

    if (cmpRational(r1, r2)) {

        printf("r1==r2");

    }
    else {

        printf("r2>r1");

    }

    return 0;

}