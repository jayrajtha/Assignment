#include <stdio.h>
int main()
{
    int value[10];
    int even=0;
    int odd=0;
    int ev=0;
    int od=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&value[i]);
    }
    for (int q = 0; q < 10; q++)
    {
        if (value[q]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
        
    }
    printf("Even: %d\nOdd: %d\n",even,odd);
    /*for (int w = 0; w < even; w++)
    {
        if (value[w]%2==0)
        {
            value[w]=ev[w];
        }
    }
     for (int w = 0; w < odd; w++)
    {
        if (value[w]%2==0)
        {
            value[w]=od[w];
        }
    }        
    for (int r = 0; r < 10; r++)
    {
        printf("odd values: %d\n",od[r]);
        printf("even values: %d\n",ev[r]);
    }*/
    for (int w = 0; w < 10; w++)
    {
        if (value[w]%2==0)
        {
            ev = ev + value[w];
        }
        else
        {
            od = od + value[w];
        }
    }
    printf("Sum of given even numbers: %d\n",ev);
    printf("Sum of given odd numbers: %d",od);
    return 0;
}