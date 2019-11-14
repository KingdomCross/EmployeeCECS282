//
// Created by alexc on 10/24/2019.
//

#include "Employee.h"

Employee::Employee(const string &lastname, const string &firstname, const string &iDnumber, const string &sex,
                   const string &birthDate) : lastname(lastname), firstname(firstname), IDnumber(iDnumber), sex(sex),
                                              birthDate(birthDate) {
}

void Employee::putData() {
    cout << "Last name: " << getLastname() << endl;
    cout << "First name: " << getFirstname() << endl;
    cout << "ID: " << getIDnumber() << endl;
    cout << "Sex: " << getSex() << endl;
    cout << "Birth date: " << getBirthDate() << endl;
}

const string &Employee::getLastname() const {
    return lastname;
}

void Employee::setLastname(const string &lastname) {
    Employee::lastname = lastname;
}

const string &Employee::getFirstname() const {
    return firstname;
}

void Employee::setFirstname(const string &firstname) {
    Employee::firstname = firstname;
}

const string &Employee::getIDnumber() const {
    return IDnumber;
}

void Employee::setIDnumber(const string &iDnumber) {
    IDnumber = iDnumber;
}

const string &Employee::getSex() const {
    return sex;
}

void Employee::setSex(const string &sex) {
    Employee::sex = sex;
}

const string &Employee::getBirthDate() const {
    return birthDate;
}

void Employee::setBirthDate(const string &birthDate) {
    Employee::birthDate = birthDate;
}

float Employee::monthlySalary() {
    return FACULTY_MONTHLY_SALARY;
}
