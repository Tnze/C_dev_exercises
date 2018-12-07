#include <stdio.h>

int main(){
    for(int i = 1900; i<=2000; i++){
        if((i%4==0 && i%100!=0)||i%400==0)
            printf("%d\n", i);
    }
    return 0;
}