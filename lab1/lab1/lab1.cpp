#include <iostream>
using namespace std;

class Time {
private:
    int hour, min, sec;
public:
    Time() {
        this->hour = 0;
        this->min = 0;
        this->sec = 0;
    }
    Time(int hour, int min = 0, int sec = 0) {
        int i = 0;
        this->hour = 0;
        this->min = 0;
        this->sec = 0;

        for (i = sec; i >= 60; i -= 60) {
            this->min++;
        }
        this->sec = i;

        for (i = min; i >= 60; i -= 60) {
            this->hour++;
        }
        this->min += i;

        this->hour += hour;
    }
    void showTime() {
        cout << this->hour << ":" << this->min << ":" << this->sec << endl;
    }
    Time sumTimes(Time& newtime) {
        Time temp(this->hour + newtime.hour, this->min + newtime.min, this->sec + newtime.sec);
        return temp;
    }
};

int main()
{
    Time time0, time1(11, 12), time2(23, 59, 22);
    time0.showTime();
    time1.showTime();
    time2.showTime();
    time0 = time1.sumTimes(time2);
    time0.showTime();
    return 0;
}
