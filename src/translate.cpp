#include "translate.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cctype>
/*
-----The EEC++ Language writing document-----
PART0 Introduction
    This language is used as a middle layer to generate code in ERISC language
from C++ alike code, which aims to save time in finishing Task 3 & 4 of this
Homework.
    This `translate.cpp` is a translator to translate EEC++ to the ERISC language.

PART1 Basic Language rules
1. BASIC GRAMMAR RULES ARE C++ ALIKE

PART2 What you can do
1. write comments, which will be ignored 
    a. multi-line comment 
    b. single-line comment
2. declare a variable
    a. integer: short(int16_t), int(int32_t), long long(int64_t)
    b. floating number: float(32bit), double(64bit)
3. calculate
    a. basic operator:
        i. algebra: +, -, *, /
        ii. logical: && , || , ~


PART3 What you cannot do
1. YOU CANNOT USE C++ STANDARD LIBRARIES(only part functions are supported)
2. These types are not supported

*/

Translate::Translate(/* args */) {}
Translate::~Translate() {}

// read from "FILENAME"
int Translate::read(const char * FILENAME){
    std::memset(scr,0,sizeof(scr));
    std::ifstream f(FILENAME, std::ios::in);
    f.seekg(0, std::ios::end);
    int S = f.tellg();
    f.seekg(0, std::ios::beg);
    if(S > MAXLEN) throw std::runtime_error("script too long");
    f.read(scr,S);
    return S;
}




void Translate::print(){
    std::cout << scr;
}

// int get_header()

// int split_to_parts(const char * scr,int * pos){
//     // return number of functions.
//     // read script from `*scr`, store function start pos at `pos[i]`
//     int i = 0,cnt = 0,flag = 0,_from = 0;
//     while(scr[i] != 0){
//         if(scr[i] == '{') flag = 1,_from = i;
//         if(scr[i] == '{') cnt++;
//         if(scr[i] == '}') cnt--;
//         if(flag == 1 && cnt == 0){ // function ends
            
//             return 1 + split_to_parts(scr+i+1,pos+1);
//         }
//         i++;
//     }
//     return 0;
// }


void Translate::parse() {
    
}
