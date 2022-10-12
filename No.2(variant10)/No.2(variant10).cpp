#include <iostream>

int main()
{
    int i;
    bool k = false;
    for(i=10; i<100; i++)
    {
        if ((i / 10) + (i % 10) == 11)
        {
            if (i + 27 == (i % 10) * 10 + (i / 10))
            {
                k = true;
                printf("Найдено число %d", i);
            }
        }
    }
    if (k == false) printf("Таких чисел нет.");

    return 0;
}

