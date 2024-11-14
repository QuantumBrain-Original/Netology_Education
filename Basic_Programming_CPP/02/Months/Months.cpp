#include <iostream>
#include "Windows.h"

enum class MountsTable
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

void Calc_Mounts(int mountNum)
{
    MountsTable mountNum2 = static_cast<MountsTable>(mountNum);
    switch (mountNum2)
    {
        case MountsTable::january:
        {
            std::cout << "Январь\n" << std::endl;
            break;
        }
        case MountsTable::february:
        {
            std::cout << "Февраль\n" << std::endl;
            break;
        }
        case MountsTable::march:
        {
            std::cout << "Март\n" << std::endl;
            break;
        }
        case MountsTable::april:
        {
            std::cout << "Апрель\n" << std::endl;
            break;
        }
        case MountsTable::may:
        {
            std::cout << "Май\n" << std::endl;
            break;
        }
        case MountsTable::june:
        {
            std::cout << "Июнь\n" << std::endl;
            break;
        }
        case MountsTable::july:
        {
            std::cout << "Июль\n" << std::endl;
            break;
        }
        case MountsTable::august:
        {
            std::cout << "Август\n" << std::endl;
            break;
        }
        case MountsTable::september:
        {
            std::cout << "Сентябрь\n" << std::endl;
            break;
        }
        case MountsTable::october:
        {
            std::cout << "Октябрь\n" << std::endl;
            break;
        }
        case MountsTable::november:
        {
            std::cout << "Ноябрь\n" << std::endl;
            break;
        }
        case MountsTable::december:
        {
            std::cout << "Декабрь\n" << std::endl;
            break;
        }
        default:
        {
            std::cout << "Введен неверный номер!\nПопробуйте снова\n" << std::endl;
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int mount;

    do
    {
        std::cout << "Введите номер месяца или нажмите 0 для выхода: ";
        std::cin >> mount;

        Calc_Mounts(mount);
    } while (mount != 0);

    std::cout << "До свидания";
}
