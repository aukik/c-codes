#include <stdio.h>
#include <conio.h>
long int palin_product(long int dig,long int lim){
    long int least_num,max_num;

    long int a[dig];
    a[0]=1;
    long int a_l[dig];
    long int a_m[dig];
    for (long int i = 0; i <dig ; ++i) {
        a[i]=0;
    }
    for (long int j = 0; j <dig ; ++j) {
        a_l[j]=a[j];
    }
    for (long int k = 0; k < dig; ++k) {
        a_m[k]=9;
    }
    long int n_l=1,n_m=0;
    for (long int l = 0; l <dig-1 ; ++l) {
       n_l=n_l*10;
        n_l=n_l+a_l[l];

    }

    for (long int m = 0; m <dig ; ++m) {
        n_m=n_m*10;
        n_m=n_m+a_m[m];

    }

    long int palindrome_1=n_l,palindrom_2=n_m,palindrome_largest,palindrome_diff=palindrom_2-palindrome_1,pal_diff_2=palindrome_diff,res;
    for (long int n = 0; n <=palindrome_diff ; ++n) {
        if(res>=lim){break;}

        for (long int i = 0; i <=pal_diff_2 ; ++i) {

            res = palindrome_1 * (palindrome_1 + i);
            if(res>=lim){
                res=palindrome_1;
                break;
            }
            {
                long int res_1 = res;
                long int reversedNumber = 0;
                long int remainder;

            while (res_1 != 0) {
                remainder = res_1 % 10;
                reversedNumber = reversedNumber * 10 + remainder;
                res_1 /= 10;
            }
            if (res == reversedNumber) {
                palindrome_largest = res;
            }

        }
        }
        pal_diff_2--;
        palindrome_1++;


    }


    printf("%ld\n",palindrome_largest);


}
long int main(){

    long int dig,lim;
    printf("enter digits & limit\n");
    scanf("%ld%ld",&dig,&lim);
    palin_product(dig,lim);
}