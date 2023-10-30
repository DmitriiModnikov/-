#include <iostream>
#include <stdlib.h>

using namespace std;

//Условный оператор switch может проверять только значения int, char на какие-либо значения
//Слово break; - как бы означает, если это условие сработало, то из нашего условного оператора надо выйти и прекратить проверку последующих условий
//Слово default - означает дефолтное значение.
//Если слово break не поставить будут проверяться все последующие операторы

/*
int main()
{
  int a;

  cin >> a;

  switch (a)   //Данное условие будет проверять данную переменную, которая в скобках на символы
  {
  case 1:
    cout<<"I'm glad that you're happy)";
    break;
  case 2:
    cout<<"I'm sad that you're unhappy("; 
    break;
  case 3:
    cout<<"It's a pity that you're sad(";
    break;
  case 4:
    cout<<"May I help you?";
    break;
  case 5:
    cout<<"I'm sorry for bothering you";
    break;
  
  default: cout<<"You have written something wrong\n";
    break;
  }
  system ( "pause" );
}
*/

/*
int main()
{
    int a;

    cout << " Write 1 at 5 ";
    cin >> a;
    if (a == 1 || a ==2|| a == 3 || a == 4 || a == 5 )
    {
        switch (a) // Данное условие будет проверять данную переменную, которая в скобках на символы
        {       case 1:
            cout << "I'm glad that you're happy)";
            break;
        case2
            cout << "I'm sad that you're unhappy(";
            break;
        case3
            cout << "It's a pity that you're sad(";
            break;
        case 4:
            cout << "May I help you?";
            break;
        case 5:
            cout << "I'm sorry for bothering you";
            break;

        default:
            cout << "You have written something wrong";
            break;
        }
    }
    else
    {
        cout << " Not Good, baby ";
    }
}
*/

/*
int main()
{
    int i = -10;
    int j =2
    int squareOfTheNum = ((i < 0) && (j =2) ? i * j : -(i * j);
    cout << squareOfTheNum;
}/: - обозначает else
*/

/*
int main ( ){

int a = 18, b = 98;

  if (a >= 18 && b <= 98)
    cout << "It is true\n";
  else
    cout  << "It is false\n" ;

  int S = 18, Q = 98;
  if (S >= 18 || Q < 98)
    cout << "It is true\n";
  else
    cout  << "It is false\n" ;
}
//ctrl+fn+f2
// && - " и " (амперсант)
// || - " или "
*/

/*
int main()
{
    int a = 3;
    double b 21314;
    if (a > 3)
    {
        cout < "a > 3";
   }
    else if ( a == 3 ){
        cout << "a = 3" ;
    }
    else if ( b ==2){
        cout << "@" << endl;
    }
    else   {
        cout << "a < 3";
    }

}
// дальше else if не зайдет дальше если оно выполняется
// если if выполнется, то остальные не выполнятся
// == при сравнение
// = при присвоении

*/

/*
int main ( ) {

int oddNums,evenNums,pozitiveNums,negativeNums;

int a =2, b = 3 , c = 7 ;

    evenNums=(!(a2+!(b2+!(c2); // если нет остатка - 1, если есть - 0
    oddus=(a2+(b2+(c2; // если есть остаток - 1 , если нет - 0
    pozitiveNums=(a>0)+(b>0)+(c>0); // если + то 1, если - то  0
    negativeNums=a0)(<0+c<0); // тоже самое обратно
  cout << oddNums << endl;
    cout << evenNums << endl;
    cout << pozitiveNums << endl;
    cout << negativeNums << endl;

//Битовые операцие - возвращают либо T, либо F (1 или 0)
}
*/