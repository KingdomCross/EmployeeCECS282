//
// Created by alexc on 10/24/2019.
//

#include "Education.h"

Education::Education(const string &degree, const string &major, int research) : degree(degree), major(major),
                                                                                research(research) {}

const string &Education::getDegree() const {
    return degree;
}

void Education::setDegree(const string &degree) {
    Education::degree = degree;
}

const string &Education::getMajor() const {
    return major;
}

void Education::setMajor(const string &major) {
    Education::major = major;
}

int Education::getResearch() const {
    return research;
}

void Education::setResearch(int research) {
    Education::research = research;
}

void Education::monthlySalary() {

}

void Education::putData() {
    cout << "Degree: " << getDegree() << endl;
    cout << "Major: " << getMajor() << endl;
    cout << "Reseach: " << getResearch() << endl;
}
