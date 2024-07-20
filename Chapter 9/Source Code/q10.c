// Program to create a structure capable of storing dates and then make a funtion to compare those dates

#include <stdio.h>

typedef struct Date{
    int year;
    int month;
    int day;
}date;

date cmpdate (date d1, date d2){
    date diff;
    if (d1.month < d2.month) {
        d1.year--; 
        d1.month += 12;}
        
     if (d1.day < d2.day) {
        d1.month--; 
        //add here some if else wali backchodi aur sare month leap year wala jugad ache se define kardo warna ye mann ke chalo ki saare mahine me 30 din howe se!!
         d1.day += 30; }
        
    diff.year = d1.year-d2.year;
    diff.month = d1.month-d2.month;
    diff.day = d1.day-d2.day;
    return diff;
}

int main() {
    date dt[2]; date diff;
    date *ptr = dt;
    
    printf("PLEASE ENTER VALID DATES\n");
    
    for(int i=0;i<2;i++){
        
    printf("Enter the year of %d dt: \n",i+1);
    scanf("%d",&ptr->year);
    
    printf("Enter the month of %d dt:\n",i+1);
   scanf("%d",&ptr->month);
    
   printf("Enter the day of %d dt: \n",i+1);
  scanf("%d",&ptr->day);
       ptr++ ;
    }
    ptr=dt;
    
    diff=cmpdate(dt[0],dt[1]);
    
    printf("THE diffrence btw both dates is: %d years; %d month; %d days \n",diff.year,diff.month,diff.day);

    return 0;
}




//By help of Chatgpt
// date cmpdate(date d1, date d2) {
//     date diff;

//     if (d1.month < d2.month) {
//         d1.year--; 
//         d1.month += 12;
//     }

//     if (d1.day < d2.day) {
//         // Calculate the maximum number of days in the previous month
//         int maxDaysInPreviousMonth = 31; // Default to 31 days

//         if (d1.month == 4 || d1.month == 6 || d1.month == 9 || d1.month == 11) {
//             maxDaysInPreviousMonth = 30; // April, June, September, November have 30 days
//         } else if (d1.month == 2) {
//             // Handle February with leap years
//             if ((d1.year % 4 == 0 && d1.year % 100 != 0) || (d1.year % 400 == 0)) {
//                 maxDaysInPreviousMonth = 29; // Leap year
//             } else {
//                 maxDaysInPreviousMonth = 28; // Non-leap year
//             }
//         }

//         d1.month--; // Go back to the previous month
//         d1.day += maxDaysInPreviousMonth;
//     }

//     diff.year = d1.year - d2.year;
//     diff.month = d1.month - d2.month;
//     diff.day = d1.day - d2.day;

//     return diff;
// }
