#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include "File_1.h"
#include <time.h>
#include <math.h>
#define Pi 3.14
#define sinus30 3.14/6
#define p 3.14/4

using namespace std;

/*
ВСЕ ДИАПОЗОНЫ, КОТОРЫЕ ЗАХВАТЫВАЕТ ДАННЫЙ ТИП ДАННЫХ
*****ЦЕЛЫЕ ЧИСЛА
short int      [-32 768 до 32 767] //2 байта
unsigned short int  [от 0 до 65 535]
int          [-2 147 483 648 до 2 147 483 647] //4 байта
unsigned int    [0 до 4 294 967 295]
long int            [–9 223 372 036 854 775 808 до 9 223 372 036 854 775 807] //8 байт
unsigned long int   [от 0 до 18 446 744 073 709 551 615]

*****ВЕЩЕСТВЕННЫЕ ЧИСЛА
float        [-3.4*10^38 до 3.4*10^38] // 8 байт
double        [±4.9*10^-324 до ±1.8*10^308] // 8 байт

*****ЛОГИЧЕСКИЙ ТИП ДАННЫХ
bool        (false/true) 0/1 //1 байт

*****СИМВОЛЫ
char        [-128 до 127] //1 байт
unsigned char       [0 до 256]
string - много charov, просто может вмещать предложения и не слова, а не отдельно один символ
*/

/*
 * Extern - это переменная иннициализирована где-то программе, не важно где, она будет действовать.
 * Static - помогает передавать значение переменной меж фунциями и служит для сохранения предыдущего значения.
 * Register - когда идет частое обращение к переменной допусти к циклу. Переменная записывается в процессор, а не в память.
 */

/*
int main () {

int a = 10;

    int mod = abs(a); 
    double sn = sin(a);
    double lg1 = log(10); 
    double lg2 = log(a);

    cout << mod << "\n" << sn << "\n" << lg1 << "\n" << lg2 << "\n";

}
 */

/* 
pow(\na,b) - возводит a  в степень b
pow(\na,b) – долго работает
Лучше использовать n раз при помощи цикла
1.  abs(a) - модуль целого а                          
2.  fabs(a) - модуль вещественного а
3.  sqrt(a) - квадратный корень a                
4.  cbrt(a) - кубический корень а
5.  sin(a) - синус угла а                                    
6.  asin(a) - арксинус а
7.  cos(a) – косинус угла а                             
8.  acos(a) - арккосинус а
9.  tan(a) – тангес угла а                                 
10.  atan(a) - арктангес а
11.  log(a) – логарифм a                                   
12.  log10(a) - десятичный логарифм
13. pow(a,b) */

  /*
  x = x + x; // x += x;
  y = y - y; // y -= y;
  x = x * x; // x *= x;  x = x << x;
  y = y / 2; // y /= 2;  y = y >> 2;
  x = x + 1; // x++;
  y = y - 1; //  y--;
  */

/*
int main()
{

    srand(time(NULL));

    register int i;
    extern int random;

    for (i = 0; i < 10; i++)
    {
        random = rand() % 10;
        cout << random;
    }
    //[b-a+1]+a
}
* /

    /*
    int main()
    {
        // int i; //Если инициализировать так, то естся оперативная память (Можно использовать на маленьких циклах)

        register int i; // Записывается в процессор (Не нагружает оперативную систему)
        extern int max; // Помогает использовать переменные, которые уже инициалезированны где - то в коде

        for (i = 0; i < 10; i++) {
            cout << " Hello\n" ;
        }
    }
    */

    /*
    int global_Variable = 3; // Всегда находится за "main"
    void Sasha(void)
    {
        static int Sasha1 = 3;
        Sasha1 += 1;
        cout << Sasha1 << endl;
    }
    int main()
    {
        Sasha();
        Sasha();
        Sasha();
    }
    */

    /*
    int main()
    {

        int local_variable = 10;

        short int Num = 32766;
        double FloatNum = 2.4;
        bool areSasaAndGermanFriends = 0;
        int a = 201;
        unsigned char aLetter = a;
        cout << sizeof(areSasaAndGermanFriends) << endl;
        cout << sizeof(double) << endl;
        cout << sizeof(short int) << endl;
        cout << sizeof(int) << endl;
        cout << sizeof(char) << endl;
    }

    */