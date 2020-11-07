/*
   zu zeigen, dass für alle 0 <= i < m <= n gilt a[i] = i
              und für alle  m <= j < n gilt a[i] = 0
   falls !(0 <= m <= n) gilt, dann soll a nicht geändert werden
 */

void iota (int* a, int n, int m)
{
  if (0 <= n && 0 <= m && m <= n)
    {
      // set to zero
      for (int i = 0; i < n; i ++)
        a[i] = 0;

      // fill prefix with iota function
      for (int i = 0; i < m; i++)
        a[i] = i;
    }
}
