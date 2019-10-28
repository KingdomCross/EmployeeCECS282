//
// Created by alexc on 10/24/2019.
//

#include "Faculty.h"

Faculty::Faculty(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
                 const string &birthDate, const string &degree, const string &major, int research, const string &level) : Employee(lastname, firstname, iDnumber, sex, birthDate),
                                                  Education(degree, major, research), level(level) {}

const string &Faculty::getLevel() const {
    return level;
}

void Faculty::setLevel(const string &level) {
    Faculty::level = level;
}

void Faculty::putData() {
    Employee::putData();
    Education::putData();
}
