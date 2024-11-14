#include <iostream>
#include <string>
#include "Windows.h"

struct Bank_Account
{
    int account_ID;
    std::string person_name;
    double all_money;
};

void Bank_Account_Set_Money(Bank_Account &person, int current_money) {
    person.all_money = current_money;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    double userMoney;
    Bank_Account account;

    std::cout << "Введите номер счёта: " << std::endl;
    std::cin >> account.account_ID;
    std::cout << "Введите имя владельца: " << std::endl;
    std::cin >> account.person_name;
    std::cout << "Введите баланс: " << std::endl;
    std::cin >> account.all_money;

    system("cls");

    std::cout << "Введите новый баланс: " << std::endl;
    std::cin >> userMoney;

    Bank_Account_Set_Money(account, userMoney);

    std::cout << "Ваш счёт: " << account.account_ID << " " << account.person_name << " " << account.all_money << std::endl;
}
