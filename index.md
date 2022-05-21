<style>
/* The dropdown container */
.dropdown {
  float: left;
  overflow: hidden;
}
/* Dropdown button */
.dropdown .dropbtn {
  font-size: 16px;
  border: none;
  outline: none;
  color: white;
  padding: 14px 16px;
  background-color: inherit;
  font-family: inherit; /* Important for vertical align on mobile phones */
  margin: 0; /* Important for vertical align on mobile phones */
}
/* Add a red background color to navbar links on hover */
.navbar a:hover, .dropdown:hover .dropbtn {
    background-color: aliceblue;
    color: teal;
  }
  /* Dropdown content (hidden by default) */
.dropdown-content {
  display: none;
  position: absolute;
  background-color: teal;
  min-width: 160px;
  box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);
  z-index: 1;
}
/* Links inside the dropdown */
.dropdown-content a {
  float: none;
  color: aliceblue;
  padding: 12px 16px;
  text-decoration: none;
  display: block;
  text-align: left;
}
/* Add a grey background color to dropdown links on hover */
.dropdown-content a:hover {
  background-color: #ddd;
}
/* Show the dropdown menu on hover */
.dropdown:hover .dropdown-content {
  display: block;
}
</style>
<nav class="w3-container w3-teal w3-center w3-margin-top">
    <div class="dropdown">
        <button class="dropbtn">Projects
          <i class="fa fa-caret-down"></i>
        </button>
        <div class="dropdown-content">
          <a href="https://russc-xer0n3.github.io/Tumor-Probability">Tumor probability</a>
          <a href="https://russc-xer0n3.github.io/NetPCaC">NetPCaC</a>
          <a href="https://russc-xer0n3.github.io/LANDROVER">LANDROVER</a>
          <a href="https://russc-xer0n3.github.io/MAC">MAC Address</a>
          <a href="https://russc-xer0n3.github.io/SCRUD">SCRUD</a>
          <a href="https://russc-xer0n3.github.io/Remove">Code Syntax Removal</a>
          <a href="https://russc-xer0n3.github.io/PassGen">PassGen</a>
          <a href="https://russc-xer0n3.github.io/C_Shapes">C Programming Shapes</a>
          <a href="https://russc-xer0n3.github.io/Shapes---python">Python Shapes and space</a>
          <a href="https://russc-xer0n3.github.io/The-old-Fusion-Repository">Fusion?</a>
          <a href="https://russc-xer0n3.github.io/The-Russian-Wedding-Rings">The Russian Wedding Rings</a>
          <a href="https://russc-xer0n3.github.io/QBit-and-GParticulates">QBit and GParticulates</a>
          <a href="https://russc-xer0n3.github.io/Thyme-old">Thyme</a>
          <a href="https://russc-xer0n3.github.io/IP-Port">IP and Ports</a>
          <a href="https://russc-xer0n3.github.io/Xer0n3">Xer0n3</a>
          <a href="https://russc-xer0n3.github.io/ScrambledEggs">ScrambledEggs</a>
          <a href="https://russc-xer0n3.github.io/Py">Python Code</a>
        </div>
    </div>
    <br>
      <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
      <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
      <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
      <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
      <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
      <br><a href="https://russc-xer0n3.github.io">My CV and additional information</a>
    <br>
</nav>
# C Shapes
## Converting (Porting) Python shapes to C programming language

### Test Cases in C Programming
First off, why not try and write a load of test cases to check if the C Programming language is correct right?!

The purpose of these test cases is to check if when embedded the firmware is logically reporting back to the C Language, it really depends how close to the metal you want to get because correctness cmight be being emulated from the base 16 firmware, we don't know, but at least we can try to find out.

```
/*
Author: Xer0n3 - Russell A E Clarke
Type : An initial set of test cases written in C
Date Created : 01/11/2021
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <setjmp.h>
#include <signal.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <errno.h>

/* PRELIMINARY TEST CASES */

/*  
    Bearing in mind these test cases are not
    embedded test cases and have not factored
    in remote access via electron and hardline
    nor the BIOS, they are sufficient as a
    preliminary sounding board for requirements
    in standardisation of test cases especially
    when looking at the binary and bit logic in
    such systems.
    First we are setting all the constant values
    for testing, we don't want the values changing
    during the testing stage, normally acall to
    BIOS would have been written and the OS and BIOS
    itself should and usually do those things hence
    why a Debugger or Test developer is a specialisation.
*/

/* EN_GB Alpha String */
const char _Minus_A = 'A';
const char _Zero_A = NULL;
const char _Plus_A = 'z';
const char _Value_A = 'A' && NULL && 'z';

/*Binary base 2 logic*/
const int _Plus_B = 1;
const int _Zero_B = 0;
const int _Minus_B = ~1;
const int _Value_B = 1 && 0 && ~1;

/* set some logic to constants to ensure they function accordingly */
const unsigned int _Plus_C = true;
const unsigned int _Zero_C = NULL;
const unsigned int _Minus_C = false;
const unsigned int _Value_C = true && NULL && false; 

/* Double value logic 10 decimal places */
const double _Plus_D = 0.0000000001;
const double _Zero_D = 0.0000000000;
const double _Minus_D = -0.0000000001;
const double _Value_D = 0.0000000001 && 0.0000000000 && -0.0000000001;

/* Octal logic */
const unsigned _Plus_E = 0010;
const unsigned _Zero_E = 0000;
const unsigned _Minus_E = 0001;
const unsigned _Value_E = 0001 && 0000 && 0010;

/* Hexidecimal base 16 logic */
const unsigned int _Plus_H = 0xf;
const unsigned int _Zero_H = 0x0;
const unsigned int _Minus_H = 0x9;
const unsigned int _Value_H = 0xf0 && 0x00 && 0x9;

/*
    Rather than defining as a structure,
    we are going to call all of the 
    tests cases as one main method.
    Though the method might be revisited
    and restructured for lesas intense use
    since these tests might overload the 
    main method.
*/

void main() {

    /*  
        Output all error numbers via forloop 
        Mike McGrath Cprogramming 5th Ed. 
        That way we have the numerical error
        values and their associated error
        messages to hand and readable
    */

    for (int i = 0; i < 44; i++) {
        printf("Error %d : %s\n", i, strerror(i));
    }

    // Define logic for testing

    /*
        Simply testing boolean values
    */
    if (_Zero_C < _Minus_C) {printf("Systemcheck BASIC LOGIC PASSED"); } else { perror("Error"); }
    if (_Minus_C < _Plus_C) {printf("Systemcheck BASIC LOGIC PASSED"); } else { perror("Error"); }
    if ((_Plus_C > _Minus_C) && (_Plus_C >_Zero_C)) {printf("Systemcheck BASIC LOGIC PASSED"); } else { perror("Error"); }
    if (_Value_C == _Plus_C, _Zero_C, _Minus_C) {printf("Valuecvcheck BASIC LOGIC PASSED"); } else { perror("Error"); }

    // Binary test case

    /*
        Here we are testing for any kind of binary errors however
        There has been no factoring in for memory space and allocation
        thus it might be the case the memory spacve allocation
        has been compromised, keep that in mind.
    */
    if ((_Zero_B == ~0) || (_Plus_B == ~1) || (_Minus_B == 1)){
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        printf("Systemcheck BINARY INTEGER FAILED");
        perror("Error");
    } else if ((_Zero_B == ~0) || (_Plus_B == 1) || (_Minus_B == ~1)) {
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        printf("Systemcheck BINARY INTEGER FAILED");
        perror("Error");
    } else if ((_Zero_B == ~0) || (_Plus_B == 1) || (_Minus_B == 1)) {
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        printf("Systemcheck BINARY INTEGER FAILED");
        perror("Error");   
    } else if ((_Zero_B == 0) || (_Plus_B == ~1) || (_Minus_B == 1)) {
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        printf("Systemcheck BINARY INTEGER FAILED");
        perror("Error");   
    } else if ((_Zero_B == 0) || (_Plus_B == ~1) || (_Minus_B == ~1)) {
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        printf("Systemcheck BINARY INTEGER FAILED");
        perror("Error");  
    } else if ((_Zero_B == 0) || (_Plus_B == 1) || (_Minus_B == ~1)) {
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        printf("Systemcheck BINARY INTEGER PASSED");  
    } else {
        printf("Binary values are: %o, %o, %o", _Zero_B, _Plus_B, _Minus_B);
        perror("Error");  
    }

    // Bitwise
    /*
        With that in mind, we could test for a bit shift to
        find out of values are being switched via the following
        test cases, specifically the shift methods here << and here >>
    */

    if (_Plus_B >> _Plus_B == 1) {printf("Systemcheck BITWISE INCREASE PASSED"); } else { perror("Error"); }
    if (_Plus_B << _Plus_B == 4) {printf("Systemcheck BITWISE DECREASE PASSED"); } else { perror("Error"); }
    if (_Plus_B | _Minus_B == 3) {printf("Systemcheck BITWISE COMPARISON PASSED"); } else { perror("Error"); }
    if (_Plus_B & _Plus_B == 2) {printf("Systemcheck BITWISE COMPARED PASSED"); } else { perror("Error"); }
    if (_Plus_B ^ _Minus_B == 3) {printf("Systemcheck BITWISE COMPARED PASSED"); } else { perror("Error"); }
    if (~_Plus_B == 13) {printf("Systemcheck BITWISE SWITCH PASSED"); } else { perror("Error"); }
    
    // Bitwise with Octals
    /*
        Similar principal here with octal values
    */

    if ((_Zero_E == 0001) || (_Plus_E < _Minus_E) || (_Minus_E > _Plus_E)) {
        printf("Octal value is: %o\000, %o\000, %o\000", _Zero_E, _Plus_E, _Minus_E );
        printf("Systemcheck BINARY INTEGER FAILED");
        perror("Error");
    } else if ((_Zero_E == 0000) || (!_Plus_E >> _Minus_E) || ((!_Minus_E << _Plus_E) && (_Minus_E << _Zero_E))) {
        printf("Octal value is: %o\000, %o\000, %o\000", _Zero_E, _Plus_E, _Minus_E );
        printf("Systemcheck BINARY INTEGER CHANGE FAILED");
        perror("Error");
    } else {
        printf("Octal value is: %o\000, %o\000, %o\000", _Zero_E, _Plus_E, _Minus_E );
        printf("Systemcheck OCTALS PASSED");
    }

    // Hexidecimal
    /*
        Have to check base16 is functiong correctly
        Values are 0-9A-F where A is 10 and F is 16
    */

    if (_Plus_H > 0xA) {
        printf("value is: %x", _Plus_H);
        printf("Systemcheck HEX LOWER COMPARISON PASSED");
    } else { 
        perror("Error"); 
    }
    if (_Minus_H < 0xA) {
        printf("value is: %x", _Minus_H);
        printf("Systemcheck HEX UPPER COMPARISON PASSED");  
    } else { 
        perror("Error"); 
    }
    if (_Zero_H == 0x00) {   
        printf("value is: %x", _Zero_H);
        printf("Systemcheck HEX ZERO COMPARISON PASSED");
    } else { 
        perror("Error"); 
        
    }

    // Alpha Characters
    /*
        Unfortunately, I cannot find a typeof function similar
        to sizeof in C, I'll keep digging around but that is
        the general idea here are characters being assumed as
    string or char characters por something else?
    */

    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    //TODO: Look at type definitions
    for (int i = 0;  i <= alpha[i]; i++) {
        if (i != alpha[i]) {
            perror("Error");
        } else if ((char) alpha[i] != alpha[i]) { //TODO: Look at this one again!!
            printf("Systemcheck character type PASSED:", i);
        } else {
            perror("Error");       
        }
    }

    // Double
    /*
        Simple checks for Double values (decimal places)
        if double values are workingh float values shoudl be working
    */

    if (double (5.0 / 2) != 2.5) {
        perror("Error");
    } else { 
        printf("Systemcheck for division of doubel PASSED");
    }

    if (!_Minus_D + _Plus_D == _Zero_D) {
        printf("Systemcheck on double addition FAILED");
        perror("Error");
    } else {
        printf("Systemcheck for double addition PASSED");
    }

    double les = (_Minus_D < _Zero_D) ? _Minus_D : _Zero_D;
    double pos = (_Plus_D > _Zero_D) ? _Plus_D : _Zero_D;

    return;
}
```

### Continuing the cool stuff
I dove straight into the spacecraft coee first because, well simply, because it's cooll to work on that kind of challenge in a language I am not too familiar with. Coordinates is one good example.
```
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
```

### What next?
Again work was calling and so I had to put the projects on hold, seems to be the way at the moment with kitchen work, plenty of hours, if not too many and too much tiredness, hopefully, in due course, there will be more time on my hands to finish the work in these projects.
<head>
    <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
    <meta charset="UTF-8">
    <meta name="description" content="Projects and Portfolio">
    <meta name="keywords" content="HTML, CSS, JavaScript, PHP, MySQLi, Python, Java, C, C++, C#, Time, Shapes">
    <meta name="author" content="Russell Clarke">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
</head>
<footer class="w3-container w3-teal w3-center w3-margin-top">
  <p>Find me on social media.</p>
  <a href="https://www.facebook.com/profile.php?id=100075972987666"><i class="fa fa-facebook-official w3-hover-opacity"></i></a>
  <a href="https://www.instagram.com/russellclarke821"><i class="fa fa-instagram w3-hover-opacity"></i></a>
  <a href="https://www.pinterest.co.uk/russellclarke821/"><i class="fa fa-pinterest-p w3-hover-opacity"></i></a>
  <a href="https://twitter.com/Developing821"><i class="fa fa-twitter w3-hover-opacity"></i></a>
  <a href="https://www.linkedin.com/in/russell-clarke-09a1a5238"></a><i class="fa fa-linkedin w3-hover-opacity"></i>
  <p>Powered by <a href="https://www.w3schools.com/w3css/default.asp" target="_blank">w3.css</a></p>
</footer>
