#include <stdio.h>
#include <math.h>

int cyclic_permutation() {
    printf("enter limit:\n");
    int ini_n;
    int count_main_1 = 0;
    int count_main_2 = 0;
    scanf("%d", &ini_n);
    int a[ini_n];
    //prime numbers
    for (int k = 2; k<ini_n ; k++) {
        int n = k, i, flag = 0;

        for (i = 2; i <= n / 2; ++i) {

            if (n % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            a[count_main_1] = n;
            count_main_1++;
        }

    }

    int a_2[count_main_1];
    int count_per=0;

    for (int x = 0; x < count_main_1; ++x) {
        //cyclic permutations:

        int count = 0;
        int num = a[x];
        int d = a[x];
        while (d > 0) {
            count++;
            d = d / 10;
        }
        int n = count;
        int flag=1;
        while (1) {
            int z = num;
            int num1=num;
            int rem = num % 10;
            int div = num / 10;
            num = (int) (pow(10, n - 1) * rem + div);
            int z1=num;

            if (num == a[x]) {
                if(flag==n){
                    while (1) {
                        int z_1 = num1;
                        int rem_1 = num1 % 10;
                        int div_1 = num1 / 10;
                        num1 = (int) (pow(10, n - 1) * rem_1 + div_1);

                        a_2[count_per]=z_1;
                        count_per++;
                        if (num1 == a[x]) {
                            break;
                        }

                    }
                }
                break;
            }
            for (int i = 0; i <count_main_1 ; ++i) {
                if(z1==a[i]){
                    flag++;
                    break;
                }

            }

        }
    }
    //sorting
    {
        int i, j, m, n = count_per;


        for (i = 0; i < n; ++i) {

            for (j = i + 1; j < n; ++j) {

                if (a_2[i] > a_2[j]) {

                    m = a_2[i];
                    a_2[i] = a_2[j];
                    a_2[j] = m;

                }

            }

        }

        for (int l = 0; l < count_per; ++l) {
            printf("%d  ", a_2[l]);
        }
    }
    return 0;
}
int main(){
    cyclic_permutation();
}