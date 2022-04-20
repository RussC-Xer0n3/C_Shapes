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