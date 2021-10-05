#include <stdio.h>
int mode (int  a[], int n){ //function for mode
    int maxValue = 0; 
    int maxCount = 0;
    int i, j;

    for (i = 0; i < n; ++i){
        int count = 0;
        for (j = 0; j < n; ++j){
            if (a[j] == a[i]){
            ++count;}
        }
        if (count > maxCount){
            maxCount = count;
            maxValue = a[i];
        }
    }
    return maxValue;
}
float mean (int a[], int n){ //function for mean
    int sum = 0;
    float meanValue = 0;
    int i;
    
    for (i = 0; i < n; ++i){
        sum = sum + a[i];}
    meanValue = (sum/5.0);
    return meanValue;
    }
float median (int a[], int n){ //function for median
    int i, j;
   
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i; j++){
            if (a[j] > a[j+1]){
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];        
                                    }
        }
    }
    return a[2];
}

int main(){
    int n = 5;
    int a[4];
    printf("Enter 5 values\n");
    for (int i=0; i<5; i++){
    scanf("%d", &a[i]);
}    //calling the functions below
    printf("mode = %d\n", mode(a,n));
    printf("mean = %.2f\n", mean(a,n));
    printf("median = %.2f\n", median(a,n));
    return(0);
}

