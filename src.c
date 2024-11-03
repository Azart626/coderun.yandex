#include <stdio.h>
int main(){
    int n = 2;
    int arr[n];
    int temp = 0;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    if (arr[0] > 1000 || arr[0] < -1000 || arr[1] > 1000 || arr[1] < -1000 || arr[2] > 1000 || arr[2] < -1000)
    {
        printf("n/a");
        return 0;
    } 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }            

        }
        
    }
    printf("%d %d %d", arr[0], arr[1], arr[2]);
    printf("%d", arr[1]);
    
}
