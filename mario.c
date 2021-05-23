#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter a height between 1 and 8:");
    } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        
        for (int j = 0; j < height; j++)
        {
          //side note: if dont remember how to do this later, don't sweat it
          //try to solve it first as a 4x4 , 3x3, 5x5 square
          //"" "" "" * <= remember that take into account "" as characters that will be looping as well
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
    }
}