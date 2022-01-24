#include <Arduino.h>

#define movementType skid;




//-----------------------------encoder pins--------------------------
//Back Left Encoder
int blencoderA = 27;
int blencoderB = 26;

int brencoderA = 21;
int brencoderB = 20;

int flencoderA = 19;
int flencoderB = 18;

int frencoderA = 17;
int frencoderB = 16;

//Motor pins

int r1 = 6;
int r2 = 7;

int l1 = 8;
int l2 = 9;
//-------------------------Back Left Encoder------------------------------
int blangle = 0;
void blValue(){
    int blangle = 0;
    int blLastpos;

    int blstate = digitalRead(blencoderA);

    if (blstate != blLastpos)
    {

        if (digitalRead(blencoderB) != blstate)
        {
            blangle++;
        }
        else
        {
            blangle--;
        }
        
    }
    blLastpos = blstate;


}
//------------------------Back right encoder----------------------------
int blangle = 0;
void brValue()
{
    int brangle = 0;
    int brLastpos;

    int brstate = digitalRead(brencoderA);

    if (brstate != brLastpos)
    {

        if (digitalRead(brencoderB) != brstate)
        {
            brangle++;
        }
        else
        {
            brangle--;
        }
    }
    brLastpos = brstate;
}
//-------------------------Front Left Encoder-------------------------------
int flangle = 0;
void flValue()
{
    int flangle = 0;
    int flLastpos;

    int flstate = digitalRead(flencoderA);

    if (flstate != flLastpos)
    {

        if (digitalRead(flencoderB) != flstate)
        {
            flangle++;
        }
        else
        {
            flangle--;
        }
    }
    flLastpos = flstate;
    
}
//-------------------------Front Right Encoder-------------------------------
int frangle = 0;
void frValue()
{
    int angle;
    int frangle = 0;
    int frLastpos;

    int frstate = digitalRead(frencoderA);

    if (frstate != frLastpos)
    {

        if (digitalRead(frencoderB) != frstate)
        {
            frangle++;
        }
        else
        {
            frangle--;
        }
    }
    frLastpos = frstate;
    
}

void turnRight(int time){
    while (time > 0){
        digitalWrite(r1, HIGH);
        digitalWrite(r2, LOW);
    }
}

void turnLeft(){
    while (time > 0) {
        digitalWrite(r2, HIGH);
        digitalWrite(r1,LOW);
    }
}

