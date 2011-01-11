/*
 *	file:	avector.h
 *	brief:	basic vector support
 *	author:	raiden awkward
 *	date:	20110111
 *	version 0.1
 */

#include <stdlib.h>

template <class T>
class AVector
{
private:
	T** _list;
	int _count;
	int _size;
public:
	AVector():_list(NULL),_count(0),_size(0){}
	T* operator [] (int index) const { return _list[index];}
	T** get(){ return _list;}

};
