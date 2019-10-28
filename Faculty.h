//
// Created by alexc on 10/24/2019.
//

#ifndef EMPLOYEECECS282_FACULTY_H
#define EMPLOYEECECS282_FACULTY_H

#include "Employee.h"
#include "Education.h"

class Faculty: public Employee, public Education {
public:
    Faculty(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
            const string &birthDate, const string &degree, const string &major, int research, const string &level);
    const string &getLevel() const;
    void setLevel(const string &level);
    void montlySalary(){
        cout << "Faculty\n";
    };
    void putData();
protected:
    string level;
};


#endif //EMPLOYEECECS282_FACULTY_H
