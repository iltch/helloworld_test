/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Helloer.h
 * Author: ilya
 *
 * Created on September 11, 2017, 3:55 PM
 */

#ifndef HELLOER_H
#define HELLOER_H

#include <iostream>

using namespace std;

class Helloer {
public:
    Helloer();
    Helloer(const string& aWho); 
    Helloer(const Helloer& orig);
    virtual ~Helloer();
    string message() const;
private:
    string who;    
};

#endif /* HELLOER_H */

