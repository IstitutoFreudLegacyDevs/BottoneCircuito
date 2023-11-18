// CODICE BOTTONE (DA SOLO)



const int buttonPin = 2;
int buttonState;
int lastButtonState = LOW;
long lastDebounceTime = 0;
long debounceDelay = 50;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState != lastButtonState) {
    lastDebounceTime = millis(); 
    
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    buttonState != buttonState;  
    
  }
Serial.println(buttonState);
lastButtonState = buttonState;
}