// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program calculates the cost of the pizza using the given diameter

#include <iostream>
#include <iomanip>

int main() {
    // This functions calculates the cost pizza
    const float LABOR_COST = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "Enter the size of the pizza you want (inch):";
    std:: cin >> diameter;

    // process
    sub_total = LABOR_COST + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * HST);

    // output
    std::cout <<""<< std::endl;
    std::cout <<"Your total for your pizza is: $"
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << total << std::endl;
}
