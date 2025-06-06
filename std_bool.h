/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef FLUENT_LIBC_STDBOOL_LIBRARY_H
#define FLUENT_LIBC_STDBOOL_LIBRARY_H

#if defined(__cplusplus)
extern "C"
{
#endif

// Guard against bool type redefinition in C++
#if !defined(__cplusplus)
 typedef int bool;
#endif

// Define true/false values
#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#if defined(__cplusplus)
}
#endif

#endif //FLUENT_LIBC_STDBOOL_LIBRARY_H