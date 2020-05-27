#include <MsTimer2.h>

#define BLINK_INTERVAL_MS   (500)

void flash( )
{
  static boolean output = HIGH;

  digitalWrite( LED_BUILTIN, output );
  output = !output;
}

void setup() {
  // put your setup code here, to run once:
  pinMode( LED_BUILTIN, OUTPUT );

  MsTimer2::set( BLINK_INTERVAL_MS, flash );
  MsTimer2::start( );
}

void loop() {
  // put your main code here, to run repeatedly:

}
