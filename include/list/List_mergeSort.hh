#pragma once

template <typename T>
void List<T>::mergeSort ( ListNodePosi<T> & p, int n ) { //valid(p) && rank(p) + n <= size
  if ( n < 2 ) return;
  int m = n >> 1;
  ListNodePosi<T> q = p; for ( int i = 0; i < m; i++ ) q = q->succ;
  mergeSort(p, m); mergeSort(q, n - m);
  p = merge ( p, m, *this, q, n - m );
}
