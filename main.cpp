#include <iostream>
#include <string>

using namespace std;


void first() {
    int n;
    int *A;
    cout << "Введите размер массива" << endl;
    cin >> n;
    cout << "размер массива равен " << n << endl;
    A = new int[n];
    int povtoreniye = 0;
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i + 1 << " число ";
        cin >> *(A + i);
    }
    int max = A[0];
    cout << "max =" << max << endl;

    for (int i = 0; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
            cout << "max=" << max << endl;
            povtoreniye = 0;
        }
        if (max == A[i]) {
            povtoreniye++;
        }
    }

    cout << "максимальное значение массива равно " << max << endl;
    cout << "количество повторений максимального числа " << povtoreniye;
}
void second() {
    int n;
    cout << "введите количство слов в массиве" << endl;
    cin >> n;
    string *massiv;
    massiv = new string[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i + 1 << " слово в строке ";
        cin >> *(massiv + i);
    }

    string min = massiv[0];
    string max = massiv[0];


    for (int i = 0; i < n; i++) {
        cout << "длина " << i + 1 << " слова " << massiv[i] << "= " << massiv[i].length() << endl;
        if (massiv[i].length() < min.length()) {
            min = massiv[i];
        }
        if (massiv[i].length() > max.length()) {
            max = massiv[i];
        }
    }
    cout << "самое длинное слово массива  " << max << endl;
    cout << "самое короткое слово  массива " << min << endl;
}



int main() {
    int choice;
    do {
        cout << "Выберите варианты работы" << endl;
        cout << "1-  Задан массив A из n чисел. Подсчитать, сколько раз встречается в нем максимальное число." << endl;
        cout << "2-Определить самое короткое и самое длинное слово в строке." << endl;
        cout << "3-Выход из программы" << endl;
        cout<<"определились? Напишите цифру."<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                first();
                break;
            case 2:
                second();
                break;
            case 3 :
                break;
        }
    } while (choice = !3);
}
