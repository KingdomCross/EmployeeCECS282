//
// Created by alexc on 10/24/2019.
//

#ifndef EMPLOYEECECS282_EDUCATION_H
#define EMPLOYEECECS282_EDUCATION_H

#include <iostream>

using namespace std;

class Education {
public:
    Education(const string &degree, const string &major, int research);
    const string &getDegree() const;
    void setDegree(const string &degree);
    const string &getMajor() const;
    void setMajor(const string &major);
    int getResearch() const;
    void setResearch(int research);
    void putData();
protected:
    string degree;
    string major;
    int research;
};


#endif //EMPLOYEECECS282_EDUCATION_H
