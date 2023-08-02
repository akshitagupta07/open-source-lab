#include <stdio.h>

int binarySearch(int arr[], int n, int target){
    int l = 0;
    int h = n-1;

    while(l <= h){
        int mid = l + (h-l)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr[i]);
    }

    int key;
    printf("Enter the key: ");
    scanf("%d", key);

    return 0;
}
