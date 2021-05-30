//simplest code
int main(){
  int N; 

scanf("%d",&N);

if( N%2 == 1 || (N > 5 && N < 21))

    printf("Weird");

else

    printf("Not Weird");

return 0;
}

//hackerrank official code
int main(){
    int N;
    cin >> N;
    if(N%2==0){
        if(N>20){
            cout<<"Not Weird";
        }
        if(N>=2 && N<=5){
            cout<<"Not Weird";
        }
        if(N>=6 && N<=20){
            cout<<"Weird";
        }
    }else{
        cout<<"Weird";
    }
    return 0;
}

//my code
int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    if(N%2!=0){
        cout<<"Weird\n";
    }
    else{
        for(int i=2;i<=5;i++){
            if(N==i&&N%2==0){
                cout<<"Not Weird\n";
            }
        }
        for(int i=6;i<=20;i++){
            if(N==i&&N%2==0){
                cout<<"Weird\n";
            }
        }
        if(N>20&&N%2==0){
            cout<<"Not Weird\n";
        }
    }

    return 0;
}
