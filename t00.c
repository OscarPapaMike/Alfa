#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	clock_t tic = clock();
    // insert code here...
    printf("Hello, World!\n\n");
//    return 0;
    
    typedef struct{
        int a, b;
        double c, d;
//        double e[10][10];
    } group;
    
    group alpha = {1,2,3,4};
    
    printf("whiskey: %d, tango: %f\n",alpha.b,alpha.c);
    
    typedef struct point {
        double x, y;
    } point;
    
    double distance( point m, point n ){
    	double dx, dy, dz;
    	dx = m.x - n.x;
    	dy = m.y - n.y;
    	dz = m.z - n.z;
    	return sqrt(dx*dx + dy*dy + dz*dz);
    }

    printf("gcc: %d.%d.%d\n\n",__GNUC__,__GNUC_MINOR__,__GNUC_PATCHLEVEL__);

    double magicFun(double a, double b)
   	{	double c = 5;
		unsigned i;
   		for (i = 0; i < b; i++)
   			c = c * a;
   		return c;
   	}

   	double aa = 5;
   	printf("bravo: %f\n", magicFun(aa,0));
   	printf("charlie: %f\n", magicFun(aa,1));
   	printf("echo: %f\n", magicFun(aa,2));
   	printf("foxtrot: %f\n", magicFun(aa,3));
   	// printf("hotel: %f\n", magicFun(aa,4));
   	// printf("kilo: %f\n\n", magicFun(aa,5));

   	clock_t toc = clock();

	aa = 6;
   	printf("bravo: %f\n", magicFun(aa,0));
   	printf("charlie: %f\n", magicFun(aa,1));
   	printf("echo: %f\n", magicFun(aa,2));
   	printf("foxtrot: %f\n", magicFun(aa,3));
   	// printf("hotel: %f\n", magicFun(aa,4));
   	// printf("kilo: %f\n\n", magicFun(aa,5));

   	clock_t tac = clock();

   	printf("time: %fms\n", (double)(toc-tic) / (CLOCKS_PER_SEC / 1000) );
   	printf("time2: %fms\n\n", (double)(tac-toc) / (CLOCKS_PER_SEC / 1000) );
    
    return 0;
    
}