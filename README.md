# Laba4HW
# Домашняя работа (Условие)

<img width="1466" height="146" alt="image" src="https://github.com/user-attachments/assets/f762d061-6f64-48da-8ee7-eda13848d992" />


# Алгоритм и блок-схема

1. Запросить у пользователя значение ламп: `x`, `y`.
2. Вычислить логическое условие активации сирены:  
   `result = (x % 2 != 0) ^ (y % 2 != 0);`.
3. Вывести результат вычисления логического выражения "Сирена активировна (1 - да, 0 - нет)".
4. Завершить программу.

# Блок-схема 

<img width="271" height="607" alt="image" src="https://github.com/user-attachments/assets/6cd32ab3-1035-4a64-a14f-3ece85c7dd43" />


Ссылка на мою диаграмму: <a href="https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22WJzUy3EMjr-eLaRKOxhb%22%3E3Vhdb5swFP0te0DqHloRQ0jyuHx0m9RKlaJpy6MXHGAzmBnTQH%2F9rrEdcFm6pE1TbS%2FGPr6%2Bts%2B9h0vieLO0%2BshxHt%2BykFAHuWHleHMHoYHrufCQSK2QIPAVEPEk1EYtsEweiFmp0TIJSWEZCsaoSHIbXLMsI2thYZhztrXNNozau%2BY4Ij1guca0j35NQhErdIxGLf6JJFFsdh4EEzWTYmOsb1LEOGTbDuQtHG%2FGGROql1YzQiV5hhe17nrP7O5gnGTikAV8uYq%2FTDY3%2Ft3tw%2BpnjpPqurhEygsJeyy0bjVUsJKvyRO%2BjJ2oDXnS7VIPGRcxi1iG6aJFp5yVWUjkCV0YtTY3jOUADgD8QYSodWLgUjCAYpFSPatTAvOIiCfO5u0Ih0wlLCWC17COE4pFcm%2FfHeuUiXZ2u6V3LAFWkKvT2xvq2NYmaV3bhTqXXtXGBjqdY7RQE7EjovdEsDpBoBTEIsnexokgyxw3UdyCXm0qIUFz8jkrQHAWufeYltqXA2GazGU7dR0wGY9MH9pp0y70IsIFqTpn6pMfd3RjiNx2NKYhw%2FXA5hq5%2B6Nl8XwsqcEJJeG9hSTglLz%2BJtdfDc1wpd01g3lljWo9OlBK%2Fgul9KLgeIdkfJPI0AUrTCmhLOI4hQvmhCdwDMIfz921E8eLZJNUxBSu%2FaJp2inSEpEt8Kh0ozTUV9Wwg4%2BbFkpLQIXckzWvoQ3W2Rf8KmUZmc5wscZhgmHulmWsnYBepJ84lVfKvhfyUTloVhuvEBHl2Ng%2BQ8hBX8gDf2gpGY1GV0P7vTl4LTGPTihm%2F63q26vXLe%2FMdcs%2FRMU2dX%2BRZU90nBQllVduhu5FJbsI0s6Vhu8U6r6X6HAhDep9BicSAbLLGZo8LmevJYHJCSUw%2Fm8l4J9ZAuN%2FuJBBhZr%2BsZwZ0dk1phFWD7qA67qXpgb6uvqhmdMooZ2Zm1oIu6KzybH3RjyZHE2pO%2FNH%2B4dOqLqUBs9i9PjP9Z6%2BDiAUhu3PYyW89k8Gb%2FEb%3C%2Fdiagram%3E%3C%2Fmxfile%3E">Диаграмма №4</a> 

# Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int x, y, result;
	printf("Введите две переменные через пробел: ");
	scanf("%d %d", &x, &y);
	result = (x % 2 != 0) ^ (y % 2 != 0);
	printf("Сирена активировна (1 - да, 0 - нет): %d\n", result);
}
```

# Пример работы программы при вводе значений 10 и 4

Контрольный пример программы x=2, y=3

Выход: 1

<img width="504" height="70" alt="image" src="https://github.com/user-attachments/assets/c4ad60df-8e50-463c-985f-d8650906cf38" />

Контрольный пример программы x=5, y=5

Выход: 0

<img width="508" height="65" alt="image" src="https://github.com/user-attachments/assets/856281a4-8315-465e-8baa-177ec683d60b" />

# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
