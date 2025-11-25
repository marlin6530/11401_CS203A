/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: (Teacher)Initial implementation
    - 2025/11/17: (Teacher)Refactored to use hash_fn.h
    - 2025/11/21: Change code offered from teacher
    - 2025/11/21: update new code about myHashInt & myHashString

   Developer: Chun-Ting Lin <s1133351@mail.yzu.edu.tw>
 */

#include "hash_fn.h"

int myHashInt(int key, int m) {
    int hash;
    int cube = key * key * key;
    int len = 0, tmp = cube;

    while(tmp > 0){
        ++len;
        tmp /= 10;
    }

    if(len <= 2){
        hash = cube;
    }
    else{
        int rightRemoveNum = (len - 2) / 2;
        while(rightRemoveNum--){
            cube /= 10;
        }
        hash = cube % 100;
    }

    return hash % m;
}

int myHashString(const char* str, int m) {
    unsigned long hash = 0;
    int i = 0;

    while(str[i] != '\0'){
        int j = i + 1;
        hash += str[i] * j * j * j;
        ++i;
    }
    
    return (int)(hash % m);
}