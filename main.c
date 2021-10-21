#include <stdio.h>

int main(){
    int temp;
    printf("Please put temprature");
    scanf("%d" , &temp);
    if(temp < 0){
        printf("the weather is freezing");
}
    else if(temp >= 0 && temp <= 10 ){
            printf("the weather is very cold");
}
    else if(temp >= 10 && temp <= 20){
            printf("the weather is cold");
}
    else if(temp >= 20 && temp <= 30){
            printf("the weather is normal");
}
    else if(temp >= 30 && temp <= 40){
        printf("the weather is hot");
}
    else if(temp >= 40){
            printf("the weather is very hot");
}
    return 0;
}