#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int H, M;
    int C;
    int A, B, D;

    scanf("%d %d", &H, &M);
    scanf("%d", &C);

    A = C / 60;
    B = C - (A * 60);
    D = (M + B) / 60;

    if (D + H < 24 && M + B >= 60)
        printf("%d %d", H + D, (M + B) - 60);
    else if (D + H >= 24 & M + B >= 60)
        printf("%d %d", H + D - 24, (M + B) - 60);
    else if (D + H < 24 & M + B < 60)
        printf("%d %d", H + D, M + B);
    else
        printf("%d %d",)




    if (M + B >= 60 & H + A >= 0 & H + A <= 24)
        printf("%d %d", H + A, (M + B) - 60);
    else if (M + B >= 60 & H + A > 24)
        printf("%d %d", H + A - 24, (M + B) - 60);
    else if (M + B < 60 & H + A >= 0 & H + A <= 24)
        printf("%d %d", H + A, M + B);
    else
        printf("%d %d", H + A - 24, M + B);

    return 0;

}