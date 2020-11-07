/*
   zu zeigen: abs berechnet den Betrag
 */

/*@
  behavior negative:
    assumes x < 0;
    ensures \result == -x;

  behavior non_negative:
    assumes x >= 0;
    ensures \result == x;

  complete behaviors;
  disjoint behaviors;
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
