/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ilya
 *
 * Created on August 30, 2017, 3:11 PM
 */

#include <cstdlib>
#include <iostream>
#include "Helloer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Helloer helloer("World");
    cout << helloer.message() << endl;
    return 0;
}

