// Дм1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int num1, num2;
    char operation;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Выберите операцию (+, -, *, /): ";
    cin >> operation;
    int result;
    switch (operation) {
    case '+':
        result = num1 + num2;
        cout << "Результат: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Результат: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Результат: " << result << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Деление на ноль не определено." << endl;
        }
        else {
            result = num1 / num2;
            cout << "Результат: " << result << endl;
        }
        break;
    default:
        cout << "Неизвестная операция." << endl;
    }

    return 0;
}
