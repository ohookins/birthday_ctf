void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void pulse(int on, int off) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(on);
  digitalWrite(LED_BUILTIN, LOW);
  delay(off);
}

void wordbreak() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void dit() {
  pulse(300, 200);
}

void dah() {
  pulse(1000, 200);
}

void play(char* input) {
  char* c = input;
  while(*c) {
    if (*c == '-') dah();
    if (*c == '.') dit();
    c++;
  }
}

// morse code letters
void a() { play(".-"); }
void b() { play("-..."); }
void c() { play("-.-."); }
void d() { play("-.."); }
void e() { play("."); }
void f() { play("..-."); }
void g() { play("--."); }
void h() { play("...."); }
void i() { play(".."); }
void j() { play(".---"); }
void k() { play("-.-"); }
void l() { play(".-.."); }
void m() { play("--"); }
void n() { play("-."); }
void o() { play("---"); }
void p() { play(".--."); }
void q() { play("--.-"); }
void r() { play(".-."); }
void s() { play("..."); }
void t() { play("-"); }
void u() { play("..-"); }
void v() { play("...-"); }
void w() { play(".--"); }
void x() { play("-..-"); }
void y() { play("-.--"); }
void z() { play("--.."); }

void loop() {
  t(); h(); e(); wordbreak();
  c(); h(); i(); c(); k(); e(); n(); wordbreak();
  k(); n(); o(); w(); s(); wordbreak();
  s(); o(); m(); e(); t(); h(); i(); n(); g(); wordbreak();

  delay(5000);
}