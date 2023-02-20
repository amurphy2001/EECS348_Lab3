#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
    int n;
    do {
        printf("Enter 0 or 1 to stop\n");
        printf("Enter a possible score: ");
        scanf("%d", &n);
        for(int i = 0;i<=n/8;i++) {
            int total_less_i = n - i*8;

            for(int j = 0;j<=total_less_i/7;j++) {
                int total_less_ij = total_less_i - j*7;

                for(int k = 0;k<=total_less_ij/6;k++) {
                    int total_less_ijk = total_less_ij - k*6;

                    for(int m = 0;m<=total_less_ijk/3;m++) {
                        int total_less_ijkm = total_less_ijk - m*3;

                        for(int z = 0;z<=total_less_ijkm/2;z++) {
                            int total_less_ijkmz = total_less_ijkm - z*2;
                            if(total_less_ijkmz == 0){
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",i,j,k,m,z);
                        }
                    }
                           
                    }   
                }
            }
            }
            }while((n!=0) && (n!=1));
    return 0;
    }
