// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int n = c.size();
    int jump=0,i=0;
    // In order to reach last cloud in minimum number of steps
    // we try to take a jump of 2 steps, if possible safely
    // else we take a jump of 1 step 
    for(; i<n-2; ){
        if(c[i+2]==0){
            i+=2;
            jump++;
        }
        else{
            i+=1;
            jump++;
        }
    }
    if(i==n-2){
        jump++;
    }
    return jump;
}


// Time Complexity - O(n)
// Space Complexity - O(1)
