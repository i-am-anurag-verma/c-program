#include <stdio.h>

int main()
{
    int i;
    for(i = 1; i<=20; i++){
        switch(i)
        {
            case 0: i+= 2;
            case 1: i+= 3;
            case 2: i+= 2;
            case 3: i+= 3;
            default: i+= 3;
        }
        printf("Value of i is: %d\n", i);
    }
}