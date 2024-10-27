#include <iostream>
#include <cmath> // підключення бібліотеки математичних функцій
#include <iomanip> // для форматування виводу

using namespace std;

int main() {
    // Дані про задачу та автора програми
    cout << "Проект: Табулювання функції" << endl;
    cout << "Автор: Ваше Ім'я" << endl;
    cout << "Мета: Табулювання функції на відрізку [-1; 4.5]" << endl;

    // Ініціалізація початкових даних
    double a = -1.0;
    double b = 4.5;
    int k;

    // Введення значення k
    cout << "Введіть натуральне число k: ";
    cin >> k;

    // Перевірка коректності введення
    if (k <= 0) {
        cout << "Помилка: k повинно бути натуральним числом." << endl;
        return 1;
    }

    // Розрахунок кроку h
    double h = (b - a) / k;

    // Табулювання функції
    cout << "\nРезультати обчислень (x, y):\n";
    cout << fixed << setprecision(4);

    for (int i = 0; i <= k; ++i) {
        double x = a + i * h;
        double y = cos(x * x + 4 * fabs(x - 1));

        cout << "x = " << setw(6) << x << " | y = " << setw(10) << y << endl;
    }

    return 0;
}