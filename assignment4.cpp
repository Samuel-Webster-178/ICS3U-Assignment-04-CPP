// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>

int main() {
    // I calculate circumference of a circle
    int intNumberOfClassesHeld;
    int intNumberOfClassesAttended;
    std::string strNumberOfClassesHeld;
    std::string strNumberOfClassesAttended;
    double attendancePercentage;

    // input
    std::cout << "How many classes were held?: ";
    std::cin >> strNumberOfClassesHeld;
    std::cout << "How many classes were attended?: ";
    std::cin >> strNumberOfClassesAttended;
    std::cout << "" << std::endl;

    // process & output
    try {
        intNumberOfClassesHeld = std::stoi(strNumberOfClassesHeld);
        intNumberOfClassesAttended = std::stoi(strNumberOfClassesAttended);
        if (
            intNumberOfClassesAttended >= 0 &&
            intNumberOfClassesHeld >= 0 &&
            intNumberOfClassesAttended <= intNumberOfClassesHeld
        ) {
            attendancePercentage = (
                100 * intNumberOfClassesAttended / intNumberOfClassesHeld);
            if (attendancePercentage >= 75) {
                std::cout << "You can attend the exam with an attendance of "
                << attendancePercentage << "%" << std::endl;
            } else if (attendancePercentage < 75) {
                std::cout << "You can’t attend the exam with an attendance of "
                << attendancePercentage << "%" << std::endl;
            } else {
                std::cout << "You shouldn't be here" << std::endl;
            }
        } else {
            std::cout << "Please enter realistic values" << std::endl;
        }
    } catch (...) {
        std::cout << "Please enter an integer" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
