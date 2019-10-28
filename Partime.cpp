//
// Created by alexc on 10/24/2019.
//

#include "Partime.h"

Partime::Partime(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
                 const string &birthDate, int hourlyRate, int hour) : Staff(lastname, firstname, iDnumber, sex,
                                                                            birthDate, hourlyRate), hour(hour) {}

int Partime::getHour() const {
    return hour;
}

void Partime::setHour(int hour) {
    Partime::hour = hour;
}

void Partime::putData() {
    Staff::putData();
}
