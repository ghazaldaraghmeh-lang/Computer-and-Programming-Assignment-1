/*
   Ghazal Salah Daraghmeh_1230542
   Dr.Alaa Nairat__sec:14/LB

*/

#include <stdio.h>
#include <math.h>

      double find_res(int x, double y, int n);
       int sumOfEvenDigits (int n);
        double find_z (int x, double y);

int main()
{

   int x,n;
     double y;

      FILE *input;
         input = fopen("vals.txt","r");
          fscanf(input,"%d %lf %d",&x, &y, &n);
           printf("x=%d  y=%f  n=%d\n", x, y,n);

       fclose(input);

        int sum_of_even_digits = sumOfEvenDigits(n);
        printf("Sum of even digits: %d\n", sum_of_even_digits);

         double value_of_z = find_z(x,y);
          printf("The value of z = %.2f\n",value_of_z);


         double value_of_res = find_res(x,y,n);
         printf("res = %.2f\n",value_of_res);


     return 0;
}

   int sumOfEvenDigits (int n)
   {
       int sum=0;

    if ((n / 1000) % 2 == 0) {
        sum += (n / 1000 % 10);
    }
     if ((n/ 100 % 10) % 2 == 0) {
        sum += (n/ 100 % 10);
    }
     if ((n/ 10 % 10) % 2 == 0) {
        sum += (n/ 10 % 10);
    }
     if ((n % 10) % 2 == 0) {
        sum += (n% 10);
    }

    return sum;
   }


      double find_z(int x, double y)
      {
          double z = pow(x,y)+ (x*y)+ pow(y,x);
           return z;
      }


      double find_res(int x, double y, int n)
       {
            sumOfEvenDigits(n);
             find_z(x,y);
           double summation = sumOfEvenDigits(n) + find_z(x,y);
           double res = sqrt(summation);
          return res;
       }
