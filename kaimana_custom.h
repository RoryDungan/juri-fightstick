
//  kaimana_custom.h Generated from jasensCustoms.com Kaimana Khameleon Code Generator
//  KK Code Generator: http://brightstick.freecade.org
//  Code is provided for entertainment purposes and use with the Kaimana Khameleon and Panzer Fight Stick 2.
//  Code may be copied, modified, resused with this Copyright notice.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  Based on code originally released by ParadiseArcadeShop.com
//  Generator Created:  November 4, 2015    jasenhicks // jasenscustoms.com -- Cavalier Mannitude Encouragement
//
// THIS FILE GENERATED ON: Sunday 28th of January 2024 12:17:06 AM


#ifndef __kaimana_local_h__
#define __kaimana_local_h__
#define __PROG_TYPES_COMPAT__
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "Arduino.h"
#include "kaimana.h"

//ON BUTTON STATE
#define LED_JOY_COLOR_ON 252,35,158
#define LED_P1_COLOR_ON 252,35,158
#define LED_P2_COLOR_ON 252,35,158
#define LED_P3_COLOR_ON 252,35,158
#define LED_P4_COLOR_ON 252,35,158
#define LED_K1_COLOR_ON 252,35,158
#define LED_K2_COLOR_ON 252,35,158
#define LED_K3_COLOR_ON 252,35,158
#define LED_K4_COLOR_ON 252,35,158
#define LED_SELECT_COLOR_ON 0,0,0
#define LED_HOME_COLOR_ON 0,0,0
#define LED_START_COLOR_ON 0,0,0


//OFF BUTTON STATE 
/*
#define LED_JOY_COLOR_OFF 76,200,200
#define LED_P1_COLOR_OFF 76,200,200
#define LED_P2_COLOR_OFF 76,200,200
#define LED_P3_COLOR_OFF 76,200,200
#define LED_P4_COLOR_OFF 76,200,200
#define LED_K1_COLOR_OFF 76,200,200
#define LED_K2_COLOR_OFF 76,200,200
#define LED_K3_COLOR_OFF 76,200,200
#define LED_K4_COLOR_OFF 76,200,200
*/
//#define LED_JOY_COLOR_OFF 30,99,60
//#define LED_JOY_COLOR_OFF 126,17,79
//#define LED_JOY_COLOR_OFF 63,9,40
#define LED_JOY_COLOR_OFF 0,0,0
//#define LED_JOY_COLOR_OFF 13,2,8
#define LED_P1_COLOR_OFF 0,0,0
#define LED_P2_COLOR_OFF 0,0,0
#define LED_P3_COLOR_OFF 0,0,0
#define LED_P4_COLOR_OFF 0,0,0
#define LED_K1_COLOR_OFF 0,0,0
#define LED_K2_COLOR_OFF 0,0,0
#define LED_K3_COLOR_OFF 0,0,0
#define LED_K4_COLOR_OFF 0,0,0
#define LED_SELECT_COLOR_OFF 0,0,0
#define LED_HOME_COLOR_OFF 0,0,0
#define LED_START_COLOR_OFF 0,0,0

// breathing idle
/*
#define IDLE_COLOR_R 30
#define IDLE_COLOR_G 99
#define IDLE_COLOR_B 60
*/

#define IDLE_COLOR_R 252
#define IDLE_COLOR_G 35
#define IDLE_COLOR_B 158


//RANDOM COLORS SET
#define COLOR_RANDOM_1 30,99,60
#define COLOR_RANDOM_2 252,35,158
#define COLOR_RANDOM_3 30,99,60
#define COLOR_RANDOM_4 252,35,158
#define COLOR_RANDOM_5 30,99,60
#define COLOR_RANDOM_6 252,35,158
#define COLOR_RANDOM_7 30,99,60
#define COLOR_RANDOM_8 252,35,158
  
//BOOT AND IDLE SEQUENCE TIMING
#define  BOOT_COLOR_DELAY         250
#define  BOOT_COMPLETE_DELAY      500
#define  MAIN_LOOP_DELAY           50
#define IDLE_TIMEOUT_SECONDS       0
#define IDLE_ANIMATION_DELAY       8
#define BRIGHTNESS                 1

//LED INDEX

#define  LED_P4         24
#define  LED_P4_B       25
#define  LED_P3         26
#define  LED_P3_B       27
#define  LED_P2         28
#define  LED_P2_B       29
#define  LED_P1         30
#define  LED_P1_B       31

#define  LED_JOY        32

#define  LED_JOY_START   0
#define  LED_JOY_END    15

#define  LED_K4         22
#define  LED_K4_B       23
#define  LED_K3         20
#define  LED_K3_B       21
#define  LED_K2         18
#define  LED_K2_B       19
#define  LED_K1         16
#define  LED_K1_B       17

#define  LED_SELECT     33
#define  LED_SELECT_B   0xFF
#define  LED_HOME       34
#define  LED_HOME_B     0xFF
#define  LED_START      35
#define  LED_START_B    0xFF
#define  LED_COUNT      0xFF

#endif
