//! \file randutils.h
//! Utilities to facilitate generating random numbers.
#ifndef RANDUTILS_H
#define RANDUTILS_H

//! Initializes a new sequence of random numbers.
/*!
 * Sets the seed of the random number generator using the current time.
 */
void randinit();

//! Generates a random integer value between a minimum and maximum values.
/*!
 * \param min The minimum integer value to generate a random number with.
 * \param max The maximum integer value to generate a random number with.
 * \return A random integer value between min and max esclusive.
 */
int randbetween(int min, int max);

#endif // RANDUTILS_H
