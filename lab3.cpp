#include<iostream>
using namespace std;

void task17();

void task21();

int main()
{
    cout<< " Виберіть одну з задач (введіть числа 1 чи 2) "<<endl<<
            " 1. If 17 "<<endl<<
            " 2. Geom 21 "<<endl;
    int menu;
    cin>> menu;
    switch (menu)
    {
        case 1: task17();
        break;

        case 2: task21();
        break;

        default: cout << " Неправильно веденно номер завдання (тільки 1 та 2) "<<endl;
    }

}

void task17()
//if 17
{
    float a, b, c;

    cout<< " A= ";// Показ в консоли A =
    cin>> a;//Считывает данные с консоли
    cout<< " B= ";// Показ в консоли B = 
    cin>> b;//Считывает данные с консоли
    cout<< " C= ";// Показ в консоли C = 
    cin>> c;//Считывает данные с консоли

    if (a > b && b > c){
            a *= 2;
            b *= 2;
            c *= 2;
        }
        else if (a < b && b < c) {
            a *= 2;
            b *= 2;
            c *= 2;
        }
        else{
            a *= -a;
            b *= -b;
            c *= -c;
        }
        cout << " Нове значення змінної  " << endl;
        cout << " A= "<< a << endl;
        cout << " B= "<< b << endl;
        cout << " C= "<< c << endl;
}

//Геометричні фігури
void task21() 
{ // Функція типу int
  float x, y, r; // Декларування змінних типу float
  bool ar1, ar2; // Декларування змінних типу bool
  int n, count = 0;

  cout << "Кількість разів: ";
  cin >> n;

    cout << "Уведiть радiус кола: ";
    std::cin >> r;

    for (int i = 1; i <= n; i++)
    {

      if (r > 0)
      {
        cout << "Уведiть точку за кординатою х : ";
        cin >> x;
        cout << "Уведiть точку за кординатою y : ";
        cin >> y;


        ar1 = pow((x-0),2)+pow((y-0),2) < pow(r,2) && y > 0 && x > 0 && y > x; //Рівняння першої фігури(верхньої)
        ar2 = pow((x - 0), 2) + pow((y - 0), 2) > pow(r, 2) && y < x && x<0 && y>-2 * r; //Рівняння другої фігури(нижньої)

        if (ar1 || ar2) {
          cout << "In" << endl;
          count++;
        }
        else {
          cout << "Out" << endl;
        }

      }
      else {
        cout << "Радіус не може бути від'ємним" << endl;
      }
    }
  cout << "Кількість вдалих спроб: " << count << " / " << n;
}