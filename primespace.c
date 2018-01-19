#include <stdio.h>
void main()
{
    int l, h, i, s;
    printf("Enter two numbers: ");
    scanf("%d %d", &l, &h);

    printf("Prime numbers between %d and %d are: ", l, h);

    while (l < h)
    {
        s= 0;

        for(i = 2; i <= l/2; ++i)
        {
            if(l % i == 0)
            {
                s= 1;
                break;
            }
        }

        if (s == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}
