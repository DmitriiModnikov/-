#include <iostream>

using namespace std;

// Массив - это ячейка памяти состоящая из других ячеек, обращение производится по индексам.

/*
int main () {

    int massiv[3] = { 1,2,3 };

  //Меняем значение
  massiv[0] = 100;
  massiv[1] = 200;
  massiv[2] = 300;
}
*/

/*
int main()
{
  char letter[15] = { 'I',' ','l','o','v','e',' ','y','o','u',' ','D','A','D','Y' };

  for (int i = 0; i < 15; i++)
    cout << letter[i];

  string sentence = "I love you";

  int z[10];
  int a;
  for (int i = 0; i < 10; i++)
  {
    cin >> a;
    z[i] = a * a * a;
  }
}
*/

/*

int main ( ) {
    string y_name;
    cout << "Enter your name: ";
  cin >> y_name ;
}
*/

/*
int main()
{
    // Три аналогичных вида объявления двухмерных массивов
    int d[3][2] = {{3, 4}, {2, 5}, {1, 6}};
    int dp[3][2] = {3, 4, 2, 5, 1, 6};
    int dpp[][2] = {{3, 4}, {2, 5}, {1, 6}};

    // Присваеваем значение при помощи цикла
    int num[3][3];
    for (int t = 0; t < 3; t++)
        for (int i = 0; i < 3; i++)
            num[t][i] = t * 5 + i * 2 + 1;
}
*/

/*
void func(int* array) //передаем указатель
{
  printf("First type %d %d\n", array[0], array[1]);
}

void func1(int array[])
{
  printf("Second type %d %d\n", array[0], array[1]);//В скобках ничего не написано потому, в функцию автоматом передается ссылка на первый элемент
}

void func2(int array[2])
{
  printf("Third type %d %d\n", array[0], array[1]);
}

void func3(int arrays[][2])
{
  printf("First 2.type %d %d %d %d\n", arrays[0][0], arrays[0][1], arrays[1][0], arrays[1][1]);
}

void func4(int** arrays)
{
  printf("First 2.type %d %d %d %d\n", arrays[0][0], arrays[0][1], arrays[1][0], arrays[1][1]);
}

void func5(int arrays[2][2])
{
  printf("Third 2.type %d %d %d %d\n", arrays[0][0], arrays[0][1], arrays[1][0], arrays[1][1]);
}

int main()
{
  int array[] = { 2,3 };
  func(array);
    printf("First type %d %d\n", array[0], array[1]);
  func1(array);
  func2(array);
  int arrays[2][2] = { {2,3}, {4,1} };
  func3(arrays);
  func5(arrays);
}
*/

/*1.  Сделать базу, при помощи массива [5][3], где 5 это разные классы в школе, а 3 кол учеников в каждом классе
2.  Через do-while проверить что мы ввели, если ввод неверный просит ввести еще раз
(1.Ввод информации в цикле для каждого класса ученика
2. вывод
3. закрытие консоли)

3. В зависимости от выбора(switch) Вызываем ту или иную функцию(ввод, вывод, закрытие)

4. В функцию передать массив двумерный, и дальше проводить манипуляция

Структура программы
void funcInput(int s[5][3]);
void funcOutput(int s[5][3]);

while(1)
{
Do-while //Проверяем попал ли в диапозон чисел пользователь, того, что мы должны выбрать
switch // в зависимости вызываем ту или иную функцию
}
*/

//int a;
//int b;
//int g;
//int t;

/*
void inPut(int Class[5][3])
{
    for (b = 0; b < 5; b++)
    {
        for (g = 0; g < 3; g++)
        {
            cout << "Vvedite otenku uceniku: " << endl;
            cin >> t; 
            Class[b][g] = t;
        }
    }
}

void outPut(int Class[5][3])
{
    for (b = 0; b < 5; b++)
    {
        for (g = 0; g < 3; g++)
        {
            cout << "Otenka ucenika:" << g << "Klass: " << b << "  " << Class[b][g] << endl;
        }
    }
}

int main()
{
    int Class[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};

    cout << "Vvedite inf: " << endl;
    cout << "Vivedite inf: " << endl;
    cout << "Zakryti console: " << endl;

    while (1)
    {
        do
    {
        cout << "Viberyte odin iz punktov menyu: ";
        cin >> a;
        switch (a)
        {
        case 1:
            inPut(Class);
            break;
        case 2:
            outPut(Class);
            break;
        case 3:
            exit(0);
        default:
            cout <<" ";
        }
    } while (a > 3 || a < 1);
    }
}
*/