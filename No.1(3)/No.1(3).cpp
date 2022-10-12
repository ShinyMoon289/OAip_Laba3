#include <iostream>

int main()
{
    int n , m, s;
    int primer;
    for (;;)
    {
        printf("Введите номер примера (1-7) или 0, чтобы выйти.\n");
        scanf_s("%d", &primer);

        switch (primer)
        {
        case 1:       //S=1+2+...+n
        {
            printf("Введите n\n");
            scanf_s("%d", &n);

            s = 0;
            for (int i = 1; i <= n; i++)
            {
                s = s + i;
            }

            printf("%d\n", s);

            break;
        }
        case 2:       //F=1*2*...*n
        {
            s = 1;
            printf("Введите n\n");
            scanf_s("%d", &n);

           

            for (int i = 1; i <= n; i++)
            {
                s = s * i;
            }

            printf("%d\n", s);

            break;
        }
        case 3:       //S=m+(m+1)+...+(m+n)
        {
            s = 0;
            printf("Введите n\n");
            scanf_s("%d", &n);

            

            printf("Введите m\n");
            scanf_s("%d", &m);


            for (int i = 1; i <= n; i++)
            {
                s = m + (m + i);
            }

            printf("%d\n", s);

            break;
        }
        case 4:       //m*(m+1)*...*(m+n)
        {
            s = 1;
            printf("Введите n\n");
            scanf_s("%d", &n);

           

            printf("Введите m\n");
            scanf_s("%d", &m);


            for (int i = 0; i <= n; i++)
            {
                s = s * (m + i);
            }

            printf("%d\n", s);

            break;
        }
        case 5:       //S=1+1/2+1/3+...+1/n
        {

            
            printf("Введите n\n");
            scanf_s("%d", &n);
            double Sum = 0, r;
           

            for (int i = 1; i <= n; i++)
            {
                r = i;
                Sum = Sum + (1/r);
            }

            printf("%f\n", Sum);

            break;
        }
        case 6:       //S=1/m+1/(m+1)+...+1/(m+n)
        {

            s = 0;
            printf("Введите n\n");
            scanf_s("%d", &n);

            printf("Введите m\n");
            scanf_s("%d", &m);

            double sum = 0, mfl, ifl;
            

            for (int i = 0; i <= n; i++)
            {
                mfl = m;
                ifl = i;

                sum = sum + (1 / (mfl+ifl));
            }

            printf("%f\n", sum);

            break; 

        }
        case 7:       //S=1+1*2+1*2*3+1*2*3*4+...+1*2*3*...*n
        {
            s = 1;
            int a = 1;
            printf("Введите n\n");
            scanf_s("%d", &n);

          

            for (int i = 1; i <= n; i++)
            {
                
                
                a= a * i;
                s = s + a;
                
            }

            printf("%d\n", s);

            break;

        }


        case 0: 
            return 0;
        default:
        {
            printf("Неправильный ввод!\n");
            break;
        }
        }
    }
    
}

