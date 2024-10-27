#include <iostream>
#include <cmath> // ���������� �������� ������������ �������
#include <iomanip> // ��� ������������ ������

using namespace std;

int main() {
    // ��� ��� ������ �� ������ ��������
    cout << "������: ����������� �������" << endl;
    cout << "�����: ���� ��'�" << endl;
    cout << "����: ����������� ������� �� ������ [-1; 4.5]" << endl;

    // ����������� ���������� �����
    double a = -1.0;
    double b = 4.5;
    int k;

    // �������� �������� k
    cout << "������ ���������� ����� k: ";
    cin >> k;

    // �������� ���������� ��������
    if (k <= 0) {
        cout << "�������: k ������� ���� ����������� ������." << endl;
        return 1;
    }

    // ���������� ����� h
    double h = (b - a) / k;

    // ����������� �������
    cout << "\n���������� ��������� (x, y):\n";
    cout << fixed << setprecision(4);

    for (int i = 0; i <= k; ++i) {
        double x = a + i * h;
        double y = cos(x * x + 4 * fabs(x - 1));

        cout << "x = " << setw(6) << x << " | y = " << setw(10) << y << endl;
    }

    return 0;
}