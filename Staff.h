//
// Created by alexc on 10/24/2019.
//

#ifndef EMPLOYEECECS282_STAFF_H
#define EMPLOYEECECS282_STAFF_H

#include "Employee.h"


class Staff: public Employee{
public:
    Staff(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
          const string &birthDate, double hourlyRate);
    double getHourlyRate() const;
    void setHourlyRate(double hourlyRate);
    void monthlySalary(){
        cout << "Staff\n";
    };
    void putData();
protected:
    double hourlyRate;
};


#endif //EMPLOYEECECS282_STAFF_H
