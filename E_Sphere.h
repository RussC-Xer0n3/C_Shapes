#include <stdio.h>
#include <math.h>
#include "coordinates.h"

#define const float PI = 3.141592653;
#define const float earth_circumference = 24859.734;

struct sphere {
    float radii;
    float circ;
    float diameter;
    float surface;
    float volume;
    /* optimised */
    float opt_surf_diameter;
    float opt_surf_rad;
} obj;

/* Call to earth circumference */
void earth_circumference();

/* Standard components of spheres */
void circumference();
void radii();
void diameter();
void surface();
void volume();

/* Optimum components from non-smooth surfaces afterall, which planet is smooth? */
void opt_surf_rad();
void opt_surf_diameter();

/* Main method call to methods */
void main(float argv) {
    /* return all arguments according to defined methods in */
    return;
}

/* Simply put, this is the earths circumference in Miles */
void earth_circumference(void){
    extern float earth_circumference;
    return;
}

/* if the earths circumference is not set in circ then use the assigned value */
void circumference (void) {
    extern float circ, diameter, radii, opt_surf_rad, opt_surf_diameter, earth_circumference;

    if (circ != earth_circumference && circ != 0) {
        float circumference = circ;
    } else if (circ = 0 && (diameter > 0 || diameter < 0)) {
        float circumference = diameter * PI;
    } else if (circ = 0 && (radii > 0 || radii < 0)) {
        float circumference = powf(radii, 2) * PI;
    } else if (circ = 0 && (opt_surf_diameter > 0 || opt_surf_diameter < 0)) {
        float circumference = opt_surf_diameter * PI;
    } else if (circ = 0 && (opt_surf_rad > 0 || opt_surf_rad < 0)) {
        float circumference = powf(opt_surf_rad, 2) * PI;
    } else {
        float circumference = circ;
    }
    return;
}

void radii(void){
    extern float radii, circumference, earth_circumference, surface;

    if (circumference == earth_circumference) {
        float radii = 3956.000;
    } else {
        float radii = ((sqrtf(surface)) / (3.141592653 * 4.000));
    }
    return;
}

void diameneter(void){
    
    return;
}

void surface(void){
    extern float circ;
    float surface = circ * PI;
    return;
}

void volume(float surface){
    extern float surface;
    float volume = powf((surface), 3);
    return;
}

void opt_surf_rad(void){
    return;
}

void opt_surf_diameter(void){
    return;
}