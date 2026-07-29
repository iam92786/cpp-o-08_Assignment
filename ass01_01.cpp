//1. Implement increment() function in today's time class. Increment seconds by 1. Ensure that max time can be 23:59:59.

#include<iostream>

struct time {
    int hrs;
    int mins;
    int secs;
};

void OneSecInc(struct time* tm)
{
    if(tm == nullptr) {
        printf("Invalid pointer\n");
        return;
    }
    printf("One Sec Inc \n");
    if(tm->secs < 59){
        tm->secs++;
    }
    else {
        tm->secs = 00;
        if(tm->mins < 59) {
            tm->mins++;
        }
        else {
            tm->mins = 0;
            if(tm->hrs >= 12)
            {
                tm->hrs = 01;
            }
            else{
                tm->hrs++;
            }
        }
    }
}
void display(struct time* tm) {
    if(tm == nullptr) {
        printf("Invalid pointer\n");
        return;
    }
    printf("Time=> %d:%d:%d\n", tm->hrs, tm->mins, tm->secs);
}

int main (void)
{
    std::cout << "Assignment-01 of Day01" << std::endl;
    struct time t2;
    // t2.hrs = 11;
    // t2.mins = 59;
    // t2.secs = 59;
    scanf("%d\n%d\n%d",&t2.hrs, &t2.mins, &t2.secs);
    display(&t2);
    OneSecInc(&t2);
    display(&t2);
    return 0;
}



