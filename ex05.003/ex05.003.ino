/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float qualenerg = 45;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (qualenerg >=43.2)
  {
    Serial.print("G");
  }
  else if (qualenerg <3.5)
  {
    Serial.print("A");
  }
  else if (qualenerg<6.5)
  {
    Serial.print("B");
  }
    else if (qualenerg<11.1)
  {
    Serial.print("C");
  }
    else if (qualenerg<17.7)
  {
    Serial.print("D");
  }
      else if (qualenerg<38.2)
  {
    Serial.print("E");
  }
  else
  {
    Serial.print("F");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
