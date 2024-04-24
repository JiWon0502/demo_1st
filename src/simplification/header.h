/* Generated with cbindgen:0.26.0 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * A C-compatible `struct` originating **inside** Rust
 * used for passing arrays across the FFI boundary
 */
typedef struct InternalArray {
    void *data;
    size_t len;
} InternalArray;

/**
 * A C-compatible `struct` originating **outside** Rust
 * used for passing arrays across the FFI boundary
 */
typedef struct ExternalArray {
    const void *data;
    size_t len;
} ExternalArray;

/**
 * FFI wrapper for RDP, returning simplified geometry **coordinates**
 *
 * Callers must pass two arguments:
 *
 * - a [Struct](struct.Array.html) with two fields:
 *     - `data`, a void pointer to an array of floating-point point coordinates: `[[1.0, 2.0], ...]`
 *     - `len`, the length of the array being passed. Its type must be `size_t`
 * - a double-precision `float` for the tolerance
 *
 * Implementations calling this function **must** call [`drop_float_array`](fn.drop_float_array.html)
 * with the returned `Array` pointer, in order to free the memory it allocates.
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
struct InternalArray simplify_rdp_ffi(struct ExternalArray coords,
                                      double precision);

/**
 * FFI wrapper for RDP, returning simplified geometry **indices**
 *
 * Callers must pass two arguments:
 *
 * - a [Struct](struct.Array.html) with two fields:
 *     - `data`, a void pointer to an array of floating-point point coordinates: `[[1.0, 2.0], ...]`
 *     - `len`, the length of the array being passed. Its type must be `size_t`
 * - a double-precision `float` for the tolerance
 *
 * Implementations calling this function **must** call [`drop_usize_array`](fn.drop_usize_array.html)
 * with the returned `Array` pointer, in order to free the memory it allocates.
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
struct InternalArray simplify_rdp_idx_ffi(struct ExternalArray coords,
                                          double precision);

/**
 * FFI wrapper for Visvalingam-Whyatt, returning simplified geometry **coordinates**
 *
 * Callers must pass two arguments:
 *
 * - a [Struct](struct.Array.html) with two fields:
 *     - `data`, a void pointer to an array of floating-point point coordinates: `[[1.0, 2.0], ...]`
 *     - `len`, the length of the array being passed. Its type must be `size_t`
 * - a double-precision `float` for the epsilon
 *
 * Implementations calling this function **must** call [`drop_float_array`](fn.drop_float_array.html)
 * with the returned `Array` pointer, in order to free the memory it allocates.
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
struct InternalArray simplify_visvalingam_ffi(struct ExternalArray coords,
                                              double precision);

/**
 * FFI wrapper for Visvalingam-Whyatt, returning simplified geometry **indices**
 *
 * Callers must pass two arguments:
 *
 * - a [Struct](struct.Array.html) with two fields:
 *     - `data`, a void pointer to an array of floating-point point coordinates: `[[1.0, 2.0], ...]`
 *     - `len`, the length of the array being passed. Its type must be `size_t`
 * - a double-precision `float` for the epsilon
 *
 * Implementations calling this function **must** call [`drop_usize_array`](fn.drop_usize_array.html)
 * with the returned `Array` pointer, in order to free the memory it allocates.
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
struct InternalArray simplify_visvalingam_idx_ffi(struct ExternalArray coords,
                                                  double precision);

/**
 * FFI wrapper for topology-preserving Visvalingam-Whyatt, returning simplified geometry **coordinates**.
 *
 * Callers must pass two arguments:
 *
 * - a [Struct](struct.Array.html) with two fields:
 *     - `data`, a void pointer to an array of floating-point point coordinates: `[[1.0, 2.0], ...]`
 *     - `len`, the length of the array being passed. Its type must be `size_t`
 * - a double-precision `float` for the epsilon
 *
 * Implementations calling this function **must** call [`drop_float_array`](fn.drop_float_array.html)
 * with the returned `Array` pointer, in order to free the memory it allocates.
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
struct InternalArray simplify_visvalingamp_ffi(struct ExternalArray coords,
                                               double precision);

/**
 * Free memory which has been allocated across the FFI boundary by:
 * - simplify_rdp_ffi
 * - simplify_visvalingam_ffi
 * - simplify_visvalingamp_ffi
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
void drop_float_array(struct InternalArray arr);

/**
 * Free memory which has been allocated across the FFI boundary by:
 * - simplify_rdp_idx_ffi
 * - simplify_visvalingam_idx_ffi
 *
 * # Safety
 *
 * This function is unsafe because it accesses a raw pointer which could contain arbitrary data
 */
void drop_usize_array(struct InternalArray arr);
