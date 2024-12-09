#include <stdio.h>

int main() {
    double pi = 0.0;  // 初始 pi 值
    double term;      // 每一項的值
    int sign = 1;     // 控制加減
    int x;            // 儲存最小的 x

    for (x = 0; ; x++) { 
        term = 4.0 / (2 * x + 1); 
        pi += sign * term;        // 加上或減去該項
        sign = -sign;             // 切換正負號

        if ((pi > 3.14159 && pi - 3.14159 <= 0.000001) ||
            (pi < 3.14159 && 3.14159 - pi <= 0.000001)) {
            break;                // 精度條件滿足，跳出迴圈
        }
    }

    printf("pi : %.5f\n", pi);
    printf("x  : %d\n", x);

    return 0;
}
