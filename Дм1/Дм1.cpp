#include <cmath>
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
int main() {
    // Ввод сопротивлений
    float R1, R2, R3;
    cout << "Введите сопротивления R1, R2, R3: ";
    cin >> R1 >> R2 >> R3;

    // Вычисление общего сопротивления
    float Req = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    // Вывод результата
    cout << "Общее сопротивление соединения: " << Req << " Ом" << endl;

    return 0;
}
int main() {
    double x1, y1, x2, y2;

    cout << "Введите координаты первой точки (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Введите координаты второй точки (x2, y2): ";
    cin >> x2 >> y2;

    double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    cout << "Расстояние между двумя точками: " << distance << endl;

    return 0;
}
