#include <iostream>

using namespace std;

/*
int main () {

bool IsIt = 0;

int b;

for (;;) // for (;;) - бесконечный цикл //ни начала, ни конца
{
  cin >> b;
  if(b==4)
    break;
}

}
*/

/*
int main () {

bool IsIt = 0;

int x, y;

    for (x = 100, y = 1; x != 10 && y < 19; x -= 5, y++)
    {

    }

}
*/

/*
int main () {
while (1)  //Данный цикл будем выполнятся бесконечно
  {
    static int x = 10;
    //Переменная static, потому что без этого глобал классификатора переменная в бесконечном цикле будет возвращать одно и тоже значение.
    cout << x;
    x--;
    if (x == 3)
      break;
  }
  }
*/

/*
int main () {

  int z = 1;
  while (z <= 10)
  {
    cout << z;
    z++; //Цикл выполняется пока z меньше или будет равен 10
  }
}
*/

/*
int main()
{
  int trueVariable = 1;
  while (trueVariable) //Условие истинное пока переменная равна число 1 и числа больше одного дают истинный ответ
  {
    cin >> trueVariable;
  }
}
*/

/*
int function(void)
{
  return 1001;
}

int main()
{
  {
    int y = 11;
    if (y == 10)
      goto metka;
  metka:
    cout << "Y==3";
  }

  int gr = function();

  for (;;)
  {
    cout << gr;
    if (gr == 995)
      break;
    else //нет смысла писать else, потому что оно и так исполнится
      gr -= 2;
  }
}
*/

// int ch;

/*

int main()
{
  cout << "Press 1 to clear";
  cout << "Press 2 to talk";
  cout << "Press 3 to debug";
  cout << "Press 4 to run";

  // Цикл выполнится точно один раз и сделает проверку только после выполнения блока do{}, проверка проходит в операторе while
  do
  {
    cout << "choose an option: ";

    cin >> ch;
    switch (ch)
    {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case '4': // '' - должны стоять только в char
    {
      exit(0); // Возврат в операционную систему, если человек введет 4
    }
    }
  } while (ch > 4 || ch < 1);
  // Идет проверка, если мы ввели число не равное 1,2,3,4, цикл повторится заново
}

*/

/*
int main ( ) {

    int g = 256 ;
    int h = 0;

while ( g > 0 ) {

    cout << h;
    h += g%10;
    g = g/10;
}
}
*/

/*
int main()
{

    char a = '*';
    int b;
    int z;
    char h = '+';

    for (b = 0; b < 4; b++)
    {
        for (z = 0; z < b + 1; z++)
        {
            if (z % 2 == 0)
            {
                cout << a;
            }
            else
            {
                cout << h;
            }
        }
        cout << endl;
    }
}
*/

