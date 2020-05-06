// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int count = 0;
    int len =s.length();
    // For sea level curr/prev would be 0, 
    // below sea level they would be negative 
    // above sea level they would be positive 
    int prev = 0, curr = 0;

    // if flag_in is 1, then Gary is in the valley
    // if flag_out is 1, then Gary is out of the valley
    int flag_in = 0, flag_out =0;

    // To find out the number of valleys Gary walked through
    // He has to go below sea level and come back to sea level

    // If Gary walks below sea level, 
    // for the first step down,
    // prev would be 0, and curr negative,
    // and when he will come back to sea level 
    // prev would be negative, and curr 0
    for(int i=0; i<len; i++){
        if(s[i]=='U')
            curr = curr + 1;
        else
            curr = curr - 1;
        if(prev==0 && curr<0)
            flag_in = 1;
        if(prev<0 && curr==0){
            flag_out = 1;
            if(flag_in==1){
                count++;
                flag_in = 0;
                flag_out = 0;
                prev = 0;
                curr = 0;
            }
        }
        prev = curr;
    }
    return count;
}



// Time Complexity - O(n)
// Space Complexity - O(1)
