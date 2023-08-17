void setup()     
{
  for (int i = 7; i <= 13; i++) {
    pinMode(i, OUTPUT);
  };
}
void off() {
  for (int i = 7; i <= 13; i++) {
    digitalWrite(i, LOW);
  };
}
void cero() {
  digitalWrite(13, LOW);
  for (int i = 7; i <= 13; i++) {
    digitalWrite(i, i == 13 ? LOW : HIGH);
  };
}
void uno() {
  for (int i = 7; i <= 13; i++) {
    if (i == 7 || i == 10) {
      digitalWrite(i, HIGH);
    } else {
      digitalWrite(i, LOW);
    }
  }
}
void dos() {
  for (int i = 7; i <= 13; i++) {
    if (i == 12 || i == 7) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void tres() {
  for (int i = 7; i <= 13; i++) {
    if (i == 12 || i == 9) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void cuatro() {
  for (int i = 7; i <= 13; i++) {
    if (i == 11 || i == 9 || i == 8) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void cinco() {
  for (int i = 7; i <= 13; i++) {
    if (i == 10 || i == 9) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void seis() {
  for (int i = 7; i <= 13; i++) {
    if (i == 10) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void siete() {
  for (int i = 7; i <= 13; i++) {
    if (i == 8 || i == 9 || i == 12 || i == 13) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void ocho() {
  for (int i = 7; i <= 13; i++) {
    digitalWrite(i, HIGH);
  }
}
void nueve() {
  for (int i = 7; i <= 13; i++) {
    if (i == 8 || i == 9) {
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
    }
  }
}
void loop()       
{
  cero();
  delay(1000);
  uno();
  delay(1000);
  dos();
  delay(1000);
  tres();
  delay(1000);
  cuatro();
  delay(1000);
  cinco();
  delay(1000);
  seis();
  delay(1000);
  siete();
  delay(1000);
  ocho();
  delay(1000);
  nueve();
  delay(1000);
  off();
  delay(1000);
}
