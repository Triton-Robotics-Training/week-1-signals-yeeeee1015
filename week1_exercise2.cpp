//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

AnalogIn pot(p15);
DigitalOut LED(LED1);

int main() {
    while (1) {
        double x = pot.read();
        LED = 1;
        wait_ms(2000*x);
        LED = 0;
        wait_ms(2000*(1-x));
    }
}
