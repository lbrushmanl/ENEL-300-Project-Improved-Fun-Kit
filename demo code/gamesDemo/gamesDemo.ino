int currentRow = 1;
int currentCol = 1;


#define rightMove something
#define leftMove something
#define upMove something
#define downMove something


void setup()  {   
  // put  your setup  code  here, to  run once:   
  pinMode(A2,  OUTPUT);   
  pinMode(A1,  OUTPUT);  //Col2 
  pinMode(A0,  OUTPUT);  //Col3   
  pinMode(13,  OUTPUT); //Col4  
  pinMode(5,  OUTPUT); //Col5 
  pinMode(10,  OUTPUT); //Row1  
  pinMode(9,  OUTPUT); //Row2  
  pinMode(8,  OUTPUT);  
  pinMode(6,  OUTPUT); 
  pinMode(12,  OUTPUT); 
  pinMode(4,  OUTPUT); 
  pinMode(TX, OUTPUT);

  pinMode(rightMove, INPUT);
  pinMode(leftMove, INPUT);
  pinMode(upMove, INPUT);
  pinMode(downMove, INPUT);
  } 
  
  void loop()  {   
    // put  your main code  here, to  run repeatedly:   

    if (rightMove == HIGH) {
      if (currentRow >= 7) {
        currentRow = 1;
      } else {
        currentRow += 1;
      }
      
    } else if (leftMove == HIGH) {
      if (currentRow <= 1) {
        currentRow = 7;
      } else {
        currentRow -= 1;
      }
      
    } else if (upMove == HIGH) {
      if (currentCol >= 5) {
        currentRow = 1;
      } else {
        currentRow += 1;
      }
      
    } else if (downMove == HIGH) {
      if (currentRow >= 7) {
        currentRow = 1;
      } else {
        currentRow += 1;
      }
    }

    if (currentRow == 1) {
      digitalWrite(A2, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A0, LOW);
      digitalWrite(13, LOW);
      digitalWrite(5, LOW);
    } else if (currentRow == 2) {
      digitalWrite(A2, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A0, LOW);
      digitalWrite(13, LOW);
      digitalWrite(5, LOW);
    } else if (currentRow == 3) {
      digitalWrite(A2, LOW);
      digitalWrite(A1, LOW);
      digitalWrite(A0, HIGH);
      digitalWrite(13, LOW);
      digitalWrite(5, LOW);
    } else if (currentRow == 4) {
      digitalWrite(A2, LOW);
      digitalWrite(A1, LOW);
      digitalWrite(A0, LOW);
      digitalWrite(13, HIGH);
      digitalWrite(5, LOW);
    } else if (currentRow == 5) {
      digitalWrite(A2, LOW);
      digitalWrite(A1, LOW);
      digitalWrite(A0, LOW);
      digitalWrite(13, LOW);
      digitalWrite(5, HIGH);
    }

    if (currentCol == 1) {
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(TX, HIGH);
    } else if (currentCol == 2) {
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(TX, HIGH);
    } else if (currentCol == 3) {
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(TX, HIGH);
    } else if (currentCol == 4) {
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(TX, HIGH);
    } else if (currentCol == 5) {
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(TX, HIGH);
    } else if (currentCol == 6) {
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(TX, HIGH);
    } else if (currentCol == 7) {
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(TX, LOW);
    }
  }
