/* ///////////////////////////////////////////////////////////////////////
 * includes
 */ 
#include "tbox.h"
#include <stdlib.h>

/* ///////////////////////////////////////////////////////////////////////
 * main
 */ 
tb_int_t main(tb_int_t argc, tb_char_t** argv)
{
	// init tbox
	if (!tb_init(malloc(10 * 1024 * 1024), 10 * 1024 * 1024)) return 0;

	// read
	tb_object_t* object = tb_object_read_from_url(argv[1]);

	// writ
	if (object)
	{
		// dump object
		tb_object_dump(object);

		// exit object
		tb_object_exit(object);
	}
	
	// exit tbox
	tb_exit();
	return 0;
}

