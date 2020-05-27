#include <MsTimer2.h>

#define ONE_SHOT_MS   (3000)  /* Timer for OneShot(ms)   */
#define INTERVAL_MS   (500)   /* Timer for Interrupt(ms) */

void oneshot( )
{
  static unsigned short interval_count = 0;

  interval_count++;
  if( interval_count == ( ONE_SHOT_MS / INTERVAL_MS ) ){
    /* Time for OneShot */
    digitalWrite( LED_BUILTIN, HIGH );
    MsTimer2::stop( );
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode( LED_BUILTIN, OUTPUT );
    
  MsTimer2::set( INTERVAL_MS, oneshot );
  MsTimer2::start( );
}

void loop() {
  // put your main code here, to run repeatedly:

}
