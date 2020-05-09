// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {
    int m = magazine.size();
    int n = note.size();
    map<string,int> mp;
    // We map all the words in the magazine with their frequencies 
    // and store it in map mp
    for(int i=0; i<m; i++){
        mp[magazine[i]]++;
    }
    int flag = 0;
    // If we are unable to find a word presnt in the note in mp 
    // or if the frequency of that word is less than the required frequency 
    // for duplication then result is "No"
    // else it is a "Yes"
    for(int i=0; i<n; i++){
        if(mp.find(note[i]) == mp.end()){
            flag = 1;
            break;
        }
        else if(mp[note[i]]>=1){
            mp[note[i]]--;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
