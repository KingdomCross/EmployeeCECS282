//
// Created by alexc on 10/24/2019.
//

#include "Staff.h"

Staff::Staff(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
             const string &birthDate, double hourlyRate) : Employee(lastname, firstname, iDnumber, sex, birthDate),
                                                        hourlyRate(hourlyRate) {}

double Staff::getHourlyRate() const {
    return hourlyRate;
}

void Staff::setHourlyRate(double hourlyRate) {
    Staff::hourlyRate = hourlyRate;
}

void Staff::putData() {
    Employee::putData();
    cout << "Hourly rate: $" << getHourlyRate() << endl;
}
