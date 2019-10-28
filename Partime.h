//
// Created by alexc on 10/24/2019.
//

#ifndef EMPLOYEECECS282_PARTIME_H
#define EMPLOYEECECS282_PARTIME_H

#include "Staff.h"

class Partime: public Staff {
public:
    Partime(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
            const string &birthDate, int hourlyRate, int hour);
    int getHour() const;
    void setHour(int hour);
    void montlySalary(){
        cout << "Partime\n";
    };
    void putData();
protected:
    int hour;
};


#endif //EMPLOYEECECS282_PARTIME_H
