// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    // mp is a map which stores the frequency of socks of a colour
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[ar[i]]++;
    }
    int pairs = 0;
    // If we divide the frequency of a sock by 2 we get 
    // no. of pairs of socks of that colour
    // Sum of all pairs is the required result
    for(auto x: mp){
        pairs += x.second / 2;
    }
    return pairs;
}


// Time Complexity - O(n)
// Space Complexity - O(n)
