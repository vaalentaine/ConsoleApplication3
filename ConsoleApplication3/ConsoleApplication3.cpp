
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int year;
    cout << "Введите год: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " является високосным годом." << endl;
    }
    else {
        cout << year << " не является високосным годом." << endl;
    }





    double a, b, c;
    cout << "Введите длины трех сторон: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник может быть построен." << endl;
        if (a == b && b == c) {
            cout << "Треугольник равносторонний." << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Треугольник равнобедренный." << endl;
        }
        else {
            cout << "Треугольник разносторонний." << endl;
        }
    }
    else {
        cout << "Треугольник не может быть построен." << endl;
    }





    int score;
    cout << "Введите количество набранных баллов: ";
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "Оценка: A" << endl;
    }
    else if (score >= 80) {
        cout << "Оценка: B" << endl;
    }
    else if (score >= 70) {
        cout << "Оценка: C" << endl;
    }
    else if (score >= 60) {
        cout << "Оценка: D" << endl;
    }
    else if (score >= 0) {
        cout << "Оценка: F" << endl;
    }
    else {
        cout << "Некорректное количество баллов." << endl;
    }







    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Результат: " << num1 / num2 << endl;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
        break;
    default:
        cout << "Некорректная операция." << endl;
        break;

    




        double number;
        cout << "Введите число: ";
        cin >> number;

        if (number > 0) {
            cout << "Число положительное." << endl;
        }
        else if (number < 0) {
            cout << "Число отрицательное." << endl;
        }
        else {
            cout << "Число равно нулю." << endl;
        }





        double a, b, c;
        cout << "Введите три числа: ";
        cin >> a >> b >> c;

        double maxNum = max(max(a, b), c);
        double minNum = min(min(a, b), c);

        cout << "Наибольшее число: " << maxNum << endl;
        cout << "Наименьшее число: " << minNum << endl;






        int hour;
        cout << "Введите время в часах (0-23): ";
        cin >> hour;

        if (hour >= 0 && hour < 6) {
            cout << "Ночь" << endl;
        }
        else if (hour >= 6 && hour < 12) {
            cout << "Утро" << endl;
        }
        else if (hour >= 12 && hour < 18) {
            cout << "День" << endl;
        }
        else if (hour >= 18 && hour < 24) {
            cout << "Вечер" << endl;
        }
        else {
            cout << "Некорректное время." << endl;
        }




        int number;
        cout << "Введите число: ";
        cin >> number;

        if (number) {
            cout << number << " является простым числом." << endl;
        }
        else {
            cout << number << " не является простым числом." << endl;
        }




        double angle;
        cout << "Введите угол в градусах: ";
        cin >> angle;

        if (angle > 0 && angle < 90) {
            cout << "Угол острый." << endl;
        }
        else if (angle == 90) {
            cout << "Угол прямой." << endl;
        }
        else if (angle > 90 && angle < 180) {
            cout << "Угол тупой." << endl;
        }
        else if (angle == 180) {
            cout << "Угол развернутый." << endl;
        }
        else {
            cout << "Некорректный угол." << endl;
        }





        string str1, str2;

        cout << "Введите первую строку: ";
        cin >> str1;

        cout << "Введите вторую строку: ";
        cin >> str2;

        if (str1 == str2) {
            cout << "Строки одинаковые." << endl;
        }
        else if (str1 > str2) {
            cout << str1 << " больше по алфавиту." << endl;
        }
        else {
            cout << str2 << " больше по алфавиту." << endl;
        }

        return 0;

}


