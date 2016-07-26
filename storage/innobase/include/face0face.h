/**************************************************//**
@file include/face0face.h
The simple FaCE utilities

Created JAN/14/2016 Mijin Ahn
*******************************************************/

#ifndef face0face_h
#define face0face_h

#include "log0log.h"

#define SSD_CACHE_FACE 1
#define FACE_DEBUG_PRINT(fmt, args...) fprintf(stderr, "FACE DEBUG: %s:%d:%s(): " fmt, \
        __FILE__, __LINE__, __func__, ##args)

/* The data structure of SSD cache metadata directory */
struct ssd_meta_dir_t {
	ib_uint32_t     space;		/* tablespace id */
    ib_uint32_t     offset;		/* page number */
    lsn_t           lsn;        /* lsn */ 
	uint8_t         flags;		/* flag byte (valid, dirty) */
	ssd_meta_dir_t* hash;		/* node used in chaining to ssd_cache */
	ulint           ssd_offset;	/* ssd offset */
	ib_mutex_t	    mutex;		/* mutex for metadata entry */
	byte		    io_fix;		/* type of pending I/O operation */
};

#endif
