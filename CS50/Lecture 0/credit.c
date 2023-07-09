#include <cs50.h>
#include <stdio.h>

int main(void)
{
     long int n = 4003600000000014;
     int sum_of_doubled = 0, sum_of_last = 0, rem, check, total;

     while(n != 0)
     {
        rem = n % 10;
        sum_of_last = sum_of_last + rem;
        n = n / 10;

        check = (n % 10)*2;
        if(check >= 10)
        {
            int num = check, sum_rq = 0, r;
            while(num != 0)
            {
                r = num % 10;
                sum_rq = r + sum_rq;
                num = num / 10;
            }
            sum_of_doubled = sum_of_doubled + sum_rq;
        }
        if(check < 10)
        {
            sum_of_doubled = check + sum_of_doubled;
        }

        n = n / 10;
     }

     total = sum_of_doubled + sum_of_last;

     printf("sum of doubled = %d\n", sum_of_doubled);
     printf("sum of last = %d\n", sum_of_last);
     printf("Total = %d\n", total);

    return 0;
}
