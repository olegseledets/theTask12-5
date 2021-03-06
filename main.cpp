#include <iostream>

int main() {
  int userNumber;
  std::cout << "Ввод: ";
  std::cin >> userNumber;

  if (userNumber < 1 || userNumber > 3999){
    std::cout << "Число не верное!\n";
  }
  else{
    int thousand = userNumber / 1000;
    int hundred = userNumber % 1000 / 100;
    int dozens = userNumber % 100 / 10;
    int one = userNumber % 10;
    //Тысячи
    for (int i = 0; i < thousand; ++i){
      std::cout << "M";
    }
    //Сотни
    if (hundred == 4 || hundred == 9){
      std::cout << "C";
    }
    if (hundred >= 4 && hundred <= 8){
      std::cout << "D";
    }
    if (hundred == 9){
      std::cout << "M";
    }
    if (hundred % 5 < 4){
      for (int i = 0; i < hundred % 5; ++i){
        std::cout << "C";
      }
    }
    //Десятки
    if (dozens == 4 || dozens == 9){
      std::cout << "X";
    }
    if (dozens >= 4 && dozens <= 8){
      std::cout << "L";
    }
    if (dozens == 9){
      std::cout << "C";
    }
    if (dozens % 5 < 4){
      for (int i = 0; i < dozens % 5; ++i){
        std::cout << "X";
      }
    }
    //Единицы
    if (one == 4 || one == 9){
      std::cout << "I";
    }
    if (one >= 4 && one <= 8){
      std::cout << "V";
    }
    if (one == 9){
      std::cout << "X";
    }
    if (one % 5 < 4){
      for (int i = 0; i < one % 5; ++i){
        std::cout << "I";
      }
    }
  }

}

/*
Напишите программу, которая переводит данное пользователем число в римскую запись. Например, 19 в римской записи представляется как XIX.
Римская запись числа получается по следующим правилам. Сначала в ней идут буквы, описывающие количество тысяч в числе. Затем идут буквы, обозначающие количество сотен, затем буквы, обозначающие количество десятков, и в конце — буквы, обозначающие количество единиц. Для записи используются следующие буквы: 1 — I, 5 — V, 10 — X, 50 — L, 100 — C, 500 — D и 1000 — M. Число получается как сумма значений использованных в нем букв, за тем исключением, что если буква с меньшим значением идет после буквы с большим значением, то ее значение вычитается из значения числа. Вычитание используется только в случае, когда надо передать цифру 4 или 9, в остальных случаях используется сложение. (Например, 9 обозначается как IX, 40 обозначается как XL). В числе запрещено писать более трех одинаковых букв подряд (таким образом, максимальное число, которое можно записать по этим правилам, равно 3999).
Программе на вход дается целое число из диапазона от 1 до 3999. (Вы можете считывать его как число или как строку, если так удобнее.)
Программа должна вывести римскую запись данного числа.

Примеры:
Ввод: 351
Вывод: CCCLI

Ввод: 449
Вывод: CDXLIX

Ввод: 1313
Вывод: MCCCXIII

Ввод: 2020
Вывод: MMXX
*/