#include <iostream>
#include<math.h>

int main()
{
    int n, j=0 , i=0 , k = 0;

    printf("Введите n\n");
    scanf_s("%d", &n);

    while (pow(j, 3) + pow(i, 3) < n)
    {
        
        while (pow(j, 3) + pow(i, 3) < n)
        {
            i++;
            if (pow(j, 3) + pow(i, 3) == n) k++;
        }
        j++;
        if (pow(j, 3) + pow(i, 3) == n) k++;
        i = 0;
    }
    printf("Число можно разложить %d способами.", k);
    return 0;
}

