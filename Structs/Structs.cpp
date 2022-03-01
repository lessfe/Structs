#include <iostream>
#include <string.h>

//Структуры

struct companies
{
    char name[50];
    int cost;
    int n_workers;

};

struct point {
    int x;
    int y;
};

struct triangle {
    struct point p1;
    struct point p2;
    struct point p3;
} tr1;

// Наименование такой структуры указывается после второй фигурной скобки
typedef struct {
    int x;
    int y;
} pointt;

//При создании структуры можно опустиить наименование самой структуры, если сразу же определять переменную этого типа.
struct
{
    char name[50];
    int cost;
    int n_workers;

};

int exist_company(const char* s, struct companies company)
{
    /*Сделаем проверку на совпадение принимаемой строки(s) и принимаемой переменной типа(struct companies)*/
    if (strcmp(s, company.name) == 0) // cmp - Comparison; сравнивает две строки
        return 1;
    else
        return 0;
   
}

int main()
{
    
    //Структура, как элемент другой структуры
    /*

    Созадим две структуры:
    1.	Структура с двумя переменными x, y;
    struct point {
                    int x;
    int y;
    };

    2.	Структура треугольника, и создадим в ней три переменные типа struct triangle
    struct triangle {
        struct point p1;
        struct point p2;
        struct point p3;
    };

    Создадим переменную tr1 типа struct triangle

    struct triangle {
        struct point p1;
        struct point p2;
        struct point p3;
    } tr1;

    Чтобы получить доступ к такой переменной, нужно сделать следующее:
    Так как переменные tr1 и p1 это переменные структуры, то чтобы получить доступ к элементам первой 	структуры нужно сделать следующее:

    tr1.p1.x = 10;
    */

    //Создание структуры с помощью typedef
    /*
    Наименование такой структуры указывается после второй фигурной скобки
    typedef struct {
        int x;
        int y;
    } pointt;

                    Инициализация такой структуры
    pointt p1 = {1, 6};
     */
   
    /*
    struct companies my_company = { "GOALACTION", 350, 10000 }; 
    
    У нас есть переменная типа (struct companies), 
    эту переменную передаем в функцию (exist_company).

    В функции проверяем существует ли в принимаемой переменной типа (struct companies), строка "GOALACTION", через другую функцию (strcmp).
    

    if (exist_company("GOALACTION", my_company))
    {
        std::cout << "Exist!";

    }
    else
    {
        std::cout << "Doesn't exist!";
    }

    /*
    -----------Здесь мы создали массив на 10 эл-ов, каждый объект которого типа struct companies-----------
                В каждом таком объекте есть:
                1. Строка на 50 символов (char name[50]).
                2. Две переменные типа int (int cost, int n_workers).
    
    
    -----------Инициализация объектов структуры происходит следующим образом:-----------
    
    struct companies it_companies[10] = 
    {
                                         "Google", 300, 10000, // Иницализация первого объекта
                                         "Facebook", 450, 30000, // Иницализация второго объекта
                                         "Intel", 770, 25000 // Иницализация третьего объекта
    };
    -----------Вторые фигурные скобки внутри инициализации стрктуры можно не ставить, но есть такие компиляторы, которые на это ругаются.-----------
    Инициализация через точку по схеме:
    
    -----------     имя_объекта.имя_элмента     -----------
    
    
    strcpy(it_companies[3].name, "GOALACTION"); // В строку name копируем строку GOALACTION.
    it_companies[3].cost = 500;
    it_companies[3].n_workers = 30000;
    */

    //Указатель на структуру
    /*

    struct companies my_company = { "GOALACTION", 350, 10000 };

    struct companies* p_my_company = &my_company;

    Чтобы добраться к объектам можно использовать стандартное разыменование
    std::cout << (*p_my_company).name;

    Скобки перед указателем необходимы, т.к. доступ к объекту структуры имеет высший приоритет, нежели разыменование.

    Доступ к элементу структуры через указатель по след. сххеме:
    
    имя_указателя->имя_элемента

    std::cout << p_my_company->name;

    */

    //Передача структуры в функции
    /* 
    1. Передавать их целиком.
    Создадим функциию, которая будет принимать указатель на строку s, и принимать нашу структуру.

    Сделаем в этой функции проверку на совпадение строки s и значением строки name в нашей структуре:

    int exist_company(const char* s, struct companies company)
    {
    if (strcmp(s, company.name) == 0) // cmp - Comparison; сравнивает две строки
        return 1;
    else
        return 0;

    }

    В главной функции имеем следущее:
    Переменную (my_company) типа (struct companies) с инициализированными в ней данными.

    struct companies my_company = { "GOALACTION", 350, 10000 };
    В функции проверяем существует ли в принимаемой переменной типа (struct companies), строка "GOALACTION", через другую функцию (strcmp).

    if (exist_company("GOALACTION", my_company))
    {
        std::cout << "Exist!";
    }
    else
    {
        std::cout << "Doesn't exist!";
    }   
    *


    2. Передавать только указатель.

    int exist_company(const char* s, struct companies *company)
    {
    
    if (strcmp(s, company->name) == 0) // cmp - Comparison; сравнивает две строки
        return 1;
    else
        return 0;

    }
    if (exist_company("GOALACTION", &my_company))
    {
        std::cout << "Exist!";
    }
    else
    {
        std::cout << "Doesn't exist!";
    }
    */

}


