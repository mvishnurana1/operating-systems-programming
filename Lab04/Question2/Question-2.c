#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        array[i] = i+1;
    }
}

void print_array(int *array, int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        if (i == (n-1))
            printf("%d]\n", array[i]);
        else
            printf("%d, ", array[i]);
    }
}

int main()
{
    int n;
    printf("Please enter a size for your array>");
    scanf("%d", &n);

    int array[n]; 

    fill_array(array, n);
    print_array(array, n);

    return 0;
}