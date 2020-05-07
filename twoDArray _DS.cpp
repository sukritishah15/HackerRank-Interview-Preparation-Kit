// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int max = INT_MIN,l=0;
    for(int i=0; i<4; i++){
        int sum=0;
        for(int j=l; j<l+3; j++){
            sum+=arr[i][j];
        }
        sum+=arr[i+1][l+1];
        for(int j=l; j<l+3; j++){
            sum+=arr[i+2][j];
        }
        l=(l<3)?l+1:0;
        if(max<sum){
            max=sum;
        }
        if(l!=0)
            i--;
    }
    return max;
}
