#include <stdio.h>

void swapCounter(int x){
    printf("%d ",x);
}

int main() {
    
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;  
    int i, j, tmp, swap;

    
    for (i = 0; i < n; i++) {
        int count = 0;
        swap = 0; 

        for (j = 0; j < n-i-1; j++) {
            

            if (array[j] > array[j+1]) {
                
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                
                swap++;
                count++;
            }
        }
        swapCounter(count);
      
        if (swap == 0) 
            break;
    }

    return 0;
}
