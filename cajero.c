#include <stdio.h>
int main (void){
    int monto;
    printf ("ingrese un monto entre 20 y 5000");
    scanf ("%d", &monto);
    if (monto<20) {
        printf ("ingrese un monto mayor");
        return 1;
        }
    else if (monto >5000) {
        printf ("ingrese un monto menor");
        return 2;
        }
    int b1=0;
    int b5=0;
    int b10=0;
    int b20=0;
    int b50=0;
    int b100=0;

    while(monto>0){
        if(monto>=100){
            monto= monto - 100;
            b100++;
        }
        else if (monto>=50){
            monto= monto - 50;
            b50++;
        }
        else if (monto>=20){
            monto= monto - 20;
            b20++;
        }
        else if (monto>=10){
            monto= monto - 10;
            b10++;
        }
        else if (monto>=5){
            monto= monto - 5;
            b5++;
        }
        else if (monto>=1){
            monto= monto - 1;
            b1++;
        }
    }

    printf ("billetes de 100: %d\n", b100);
    printf ("billetes de 50: %d\n", b50);
    printf ("billetes de 20: %d\n", b20);
    printf ("billetes de 10: %d\n", b10);
    printf ("billetes de 5: %d\n", b5);
    printf ("billetes de 1: %d\n", b1);

    return 0;
}
