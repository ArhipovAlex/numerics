#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    int decimal;
    cout << "Введите десятичное число: "; cin >> decimal;
    const int max_bit_capasity = 32; //объем памяти для храниения Int
    bool bin[max_bit_capasity] = {};//будет хранить разряды двоичного числа;
    int i = 0;
    while (decimal)
    {
        bin[i++] = decimal % 2;//получаем двоичный разряд числа, переходим на следующий разряд
        decimal /= 2; //убираем полученный двоичный разряд из исходного числа
    }
    for (i--;i >= 0; i--) {
        cout << bin[i];
        if (i % 8 == 0) cout << " "; //разделяем на байты (группа и 2 тетрадов или 8 разрядов)
        if (i % 4 == 0) cout << " "; //разделяем на тетрады (группа из 4 двоичных разрядов)
    }
}
