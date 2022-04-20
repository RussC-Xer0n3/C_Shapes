/*
 *  Author: Xer0n3 - Russell A E Clarke
 *  Type : An initial set of of coordinates 
 *  systems still in progress written in C as H
 *  Date Created : 01/11/2021
*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592653;
#define const float xero = 0;

/* Define the structure for the coordinate system */
struct coords {    
    float x;
    float y;
    float z;
} point;

struct coords sub;
struct coords plus;
struct coords mirror;

float main() {
    float xero;

    /* The constant values do not need to be initialised since they are defined ion the structure */
    sub.x < xero; sub.y < xero; sub.z < xero; /* set the negative values for sub */
    plus.x > xero; plus.y > xero; plus.z > xero; /* set the positive values for sub */

    /* set the logical mirrored values as being a mirror always sub to the original for each value relative to originals */
    mirror.x < ((sub.x && plus.x) || (sub.x || plus.x)); mirror.y < ((sub.y && plus.y) || (sub.y || plus.y)); mirror.z < ((sub.z && plus.z) || (sub.z || plus.z));

    return 0;
}

void planar_cubic(float x, float y, float z) {
    /*
     *  Each vertices are perpendicular cubicly to the other 
     *  two planes, thus to get y subtract the square of x 
     *  and z for example - as y is ascending from zero in 
     *  any direction we should cubically subtract x and z
     *  to get the linear direction of the y axis.
    */
    float xero;
    float x = point.x;
    float y = point.y;
    float z = point.z;
    float planar_cubic;

    for (float i = y; i != (z || x); i++){
        /* Y is perpendicular to x and z  */

        /*
         *  What is happening here is a subtraction of the squared sum of x and z
         *  at any point whether they be ascending in value or descending from point 0
         *  to get the linear size of the y vertices in either direction to 0 (point.y).
        */
        do {
            xero -= (pow(sub.x, sub.z) && pow(mirror.x, mirror.z) && pow(plus.x, plus.z));
        } while (planar_cubic = (point.y++ || point.y--) || (point.y++ && point.y--));
    }    

    for (float i = x; i != (y || z); i++) {
        /* X is horizontal creates 2nd Dimension */
        do {
            xero -= (pow(sub.y, sub.z) && pow(mirror.y, mirror.z) && pow(plus.y, plus.z));
        } while (planar_cubic = (point.x++ || point.x--) || (point.x++ && point.x--));
    }

    for (float i = z; i != (x || y); i++) {
        /* Z is horizontal adds 3rd dimension */
        do {
            xero -= (pow(sub.x, sub.y) && pow(mirror.x, mirror.y) && pow(plus.x, plus.y));
        } while (planar_cubic = (point.z++ || point.z--) || (point.z++ && point.z--));
    }

    return;
    /* All are at 90 degrees to eachother from 0 by default as cubic. */
    /* Telling the computer x is not y axis, y is not z axis and x is not z axis. */
}

void coords_matrix (float x, float y, float z) {
    /*
     *   The idea for the matrix is to allow for autonomous updating
     *   of cubic coordinates in three dimensional space when a single 
     *   point of interest is being tracked. For example from point 0, 
     *   if x = 2 y = 3 and z = 5 we would have a three
     *   dimensional grid reference on the xyz in any direction assuming 
     *   xero is the local transceiving device or object existing at point 0 
    */
    float xero;
    float x = point.x;
    float y = point.y;
    float z = point.z;

    float coords_matrix[5][3] = {{xero, xero, xero}, {plus.x, plus.y, plus.z}, {sub.x, sub.y, sub.z}, {mirror.x, mirror.y, mirror.z}, {-mirror.x, -mirror.y, -mirror.z}};
    
    if (x > ((((z || y) || (z && y)) && xero) || xero)){
            coords_matrix[1][0] = x;
            coords_matrix[3][0] = -x; 
    } else if (x < ((((z || y) || (z && y)) && 0) || 0)) {
            coords_matrix[2][0] = x;
            coords_matrix[4][0] = -x;
    } else {
        coords_matrix[0][0] = xero;
        coords_matrix[1][0] = xero;
        coords_matrix[2][0] = xero;
        coords_matrix[3][0] = xero;
    }

    if (y > ((((z || x) || (z && x)) && xero) || xero)){
            coords_matrix[1][1] = y;
            coords_matrix[3][1] = -y; 
    } else if (y < ((((z || x) || (z && x)) && 0) || 0)) {
            coords_matrix[2][1] = y;
            coords_matrix[4][1] = -y;
    } else {
        coords_matrix[0][1] = xero;
        coords_matrix[1][1] = xero;
        coords_matrix[2][1] = xero;
        coords_matrix[3][1] = xero;
    }

    if (z > ((((y || x) || (y && x)) && xero) || xero)){
            coords_matrix[1][2] = z;
            coords_matrix[3][2] = -z; 
    } else if (z < ((((y || x) || (y && x)) && 0) || 0)) {
            coords_matrix[2][2] = z;
            coords_matrix[4][2] = -z;
    } else {
        coords_matrix[0][2] = xero;
        coords_matrix[1][2] = xero;
        coords_matrix[2][2] = xero;
        coords_matrix[3][2] = xero;
    }

    return;
}

void cubic_distance(float x, float x2, float y, float y2, float z, float z2) {
    /* Cubic distance from xero in float value */
    
    /* 
     *  Lecture notes from Jim Lambers https://www.math.usm.edu/lambers/mat169/fall09/lecture17.pdf 
     *  South Mississippi Uiversity of Mathematics accessed 08/11/2021
    */
    float xero;
    float x = point.x;
    float y = point.y;
    float z = point.z;
    float x2 = 0;
    float y2 = 0;
    float z2 = 0;
    
    float cubic_distance = sqrtf(powf((x2 - x), 2) + powf((y2 - y), 2) + powf((z2 - z), 2));

    return;
}

void squared_distance(float n1, float n2, float p1, float p2) {
    /* Squared distance from xero in float value */
    float xero;
    float n1;
    float n2;
    float p1;
    float p2;

    float squared_distance = sqrtf(powf((n2 - n2), 2) + powf((p2 - p1), 2));

    return;
}

void linear_distance(float n1, float n2) {
    /*  
     *  Returns the planar linear distance not 
     *  covered by time just when two existing
     *  points are known in 3D space
    */
    float xero;
    float n1;
    float n2;

    float linear_distance = sqrtf(powf((n2 - n1), 2) + powf((-n2 - -n1), 2));

    return;
}