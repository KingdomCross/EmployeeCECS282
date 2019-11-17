//
// Created by alexc on 10/24/2019.
//

#ifndef EMPLOYEECECS282_EMPLOYEE_H
#define EMPLOYEECECS282_EMPLOYEE_H

#include <iostream>
using namespace std;

float const FACULTY_MONTHLY_SALARY = 5000.00;
int const STAFF_MONTHLY_HOURS_WORKED = 160;

class Employee {
public:
    Employee(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
             const string &birthDate);

    virtual void putData();
    const string &getLastname() const;
    void setLastname(const string &lastname);
    const string &getFirstname() const;
    void setFirstname(const string &firstname);
    const string &getIDnumber() const;
    void setIDnumber(const string &iDnumber);
    const string &getSex() const;
    void setSex(const string &sex);
    const string &getBirthDate() const;
    void setBirthDate(const string &birthDate);
    virtual float monthlySalary();
protected:
    string lastname;
    string firstname;
    string IDnumber;
    string sex;
    string birthDate;
};


#endif //EMPLOYEECECS282_EMPLOYEE_H
