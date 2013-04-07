#include <stdio.h>
#include <math.h>

typedef struct point {
    double x, y;
} point;

typedef struct {
//    struct point;
//    double z;
    double x, y ,z;
} threepoint;

double length( point p ){
	return sqrt(p.x*p.x + p.y*p.y);
}

double threelength( threepoint p ){
    return sqrt(p.x*p.x + p.y*p.y + p.z*p.z);
}

int main(){
    threepoint p = {.x=3, .y=1.23, .z=4};
    printf("p is %g away\n", threelength(p));
    point pp = {.x= 34, .y=23};
    printf("pp is %g away\n", length(pp));
    return 0;
}