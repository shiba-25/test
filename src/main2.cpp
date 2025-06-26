#include <iostream>
#include "mbed.h"
BufferedSerial pc(USBTX,USBRX,115200);
int hoge [4] = {1,2,3,4};
DigitalIn button2(BUTTON1,PullUp);

int main() {
    int read3;
    while (1)
    {
        read3 = button2.read();
        if (read3 == 0) {
            printf("%d\n",hoge[0]);
        }
    }
}