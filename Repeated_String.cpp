// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int len = s.length();
    long long count = 0;

    // We find the frequency of 'a' in pattern string
    // and store it in count
    for(int i=0; i<len; i++){
        if(s[i]=='a')
            count++;
    }

    // We find the number of times that the pattern would repeat fully,
    // in string of length n and store it in multiplier
    long multiplier = n / len;

    // 'a' will occur (count * multiplier) times when pattern repeats fully
    count *= multiplier;

    // Partial string might be required to attain string length n,
    // and to find the number of times 'a' occurs in the partial pattern
    // we compute mod and traverse the string till mod to find any more 
    // occurrences of 'a' 
    int mod = n % len;
    for(int i=0; i<mod; i++){
        if(s[i]=='a')
            count++;
    }
    return count;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
