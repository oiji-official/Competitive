int atoi(string str)
{
    int num = 0, temp = 1, start =  0;
    // if input is negative
    if (str[0] == '-'){
        start = 1;
        temp = -1;
    }
    for(int i = start; str[i]!='\0'; i++){
        if(str[i]>='0' && str[i]<='9'){
            num = num*10 + (str[i]-'0');
        }else{
            return -1;
        }
    }
    return num*temp;
    
}