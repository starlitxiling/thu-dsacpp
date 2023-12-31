#pragma once

template <typename T>
Rank Vector<T>::partition ( Rank lo, Rank hi ) {
  swap ( _elem[lo], _elem[ lo + rand() % ( hi - lo ) ] );
  T pivot = _elem[lo];
  int mi = lo;

  for ( Rank k = lo + 1; k < hi; k++ )
    if ( _elem[k] < pivot )
      swap ( _elem[++mi], _elem[k] );

  swap ( _elem[lo], _elem[mi] );
  return mi;
}
