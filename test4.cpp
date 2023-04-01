#include "iostream"
using namespace std;

class Date
{
    private:
        int year;
        int month;
        int day;
    public:
        Date(int, int, int);
        Date operator+(int days);
        int operator-(Date&b);
        friend int operator>(Date &date1,Date &date2);
        int getYear();
        int getMonth();
        int getDay();
};

Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
} 

Date Date::operator+(int days)
{
    if((day+days)>30){
        month++;
        if(month>12){
            month=1;
            year++;
        }
        day = day+days - 30;
    }else{
        day+=days;
    }
    return *this;
}

int Date::operator-(Date& b)
{
    int tmpdays1 = year*365+month*30+day;
    int tmpdays2 = b.year * 365 + b.month * 30 + b.day;
    if(tmpdays1 > tmpdays2)
        return tmpdays1 - tmpdays2;
    else
        return tmpdays2 - tmpdays1;
}

int operator>(Date &date1,Date &date2)
{
    int t1 = date1.getYear() * 365 + date1.getMonth() * 12 + date1.getDay();
    int t2 = date2.getYear() * 365 + date2.getMonth() * 12 + date2.getDay();
    if(t1>t2)
        return 1;
    else
        return 0;
}

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}


int main()
{
    Date date1(2022, 5, 12);
    Date date2(2022, 5, 20);
    Date date3(2022, 5, 19);
    int tmpdays3;
    date3 = date3 + 3;
    cout << "三天后的日期为:" << date3.getYear() << "," << date3.getMonth() << "," << date3.getDay() <<endl;
    tmpdays3 = date1 - date2;
    cout << "两个日期相差:" << tmpdays3 << "天" <<endl;
    if(date1>date2){
        cout << "年龄小的出生日期为:" << date1.getYear() << "," << date1.getMonth() << "," << date1.getDay() <<endl;
    }else{
        cout << "年龄小的的出生日期为:" << date2.getYear() << "," << date2.getMonth() << "," << date2.getDay() <<endl;
    }

    return 0;
}
