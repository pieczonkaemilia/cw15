#include <complex.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

bool in_set(complex c, int n){
    complex z=0;
    for(; n-- ;)
        z=z*z+c;
    return cabs(z)<=2;
}

 int main(int argc, char*argv[]){

assert(argc==5);
    double xmin=atof(argv[1]), xmax=atof(argv[2]), ymin=atof(argv[3]), ymax=atof(argv[4]);

    for(int i=0; i<64; i++)
        for (int j=0; j<64; j++){
             double x=xmin+i*((xmax-xmin)/640.);
             double y=ymin+j*((ymax-ymin)/640.);
             complex c=x+y*I;
            if(in_set(c,20))
                 printf("%g\t%g\n",x,y);

    }
}



