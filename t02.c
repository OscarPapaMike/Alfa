// Ben Frevert, test No. 2

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <float.h>

int main()
{
clock_t tic = clock();
printf("compiled with gcc: %d.%d.%d ",__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__);
if(__LP64__) printf("in 64-bit\n");
else 		 printf("in 32-bit\n");
printf("largest: %Le\n",LDBL_MAX);

// typedef struct point {
//     double x, y;
// } point;

// double length( point p ){
// 	return sqrt(p.x*p.x + p.y*p.y);
// }

// double dpts( point m, point n ){
// 	double dx, dy;
// 	dx = m.x - n.x;
// 	dy = m.y - n.y;
// 	return sqrt(dx*dx + dy*dy);
// }

// point midpoint( point m, point n){
// 	double nx, ny;
// 	nx = (m.x + n.x) / 2;
// 	ny = (m.y + n.y) / 2;
// 	point np = {.x=nx, .y=ny};
// 	return np;

// }

// point a = {.x=20,.y=3};
// point b = {.x=4,.y=6};
// point c = {.x=12,.y=17};
// point d = midpoint(a,c);
// point e = midpoint(b,d);

// printf("seperation(a,b): %f\n", dpts(a,b));
// printf("seperation(c,a): %f\n",dpts(c,a));
// printf("midpoint(a,c): (%f,%f)\n",d.x, d.y);
// printf("midpoint(b,d): (%f,%f)\n",e.x, e.y);


// clock_t toc = clock();
// printf("time: %0.3fms\n", (double)(toc-tic) / (CLOCKS_PER_SEC / 1000) );

return 0;
}
