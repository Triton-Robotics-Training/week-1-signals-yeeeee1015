//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalIn button(BUTTON1);
DigitalOut LED(LED1);

int main() {
    while (1) {
        printf("Week 1 Exercise 1");
    
        if (button.read()) {
            LED = 1;
        }
        else {
            LED = 0;
        }
        wait_ms(5); 
    }
}
