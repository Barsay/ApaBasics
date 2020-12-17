//
// Created by Thoma on 17/12/2020.
//

#ifndef APA_BASICS_SPECTRAL_H
#define APA_BASICS_SPECTRAL_H
#include <math.h>
/**
 * @Description: DFT is an analysis tool used to convert a TIME-DOMAIN digital signal into its frequency-domain representation.
 * Starting from a real-value signal we receive a complex-value signal composed of the spectrum samples.
 * The complex esponentials we recevie are cos(2kpin/N) - jsin(2pikn/N)., with K going from 2 to N-1.
 *
 * @param in Input signal
 * @param out Output signal
 * @param NumbeOfSamples Size of Input and Output. Also called "transform size"
 */
void DFT(float *in, float * out, int NumbeOfSamples);
#endif //APA_BASICS_SPECTRAL_H
