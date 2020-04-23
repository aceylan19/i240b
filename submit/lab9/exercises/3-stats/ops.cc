#include "ops.hh"

/** return < 0, == 0, > 0 if a < b, a == b, a > b */
int
Ops::compare(int a, int b) {
  return a - b;
}

/** swap a[i] and a[j] */
void
Ops::swap(int a[], int i, int j)
{
  int t = a[i];
  a[i] = a[j];
  a[j] = t;
}

int
Ops_child::compare(int a, int b) {
	compare_counter++;
	return a - b;
}

void
Ops_child::swap(int a[], int i, int j) {
	swap_counter++;
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}
