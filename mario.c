#include <stdio.h>
#include <cs50.h>

int get_height(void);
void make_pyramid(int);

int main(void)
{
    int height = get_height();
    make_pyramid(height);




}


int get_height(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while ((height <= 0) || (height > 8));
    return height;
}

void make_pyramid(height)
{
    //manages column


    for (int i = 1; i <= height; i++)
    {
        for (int s = height - i; s > 0; s --)
        {
            printf(" ");
        }
        for (int h = 1; h <= i; h++)
        {
            printf("#");
        }
        printf("  ");


        //manages row
        for (int j = 1; j <= i; j++)
        {
            printf("#");

        }
        printf("\n");
    }

}