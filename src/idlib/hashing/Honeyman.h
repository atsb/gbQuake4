
#ifndef __HONEYMAN_H__
#define __HONEYMAN_H__

/*
===============================================================================

	Calculates a checksum for a block of data
	using the simplified version of the pathalias hashing
	function by Steve Belovin and Peter Honeyman.

===============================================================================
*/

void Honeyman_InitChecksum( unsigned int &crcvalue );
void Honeyman_UpdateChecksum( unsigned int &crcvalue, const void *data, int length );
void Honeyman_FinishChecksum( unsigned int &crcvalue );
unsigned int Honeyman_BlockChecksum( const void *data, int length );

#endif /* !__HONEYMAN_H__ */
