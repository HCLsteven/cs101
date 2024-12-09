#include <stdio.h>

int main() {
    int i = 12345;  
    int thousands, units, result;  

    if (i >= 1000) {
        
        thousands = (i / 1000) % 10;  
        units = i % 10;               
        result = i - thousands * 1000 - units + units * 1000 + thousands;
    } else if (i >= 10) {
        
        int tens = (i / 10) % 10;  
        units = i % 10;            

        result = units * 1000 + tens * 100 + i / 100;  
    } else {
        
        result = i * 1000;  
    }

    printf("原本的數字: %d\n", i);
    printf("轉換後的數字: %d\n", result);

    return 0;
}
