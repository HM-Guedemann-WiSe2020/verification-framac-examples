/*
   zu zeigen: abs berechnet den Betrag
 */

int abs (int x) {
  int r;
  if (x >= 0) {
    r = x;
  }
  else {
    r = -x;
  }
  return r;
}
