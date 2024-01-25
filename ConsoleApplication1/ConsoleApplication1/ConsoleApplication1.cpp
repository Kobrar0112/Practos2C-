#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    float num1, num2;

    do {
        cout << "\n";
        cout << "Выберите операцию : \n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Умножение\n";
        cout << "4. Деление\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "0. Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            cout << "Результат: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            if (num2 != 0)
                cout << "Результат: " << num1 / num2 << endl;
            else
                cout << "Деление на ноль невозможно!" << endl;
            break;
        case 5:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            cout << "Результат: " << pow(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0)
                cout << "Результат: " << sqrt(num1) << endl;
            else
                cout << "Невозможно извлечь квадратный корень из отрицательного числа!" << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Результат: " << num1 / 100 << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 >= 0 && num1 == static_cast<int>(num1))
                cout << "Результат: " << factorial(num1) << endl;
            else
                cout << "Невозможно найти факториал от отрицательного числа или числа с плавающей запятой!" << endl;
            break;
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}