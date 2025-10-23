bool checkIfPangram(char* sentence) {
    bool seen[26]={false};

    for(int i=0;sentence[i]!='\0';i++)
    {
        char ch=sentence[i];
        if(ch>='a' && ch<='z')
           seen[ch-'a']=true;
    }

    for(int i=0;i<26;i++)
    {
        if(!seen[i])
            return false;
    }
    return true;
}