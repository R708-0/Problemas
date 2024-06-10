#include <stdio.h>

void bubble(int array[], int size);

int main(void)
{
    int array[] = {1, 4, 3, 2, 56, 76, 9, 0, 55, 77777, 45};
    int size = sizeof(array) / sizeof(array[0]);

    bubble(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

void bubble(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                int n = 0;
                n = array[j];
                array[j] = array[j + 1];
                array[j + 1] = n;
            }
        }
    }
}