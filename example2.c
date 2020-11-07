/*
   zu zeigen, dass für alle 0 <= i < m <= n gilt a[i] = i
              und für alle  m <= j < n gilt a[i] = 0
   falls !(0 <= m <= n) gilt, dann soll a nicht geändert werden
 */

/*@
  behavior do_nothing:
    assumes !(0 <= m <= n);
    assigns \nothing;

  behavior do_something:
    assumes (0 <= m <= n);
    ensures iota_a: \forall integer i; 0 <= i < m ==> a[i] == i;
    ensures rest_zero: \forall integer j; m <= j < n ==> a[j] == 0;
    assigns *(a + (0 .. n - 1));

  complete behaviors;
  disjoint behaviors;
 */
void iota (int* a, int n, int m)
{
  if (0 <= n && 0 <= m && m <= n)
    {
      // set to zero
      /*@
        loop invariant 0 <= i <= n;
        loop invariant \forall integer j; 0 <= j < i ==> a[j] == 0;
        loop assigns i, *(a + (0 .. n - 1));
        loop variant n - i;
       */
      for (int i = 0; i < n; i ++)
        a[i] = 0;

      //@ assert all_zero: \forall integer j; 0 <= j < n ==> a[j] == 0;

      // fill prefix with iota function
      /*@
        loop invariant 0 <= i <= m;
        loop invariant \forall integer j; 0 <= j < i ==> a[j] == j;
        loop invariant \forall integer j; i <= j < n ==> a[j] == 0;
        loop assigns i, *(a + (0 .. n - 1));
        loop variant m - i;
       */
      for (int i = 0; i < m; i++)
        a[i] = i;
    }
}
