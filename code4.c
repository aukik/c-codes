#include <stdio.h>
#include <conio.h>

int year2019(int month,int d) {


    if(month>12 || d>31)
    {
        printf("month:\ndate:\nday:\n");
    }
    int count = 0;
    int td1;
    int td2;
    char *mon="";

    //january
    td1 = 1;//since monday=0
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==1){
        td2=td1;
        mon="month: 'January'";
    }


    //february

    td1 = td1 + 31 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==2){
        td2=td1;
       mon="month: 'February'";
    }

    //similarly
    td1 = td1 + 28 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==3){
        td2=td1;
        mon="month: 'March'";
    }

    td1 = td1 + 31 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==4){
        td2=td1;
       mon="month: 'April'";
    }

    td1 = td1 + 30 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==5){
        td2=td1;
        mon="month: 'May'";
    }

    td1 = td1 + 31 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==6){
        td2=td1;
       mon="month: 'June'";
    }

    td1 = td1 + 30 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==7){
        td2=td1;
      mon="month: 'July'";
    }

    td1 = td1 + 31 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==8){
        td2=td1;
        mon="month: 'August'";
    }

    td1 = td1 + 31 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==9){
        td2=td1;
       mon="month: 'September'";
    }

    td1 = td1 + 30 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==10){
        td2=td1;
       mon="month: 'October'";
    }

    td1 = td1 + 31 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==11){
        td2=td1;
        mon="month: 'November'";
    }

    td1 = td1 + 30 - 28;
    if (td1 >= 7) { td1 = td1 - 7; }

    if(month==12){
        td2=td1;
        mon="month: 'December'";
    }

    count=td2;

    for (int i = 0; i <d ; ++i) {
     count++;
     if(count>=7){
         count=0;
     }
    }
    printf("%s\n",mon);
    printf("date: '%d'\n",d);
    if (count-1==0)
        printf("day: 'Monday'");

    if (count-1==1)
        printf("day: 'Tuesday'");

    if (count-1==2)
        printf("day: 'Wednesday'");

    if (count-1==3)
        printf("day: 'Thursday'");

    if (count-1==4)
        printf("day: 'Friday'");

    if (count-1==5)
        printf("day: 'Saturday'");

    if (count-1==6)
        printf("day: 'Sunday'");


}
int main(){
    int month,d;
    printf("Enter month and date:\n");
    scanf("%d ",&month);
    scanf("%d",&d);
    year2019(month,d);
}