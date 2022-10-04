// lesson2Task2_accounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>



struct data {

    long number_accounts;
    std::string first_name_car_owner;
    double amount_of_money;

};

void new_balance(data& d, int b2) {
    d.amount_of_money = b2;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    data info;

    long nAccounts;
    std::string fName;
    double money;
    double nextMoney;


    std::cout << "¬ведите номер счЄта: ";
    std::cin >> nAccounts;

    std::cout << "¬ведите им€ владельца: ";
    std::cin >> fName;

    std::cout << "¬ведите баланс: ";
    std::cin >> money;

    std::cout << "¬ведите новый баланс: ";
    std::cin >> nextMoney;


    info.number_accounts = nAccounts;
    info.amount_of_money = money;
    info.first_name_car_owner = fName;

    new_balance(info, nextMoney);
    std::cout << "¬аш счет: " << " " << info.number_accounts << ", " << info.first_name_car_owner << ", " << info.amount_of_money;

}