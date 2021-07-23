#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include "Point.hpp"

Point::Point( void ) : _x(Fixed(0)), _y(Fixed(0)) {
}

Point::~Point( void ){
}

Point::Point( const Point &tocopy ) : _x(tocopy.getX()), _y(tocopy.getY()) {

}

Point::Point( const float x, const float y ) : _x(Fixed(x)), _y(Fixed(y)) {
	return ;
}

Point & Point::operator= ( const Point &tocopy ){
	this->_x = tocopy.getX();
	this->_x = tocopy.getY();
	return *this; 
}

Fixed const Point::getX( void ) const {
	return this->_x;
}

Fixed const Point::getY( void ) const {
	return this->_y;
}

// const Fixed& Point::getY( void ){
// 	return (this->_y);
// }
