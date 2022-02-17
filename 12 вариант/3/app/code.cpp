/*
  Составить две программы, первая из которых вводит составные части структуры данных,
  приведѐнной в индивидуальном варианте, как десятичные числа и формирует из них заданную
  упакованную структуру как 16-ричное число. Вторая программа вводит упакованную структуру
  как 16-ричное число и выводит значения отдельных еѐ составных частей как десятичные числа.
*/

#include <iostream>
#include "lib.h"
#include "add.h"

using namespace std;

int main() {
  // смена кодировки
  system("chcp 65001");

  int d = 0;
  int a = 0;
  int b = 0;

  draw_line(20);

  cout << "Тип операндов (0-байты, 1-слова): ";
  scanf("%d", &d);

  cout << "Регистр - 1 операнд: ";
  scanf("%d", &a);

  cout << "Регистр - 2 операнд: ";
  scanf("%d", &b);

  draw_line(20);

  unsigned short z =  code(a, b, d);
  cout << "Формат комманды сложения: 0x" << hex << z << endl;

  return 0;
}
