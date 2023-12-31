#pragma once

template <typename T> bool BST<T>::remove ( const T& e ) {
  BinNodePosi<T> & x = search ( e ); if ( !x ) return false;
  removeAt ( x, _hot ); _size--;
  updataHeightAbove ( _hot );
  return true;
}
