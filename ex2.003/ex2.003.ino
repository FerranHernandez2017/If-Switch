/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 99;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua == 100)
  {
    Serial.print("aigua a 100ºC");
  }
  else if (tempAigua > 100)
  {
    Serial.print("aigua bullint");
  }
  else if (tempAigua>=90)
  {
    Serial.print("aigua apunt de bullir");
  }
  else
  {
    Serial.print("aigua encara no bull");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
