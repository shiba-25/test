#include <iostream>
#include "Mbed.h"
BufferedSerial pc(USBTX,USBRX,115200);
DigitalIn button0(PA_0,PullUp);

int main() {
    int read1;
    while (1)
    {
        read1 = button0.read();
        if (read1 == 0) {
            printf("Hello\n");//変更しましたを変更しました
        }
    }  
}
