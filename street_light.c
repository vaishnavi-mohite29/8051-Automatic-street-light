#include <reg51.h>

// P1.0 = LDR Sensor Input (0 = Day, 1 = Night)
// P2.0 = Relay / Street Light Output

sbit LDR = P1^0;
sbit LIGHT = P2^0;

void main()
{
    LDR = 1;
    LIGHT = 0;

    while(1)
    {
        if(LDR == 1)
        {
            LIGHT = 1; // Night - Light ON
        }
        else
        {
            LIGHT = 0; // Day - Light OFF
        }
    }
}
