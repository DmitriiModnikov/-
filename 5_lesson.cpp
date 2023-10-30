
#include<iostream>

using namespace std;

/*Операции над колонками: Вы можете выполнять различные операции над элементами определенной колонки. Например, вычисление суммы, нахождение максимального или минимального значения и т.д.
Обмен колонками: Вы можете менять местами колонки в массиве. Это может быть полезно, например, при сортировке по значениям в определенной колонке.
Преобразования: Можно применять различные преобразования к значениям определенной колонки, например, умножение на определенное число или применение некоторой функции к каждому элементу.
Алгоритмы: Вы можете использовать алгоритмы, предоставляемые стандартной библиотекой C++, для обработки значений в определенной колонке. Например, сортировку, поиск и другие операции*/

/* Задания 
1. Подсчитать пробелы в строке и поставить черточку вместо пробелом +
2. Найти максимальную сумму строк численного массива +
3. Найти первые 30 чисел фибоначи 
Первые два числа равны 0 и 1, а каждое последующее число равно сумме двух предыдущих чисел + 
4. Определить идут ли все числа массива по возрастанию + 
5. Найти сумму колонок массива +
6. Найти минимальное и максиально число одномерного массива -
7. Отзеркаалить одномерный массив -
8. Проверить являются ли строчка полностью из чисел -
9. Отодвинуть массива на 1 элемент вправо и влево -
*/

/* number 1 
int main ( ) { 

    string predl; 
    cout << "predl" << endl; 
    getline (cin, predl);
    int prob = 0; 

int count = predl.length(); //count - переменная счетчик/всместительность массива
//length - метод, который высчитывает количество символов и возвращает его 
//size_t - тот же самый int, не может быть - 
    for (int i = 0; i < count; i++)
    {
     if (predl[i] == ' ')
     {
        prob ++;
        predl[i] = '-';
     }
    }
    cout << predl << endl; 
}
*/

/* number 2 
int main ( ) { 

    int mass[2] = {1,5};
    int sizeOfarray = sizeof(mass)/4; 
    int total = 0;
for (int i = 0; i < sizeOfarray; i++)
{
    total += mass[i]; 
}
cout << total; 
}
*/

/* number 3
int main ( ) {

    int massive [2][2] = {{1,2},{3,4}};

    int sizeOfarray = sizeof(massive)/4; //sizeof вернет память 
    int numberOfarray = sizeOfarray/2; 
    int total = 0;
    int max = 0;

    for (int i = 0; i < numberOfarray; i++)
    {
        for (size_t j = 0; j < numberOfarray; j++)
        {
            total += massive[i][j];
        }
            if (i == 0)
            {
                max = total; 
            }
            else
            {
                if ( total > max )
                {
                    max = total;
                }
                
            }
            total = 0; 
    }
        cout << max; 
}
*/

/* number 4
int main ( ) { 

    int massiveOffibonachy [30]; 

    massiveOffibonachy [0] = 0; 
    massiveOffibonachy [1] = 1;

    for (size_t i = 2; i < 30 ; i++)
    {
        massiveOffibonachy [i] = massiveOffibonachy[i - 2] + massiveOffibonachy[i - 1];
    }
    for (size_t j = 0; j < 30; j++)
    {
        cout << massiveOffibonachy[j]<< endl; 
    }

}
*/

/* number 5 
int main ( ) { 
    int mass[5] = {1, 3, 5, 4, 10}; 

        for (size_t i = 0; i < 4; i++)
        {
               if ( mass [i] < mass [i+1])
               {
                    cout << " vozr\n";  
               }
               else
               {
                    cout << " ne vozr ";
                    break; 
               }
        }
}
*/

/* number 6
int main() {
    const int rows = 3;          // Количество строк в матрице
    const int columns = 4;       // Количество колонок в матрице
    int matrix[rows][columns] = {
        {1, 2, 3, 4},             // Инициализация матрицы
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int columnSums[columns] = {0}; // Массив для хранения сумм значений каждой колонки

    //Находим суммы колонок
    for (int col = 0; col < columns; ++col) {    //Проходим по каждой колонке
        for (int row = 0; row < rows; ++row) {    // Проход по строкам
            columnSums[col] += matrix[row][col];  //Значение элемента к сумме текущей колонки
        }
    }

    //Выводим суммы колонок
    for (int col = 0; col < columns; ++col) {    // Проходим по каждой колонке
        cout << "Summa Coloncy " << col << ": " << columnSums[col] <<endl; //Сумма текущей колонки
    }
}


int main() {
    const int rows = 3;
    const int columns = 4;
    int matrix[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int columnSums[columns] = {0}; // Массив для хранения сумм значений каждой колонки

    int col = 0; // Индекс текущей колонки

    // Находим суммы колонок с использованием do/while
    do {
        for (int row = 0; row < rows; ++row) {    // Внутренний цикл для прохода по строкам
            columnSums[col] += matrix[row][col];  // Добавляем значение элемента к сумме текущей колонки
        }
        
        col++; // Переходим к следующей колонке
    } while (col < columns);

    // Выводим суммы колонок
    for (int col = 0; col < columns; ++col) {
        cout << "Сумма колонки " << col << ": " << columnSums[col] << endl;
    }

    return 0;
}
*/

/* 
*/

 int main (
    {
        int mass[3] = { 10, 9, 3 } ;
         
         for (size_t i = 0; i < mass; i++)
         {
            cout <<  mass; 
         }
         
    }
 )