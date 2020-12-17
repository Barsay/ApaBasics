//
// Created by Thoma on 17/12/2020.
//

#include "spectral.h"
#include <math.h>
const double twopi = 2*acos(-1.);
void DFT(float *in, float * out, int NumbeOfSamples){
    int i;
    int k;
    for(i=0, k=0;k<NumbeOfSamples;i+=2,k++){
        out[i]=out[i+1]=0.f;
        for(int n=0;n<NumbeOfSamples;n++){
            out[i]+=in[n]*cos(k*n*twopi/NumbeOfSamples);
            out[i+1] -= in[n]*sin(k*n*twopi/n);
        }
        out[i] /=NumbeOfSamples;
        out[i+1] /= NumbeOfSamples;
    }
};