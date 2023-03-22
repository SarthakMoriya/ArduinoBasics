void setup() {
  // put your setup code here, to run once:
  //Breadboard have 3 main lines + is polar - is for ground and rest a,b,c,d,e.... anything connected on + line is same //ly for - line  and same for a line however if one is connected on a line and other on b line those are different lines

  //we need to connect resistor to reduce the high current ...for the same component higher the resistor lower the current
  //by default the recommended is 220ohm however we can google to know which value to store or else go into electronic theory else the component will blast
  //we basically need 220ohm and 10k ohm resistor in this course 
  // see a resistor code table we mostly have 4 or 5 band resistor with different colors for ex we have 4 band resistor with red-red-brown-gold band 4 bands
  // 1st band + 2nd band show 2 + 2 which is 22ohm
  //3rd band is empty here 
  //4th band is brown which is multiplier band show x10ohm === 22x10=220ohm
  //5th band is gold which is tolerance value which is +-5ohm  which means maximum can be 5% of 220ohm which is 231ohms //ly -5% of 220ohm is minimum ===209ohm

  //Now instead of blinking the default LED light if we want to make our own LED light blink ...

  //1) take the breadboard and connect the -line ie ground line to ground of Arduino Board GND pin (any) 
  //2) take LED bulb and connect to any point on breadboard its shorter leg then connect the same point vertically line og points formed by the shoter leg to ground of billboard  the negative line then 
  //3) then the longer leg's vertical line ke koi bhi point se resistor connect kro 220ohms ka or us ohm ke dusre termial ke vertical points se wire Arduino ke koi pin se connect kro like 12,10 any or simple code likho to blink the blub

  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
}
