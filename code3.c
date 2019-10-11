#include <stdio.h>
#include <conio.h>
int day_counter(int n){
    int year=0,leap=0,num=0,odd=0,j,k;

    num=n;
    if(num==2001)
    {
        odd=0;
    }
    if(num>2001){
        for(j=2001;j<num;j++){
            if((j%400==0) || ((j%4==0)&&(j%100!=0))){
                leap+=1;
            }
            else
                year+=1;
        }
        odd=leap*2+year;
        odd=odd%7;
    }
    else{
        for(k=num;k<2001;k++){
            if((k%400==0) || ((k%4==0)&&(k%100!=0))){
                leap+=1;
            }
            else
                year+=1;
        }
        odd=leap*2+year;
        odd=odd%7;
        odd=7-odd;
    }
    int day=odd;
    //day=first day of the year and day=0 is a monday
    //finding if it is leap year or not


    int flag=0;
    if(((n % 4 == 0) && (n % 100!= 0)) || (n%400 == 0)){
        flag=1;

    }
   int count=0;
    int td1;
    if(flag==0){
        //january
        td1=day;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        //february

        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        //similarly
        td1=td1+28-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}

        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


    }

    if(flag==1){
        //january
        td1=day;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        //february

        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        //similarly
        td1=td1+29-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}



        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}


        td1=td1+31-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}

        td1=td1+30-28;
        if(td1>=7){td1=td1-7;}
        if(td1==0){count++;}

    }


    return count;

}
int main(){
    int n;
    printf("Enter year:");
    scanf("%d",&n);
    printf("%d",day_counter(n));
}