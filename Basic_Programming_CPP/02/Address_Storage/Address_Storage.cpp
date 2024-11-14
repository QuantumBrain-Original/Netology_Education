#include <iostream>
#include <string>
#include <Windows.h>

struct Address_Storage
{
    std::string city_name;
    std::string street_name;
    int house_num;
    int apartment_num;
    int index_id;
};

void Print_Datas(Address_Storage& address)
{
    std::cout << "Город:\t\t" << address.city_name << std::endl;
    std::cout << "Улица:\t\t" << address.street_name << std::endl;
    std::cout << "Номер дома:\t" << address.house_num << std::endl;
    std::cout << "Номер квартиры:\t" << address.apartment_num << std::endl;
    std::cout << "Индекс:\t\t" << address.index_id << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Address_Storage current_address;

    current_address.city_name = "Санкт-Петербург";
    current_address.street_name = "Невский проспект";
    current_address.house_num = 7;
    current_address.apartment_num = 3;
    current_address.index_id = 190517;

    Print_Datas(current_address);
}
