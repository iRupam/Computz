#include<stdio.h>

void main()
{
    int D, M, Y;
    int d1, d2;
    int m1, m2;
    int y1,y2;

    printf("Please enter your date of birth in number format (DD-MM-YYYY) : ");
    scanf("%d%d%d",&d1,&m1,&y1);

    printf("Please enter today's date in number format (DD-MM-YYYY) : ");
    scanf("%d%d%d",&d2,&m2,&y2);

    if(d2 < d1) {
        if(m2 < m1) {
            M = 12 - m1 + m2 - 1;
            Y = y2 - y1 -1;
            switch(m2 - 1) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    D = 31 - d1 + d2;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    D = 30 - d1 + d2;
                    break;
                case 2:
                    if(y2 % 400 == 0) {
                        D = 29 - d1 + d2;
                        break;
                    }else if (y2 % 100 == 0) {
                        D = 28 - d1 + d2;
                        break;
                    }else if (y2 % 4 == 0) {
                        D = 29 - d1 + d2;
                        break;
                    }else {
                        D = 28 - d1 + d2;
                        break;
                    }
            }
        }else {
            M = m2 - m1;
            Y = y2 - y1;
        }
    }else if(m2 < m1){
        D = d2 - d1;
        M = 12 - m1 + m2;
        Y = y2 - y1 -1;
    }else {
        D = d2 - d1;
        M = m2 - m1;
        Y = y2 - y1;
    }

printf("You are %d years %d months and %d days old",Y,M,D);

}
