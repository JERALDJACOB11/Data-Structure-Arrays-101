bool validMountainArray(int* arr, int arrSize){
     if(arrSize < 3) return false;
        int l = 0;
        int r = arrSize - 1;
        while(l + 1 < r && arr[l] < arr[l + 1]) l++;
        while(r - 1 > 0 && arr[r] < arr[r - 1]) r--;
        return l == r;

}