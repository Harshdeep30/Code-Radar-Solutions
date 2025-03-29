incrementToPrimeDigits(int N){
    int a,b,c;
    while(N>0){
        a=N\10;
        if(a>7){
            b=2;
        }
        else if(a==1 || a==0){
            b=2;
        }
        else if(a==2){
            b=3;
        }
        else if(a==3 || a==4){
            b=5;
        }
        else if(a==5 || a==6){
            b=7;
        }
    }

}