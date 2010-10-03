/* 
 * File:   main.c
 * Author: daniel
 *
 * Created on 20. Juni 2010, 19:57
 */

#include <stdlib.h>
#include <stdio.h>
#include <usb.h>

#include "USBLamp.h"

//using namespace std;


int main(int argc, char** argv) {
    printf("start\n");
    USBLamp lamp = USBLamp();
    lamp.open();
    lamp.send();
    lamp.close();
    printf("end\n");

    return 0;
}