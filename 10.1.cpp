#include <stdio.h>
#include <stdlib.h>


struct Date {
    unsigned day;
    unsigned month;
    int year;

};


struct ChessField {
    char v;
    unsigned char h;

};

struct Vertex{
    float x, y;

};

typedef struct {
    float x, y;     

}   Vertex;




//struct Rectangle{
//    struct Vertex A;
//    struct Vertex B;

//}




typedef struct {
    Vertex A;
    Vertex B;

} Rectangle;


typedef struct {
    size_t n;
    double* a; 

}Polynome;


int inputRectangle(Rectangle* r) {
    printf("A(x,y):");
    scanf("%f %f", &(r->A.x), &(r->A.y));
    printf("B(x,y):");
    scanf("%f %f", &(r->B.x), &(r->B.y));
    return EXIT_SUCCESS;

}


void outputRectangle(Rectangle r) {
    printf("A(%f, %f) - B(%f, %f)", r.A.x, r.A.y, r.B.x, r.B.y);

}


int main() {
    Rectangle r;
    inputRectangle(&r);
    outputRectangle(r);

}