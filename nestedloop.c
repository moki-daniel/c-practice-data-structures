#include <stdio.h>
main()
{
    int i = 0; j;
    while(i < 5){
        j=0;
        while(j<3){
            print("2 ");
            j++;
        }
        print("\n");
        i++;
    }
    return 0
}

/**
    expected output
    2 2 2
    2 2 2
    2 2 2
    2 2 2
    2 2 2
*/